#include <Arduino.h>
#include <LiquidCrystal.h> 

// LCD পিন আপডেট করা হলো (d4 এখন 6 নম্বর পিনে)
const int rs = 12, en = 11, d4 = 6, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int inputPin = 5; // Timer1 External Clock Input Pin (T1)
const double capacitance = 206.0e-9; 
bool inductorPresent = false; 

// টাইমার ওভারফ্লো ট্র্যাক করার জন্য ভেরিয়েবল
volatile unsigned long overflowCount = 0;

// Timer1 যখন 65535 এর পর ওভারফ্লো হবে, তখন এটি কল হবে
ISR(TIMER1_OVF_vect) {
  overflowCount++;
}

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("LC Meter Ready!");
  
  pinMode(inputPin, INPUT);
  
  delay(2000);
  lcd.clear();
}

void loop() {
  // Timer1 রিসেট এবং সেটআপ
  TCCR1A = 0; 
  TCCR1B = 0; 
  TCNT1 = 0;  // কাউন্টার জিরো করা হলো
  overflowCount = 0; // ওভারফ্লো জিরো করা হলো
  
  TIMSK1 = (1 << TOIE1); // ওভারফ্লো ইন্টারাপ্ট চালু
  
  // Timer1 চালু করা হলো (Rising Edge-এ কাউন্ট করবে এক্সটার্নাল পিন D5 থেকে)
  TCCR1B = (1 << CS12) | (1 << CS11) | (1 << CS10); 
  
  // ঠিক ১০০ মিলি-সেকেন্ড অপেক্ষা করে পালস গোনা হবে
  delay(100); 
  
  // Timer1 থামানো হলো
  TCCR1B = 0; 
  
  // মোট পালস হিসাব করা (ওভারফ্লো * 65536 + বর্তমান কাউন্ট)
  unsigned long totalPulses = (overflowCount * 65536UL) + TCNT1;
  
  // যেহেতু ১০০ মিলি-সেকেন্ড মাপা হয়েছে, তাই ১ সেকেন্ডের ফ্রিকোয়েন্সি বের করতে ১০ দিয়ে গুণ
  unsigned long freq = totalPulses * 10; 

  if (freq < 100) { // যদি ফ্রিকোয়েন্সি খুব কম বা না থাকে
    if (inductorPresent) {
      lcd.clear();
      inductorPresent = false; 
    }
    lcd.setCursor(0, 0);
    lcd.print("Insert inductor ");
    lcd.setCursor(0, 1);
    lcd.print("                ");
  } 
  else {
    if (!inductorPresent) {
      lcd.clear();
      inductorPresent = true; 
    }
    
    // ইন্ডাক্ট্যান্স ক্যালকুলেশন
    double freq_d = (double)freq;
    double inductance = 1.0 / (4.0 * PI * PI * freq_d * freq_d * capacitance);
    double inductance_mH = inductance * 1000.0; 

    lcd.setCursor(0, 0);
    lcd.print("F: ");
    lcd.print(freq);
    lcd.print(" Hz      "); 
    
    lcd.setCursor(0, 1);
    lcd.print("L: ");
    
    if (inductance_mH < 1.0) {
      double inductance_uH = inductance_mH * 1000.0;
      lcd.print(inductance_uH, 2);
      lcd.print(" uH      "); 
    } else {
      lcd.print(inductance_mH, 3);
      lcd.print(" mH      ");
    }
  }
}