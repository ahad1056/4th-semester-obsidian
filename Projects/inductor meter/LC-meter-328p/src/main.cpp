#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// I2C LCD সেটআপ (লেখা না আসলে 0x27 এর বদলে 0x3F ব্যবহার করুন)
LiquidCrystal_I2C lcd(0x27, 16, 2);

const int inputPin = 5; // Timer1 External Clock Input Pin (T1 / D5)

// ==========================================================
// আপনার মাপা ক্যালিব্রেশন মান দুটি স্থায়ীভাবে সেভ করা হলো:
const double F0 = 345851.0;  // শর্ট অবস্থায় বেস ফ্রিকোয়েন্সি (Hz)
const double L0 = 93.13e-6;  // রেফারেন্স ইন্ডাক্ট্যান্স: 93.13 uH (Henry এককে)
// ==========================================================

bool signalPresent = false;
int detectCount = 0; // ইন্ডাক্টর লাগানোর পর কত সেকেন্ড পার হলো তা ট্র্যাক করবে

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

void resetMeasurement() {
  for (int i = 0; i < numSamples; i++) {
    freqSamples[i] = 0;
  }
  sampleIndex = 0;
  sampleCount = 0;
  freqSum = 0;
  detectCount = 0;
}

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Auto-Range LC");
  lcd.setCursor(0, 1);
  lcd.print("L0: 93.13 uH");

  pinMode(inputPin, INPUT);
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
  TIFR1 = (1 << TOV1);   // পুরনো ওভারফ্লো ফ্ল্যাগ ক্লিয়ার

  TIMSK1 = (1 << TOIE1); // ওভারফ্লো ইন্টারাপ্ট চালু

  // Falling Edge-এ কাউন্ট করবে Pin D5 (T1) থেকে
  TCCR1B = (1 << CS12) | (1 << CS11);

  // ঠিক ১ সেকেন্ড (১০০০ ms) ধরে পালস গোনা হবে (1 Hz রেজোলিউশন)
  delay(1000);

  // Timer1 ও ইন্টারাপ্ট বন্ধ করা হলো
  TCCR1B = 0;
  TIMSK1 = 0;

  // ১ সেকেন্ডে মোট পালস = ফ্রিকোয়েন্সি (Hz)
  unsigned long freq = (overflowCount * 65536UL) + TCNT1;

  if (freq < 100) { // প্রোব খোলা থাকলে বা ইন্ডাক্টর না থাকলে
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

    // প্রথম ২ সেকেন্ড অস্থির রিডিং বাদ দিয়ে স্ট্যাবিলাইজ করা হচ্ছে
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

    // ২ সেকেন্ড পর থেকে ৫ সেকেন্ডের মুভিং গড় হিসাব চলবে
    freqSum -= freqSamples[sampleIndex];
    freqSamples[sampleIndex] = freq;
    freqSum += freq;

    sampleIndex = (sampleIndex + 1) % numSamples;
    if (sampleCount < numSamples) {
      sampleCount++;
    }

    double avgFreq = (double)freqSum / (double)sampleCount;

    // সিরিজ অনুপাত সূত্র: Lx = L0 * ((F0 / avgFreq)^2 - 1)
    double freqRatio = F0 / avgFreq;
    double inductance_H = L0 * ((freqRatio * freqRatio) - 1.0);

    // সামান্য তাপমাত্রা ড্রিফটে নেগেটিভ মান আসলে 0.0 দেখাবে
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
      // 1 uH এর নিচে হলে Nanohenry (nH) দেখাবে
      double inductance_nH = inductance_H * 1.0e9;
      lcd.print(inductance_nH, 1);
      lcd.print(" nH     ");
    } 
    else if (inductance_H < 1.0e-3) {
      // 1 uH থেকে 999.99 uH পর্যন্ত Microhenry (uH) দেখাবে
      double inductance_uH = inductance_H * 1.0e6;
      lcd.print(inductance_uH, 2);
      lcd.print(" uH     ");
    } 
    else {
      // 1 mH বা তার বেশি হলে Millihenry (mH) দেখাবে
      double inductance_mH = inductance_H * 1.0e3;
      lcd.print(inductance_mH, 3);
      lcd.print(" mH     ");
    }
  }
}