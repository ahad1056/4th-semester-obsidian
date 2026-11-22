#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// I2C LCD সেটআপ (লেখা না আসলে 0x27 এর বদলে 0x3F ব্যবহার করুন)
LiquidCrystal_I2C lcd(0x27, 16, 2);

const int inputPin = 5;               // Timer1 External Clock Input Pin (T1 / D5)
const double capacitance = 2.274e-9;  // আপনার মাপা ক্যাপাসিটর: 2.274 nF
bool signalPresent = false;

// ৫ সেকেন্ডের মুভিং গড় (১ সেকেন্ড গেট টাইম × ৫ স্যাম্পল = ৫ সেকেন্ড)
const int numSamples = 5;
unsigned long freqSamples[numSamples];
int sampleIndex = 0;
int sampleCount = 0;
unsigned long freqSum = 0;

volatile unsigned long overflowCount = 0;

// Timer1 যখন 65535 পার হবে তখন ওভারফ্লো কাউন্ট বাড়বে
ISR(TIMER1_OVF_vect) {
  overflowCount++;
}

void resetMovingAverage() {
  for (int i = 0; i < numSamples; i++) {
    freqSamples[i] = 0;
  }
  sampleIndex = 0;
  sampleCount = 0;
  freqSum = 0;
}

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("F0 Calibration");
  lcd.setCursor(0, 1);
  lcd.print("C = 2.274 nF");

  pinMode(inputPin, INPUT);
  resetMovingAverage();

  delay(2000);
  lcd.clear();
}

void loop() {
  // Timer1 রিসেট ও সেটআপ
  TCCR1A = 0;
  TCCR1B = 0;
  TCNT1 = 0;
  overflowCount = 0;
  TIFR1 = (1 << TOV1);   // পুরনো ওভারফ্লো ফ্ল্যাগ ক্লিয়ার

  TIMSK1 = (1 << TOIE1); // ওভারফ্লো ইন্টারাপ্ট চালু

  // Falling Edge-এ কাউন্ট করবে Pin D5 (T1) থেকে
  TCCR1B = (1 << CS12) | (1 << CS11);

  // ঠিক ১ সেকেন্ড (১০০০ ms) ধরে পালস গোনা হবে (সরাসরি 1 Hz রেজোলিউশন)
  delay(1000);

  // Timer1 ও ইন্টারাপ্ট বন্ধ করা হলো
  TCCR1B = 0;
  TIMSK1 = 0;

  // ১ সেকেন্ডে মোট পালস = সরাসরি ফ্রিকোয়েন্সি (Hz)
  unsigned long freq = (overflowCount * 65536UL) + TCNT1;

  if (freq < 100) { // ফ্রিকোয়েন্সি না থাকলে বা সার্কিট ওপেন থাকলে
    if (signalPresent) {
      lcd.clear();
      signalPresent = false;
    }
    resetMovingAverage();

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

    // ৫ সেকেন্ডের মুভিং গড় হিসাব
    freqSum -= freqSamples[sampleIndex];
    freqSamples[sampleIndex] = freq;
    freqSum += freq;

    sampleIndex = (sampleIndex + 1) % numSamples;
    if (sampleCount < numSamples) {
      sampleCount++;
    }

    double avgFreq = (double)freqSum / (double)sampleCount;

    // 2.274 nF ক্যাপাসিটর অনুযায়ী L0 হিসাব
    double inductance = 1.0 / (4.0 * PI * PI * avgFreq * avgFreq * capacitance);
    double inductance_mH = inductance * 1000.0;

    // লাইন ১: একদম নিখুঁত ফ্রিকোয়েন্সি (Hz এককে)
    lcd.setCursor(0, 0);
    lcd.print("F: ");
    lcd.print(avgFreq, 1);
    lcd.print(" Hz    ");

    // লাইন ২: ক্যালকুলেট হওয়া L0 মান
    lcd.setCursor(0, 1);
    lcd.print("L0:");

    if (inductance_mH < 1.0) {
      double inductance_uH = inductance_mH * 1000.0;
      lcd.print(inductance_uH, 2);
      lcd.print(" uH    ");
    } else {
      lcd.print(inductance_mH, 3);
      lcd.print(" mH    ");
    }
  }
}