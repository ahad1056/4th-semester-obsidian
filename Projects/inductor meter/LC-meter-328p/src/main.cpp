#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <EEPROM.h>

// I2C LCD সেটআপ (লেখা না আসলে 0x27 এর বদলে 0x3F ব্যবহার করুন)
LiquidCrystal_I2C lcd(0x27, 16, 2);

const int inputPin = 5;     // Timer1 External Clock Input Pin (T1 / D5 / Chip Pin 11)
const int zeroBtnPin = 2;   // Zero Calibration Push Switch (D2 / Chip Pin 4)

// ==========================================================
// আপনার স্থায়ী রেফারেন্স ইন্ডাক্ট্যান্স এবং ডিফল্ট F0:
const double L0 = 93.13e-6;         // 93.13 uH (Henry এককে)
const double DEFAULT_F0 = 345851.0; // প্রথমবার বা মেমোরি ফাঁকা থাকলে এই মান নেবে
double F0 = DEFAULT_F0;             // EEPROM থেকে লোড ও আপডেট হবে
// ==========================================================

// EEPROM ঠিকানা ও ভ্যালিডেশন কোড
const int EEPROM_MAGIC_ADDR = 0;
const int EEPROM_F0_ADDR = 4;
const uint32_t MAGIC_NUMBER = 0x4C433031; // সেভ করা ডেটা চেনার সংকেত

bool signalPresent = false;
int detectCount = 0;

// ৫ সেকেন্ডের মুভিং গড়
const int numSamples = 5;
unsigned long freqSamples[numSamples];
int sampleIndex = 0;
int sampleCount = 0;
unsigned long freqSum = 0;

volatile unsigned long overflowCount = 0;

// Timer1 ওভারফ্লো ইন্টারাপ্ট
ISR(TIMER1_OVF_vect) {
  overflowCount++;
}

void resetMeasurement() {
  for (int i = 0; i < numSamples; i++) {
    freqSamples[i] = 0;
  }
  sampleIndex = 0;
  sampleCount = 0;
  freqSum = 0;
  detectCount = 0;
}

// EEPROM থেকে সংরক্ষিত F0 লোড করার ফাংশন
void loadF0FromEEPROM() {
  uint32_t magic = 0;
  EEPROM.get(EEPROM_MAGIC_ADDR, magic);
  if (magic == MAGIC_NUMBER) {
    double savedF0 = 0.0;
    EEPROM.get(EEPROM_F0_ADDR, savedF0);
    // মানটি যৌক্তিক সীমার মধ্যে থাকলে লোড করবে
    if (savedF0 > 10000.0 && savedF0 < 2000000.0) {
      F0 = savedF0;
    }
  }
}

// নতুন F0 স্থায়ীভাবে EEPROM-এ সেভ করার ফাংশন
void saveF0ToEEPROM(double newF0) {
  EEPROM.put(EEPROM_MAGIC_ADDR, MAGIC_NUMBER);
  EEPROM.put(EEPROM_F0_ADDR, newF0);
}

void setup() {
  pinMode(inputPin, INPUT);
  pinMode(zeroBtnPin, INPUT_PULLUP); // বাটনের জন্য ইন্টারনাল পুল-আপ চালু

  loadF0FromEEPROM(); // পাওয়ার অন হলেই মেমোরি থেকে সেভ করা F0 লোড হবে

  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Auto-Range LC");
  lcd.setCursor(0, 1);
  lcd.print("F0:");
  lcd.print((unsigned long)F0);
  lcd.print(" Hz");

  resetMeasurement();
  delay(2000);
  lcd.clear();
}

void loop() {
  // Timer1 রিসেট ও সেটআপ
  TCCR1A = 0;
  TCCR1B = 0;
  TCNT1 = 0;
  overflowCount = 0;
  TIFR1 = (1 << TOV1);

  TIMSK1 = (1 << TOIE1);
  // Falling Edge-এ কাউন্ট করবে Pin D5 (T1) থেকে
  TCCR1B = (1 << CS12) | (1 << CS11);

  // বাটন চেক করার পাশাপাশি ১ সেকেন্ড (১০০০ ms) ধরে পালস গোনা হবে
  bool zeroPressed = false;
  unsigned long startTime = millis();
  while (millis() - startTime < 1000) {
    if (digitalRead(zeroBtnPin) == LOW) {
      zeroPressed = true;
    }
  }

  // Timer1 ও ইন্টারাপ্ট বন্ধ করা হলো
  TCCR1B = 0;
  TIMSK1 = 0;

  unsigned long freq = (overflowCount * 65536UL) + TCNT1;

  if (freq < 100) {
    if (signalPresent) {
      lcd.clear();
      signalPresent = false;
    }
    resetMeasurement();

    lcd.setCursor(0, 0);
    lcd.print("Insert inductor ");
    lcd.setCursor(0, 1);
    lcd.print("                ");
  } 
  else {
    if (!signalPresent) {
      lcd.clear();
      signalPresent = true;
    }

    detectCount++;

    // প্রথম ২ সেকেন্ড অস্থির রিডিং বাদ দিয়ে স্ট্যাবিলাইজ করা হচ্ছে
    if (detectCount <= 2) {
      if (detectCount == 2) {
        freqSamples[0] = freq;
        freqSum = freq;
        sampleIndex = 1;
        sampleCount = 1;
      }

      lcd.setCursor(0, 0);
      lcd.print("L detected      ");
      lcd.setCursor(0, 1);
      lcd.print("Calculating...  ");
      return;
    }

    // ৫ সেকেন্ডের মুভিং গড় হিসাব
    freqSum -= freqSamples[sampleIndex];
    freqSamples[sampleIndex] = freq;
    freqSum += freq;

    sampleIndex = (sampleIndex + 1) % numSamples;
    if (sampleCount < numSamples) {
      sampleCount++;
    }

    double avgFreq = (double)freqSum / (double)sampleCount;

    // বাটন চাপা হলে বর্তমান গড় ফ্রিকোয়েন্সিকে নতুন F0 হিসেবে সেভ করবে
    if (zeroPressed) {
      F0 = avgFreq;
      saveF0ToEEPROM(F0);

      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Zero Calibrated!");
      lcd.setCursor(0, 1);
      lcd.print("F0: ");
      lcd.print(F0, 1);
      lcd.print(" Hz");
      delay(1500);
      lcd.clear();
      return;
    }

    // সিরিজ অনুপাত সূত্র: Lx = L0 * ((F0 / avgFreq)^2 - 1)
    double freqRatio = F0 / avgFreq;
    double inductance_H = L0 * ((freqRatio * freqRatio) - 1.0);

    if (inductance_H < 0.0) {
      inductance_H = 0.0;
    }

    // লাইন ১: স্থির ফ্রিকোয়েন্সি
    lcd.setCursor(0, 0);
    lcd.print("F: ");
    lcd.print(avgFreq, 1);
    lcd.print(" Hz     ");

    // লাইন ২: অটো-রেঞ্জিং ইন্ডাক্ট্যান্স (nH / uH / mH)
    lcd.setCursor(0, 1);
    lcd.print("L: ");

    if (inductance_H < 1.0e-6) {
      double inductance_nH = inductance_H * 1.0e9;
      lcd.print(inductance_nH, 1);
      lcd.print(" nH     ");
    } 
    else if (inductance_H < 1.0e-3) {
      double inductance_uH = inductance_H * 1.0e6;
      lcd.print(inductance_uH, 2);
      lcd.print(" uH     ");
    } 
    else {
      double inductance_mH = inductance_H * 1.0e3;
      lcd.print(inductance_mH, 3);
      lcd.print(" mH     ");
    }
  }
}