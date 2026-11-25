
# 8 November class 1 

   ![[IMG_20261110_112229.webp|130]]      ![[IMG_20261110_112233.webp|124]]

Class Notes: Statistics Fundamentals

📌 Core Definitions

- Population: The totality of all elements under study.
- Sample: The portion or the representative part of the population.
- Variable: The changing characteristic of the population which varies from person to person or phenomenon to phenomenon.
- Data (Observation): The numerical expression of a variable.
  - For example, if height is the variable, then 6 feet 0 inches is the data.

📊 Variables & Scales of Measurement

Types of Variables: ==🔴There are 2 type of variables== 

- Qualitative: Does not represent by number. Includes [^2]Nominal and [^3]Ordinal.
- Quantitative: Represents by number. Includes Ratio and Interval.
  - Continuous: Can include fractions.
  - Discrete: Integer numbers only.

Scales of Measurement:

1. [^2]Nominal
2. [^3]Ordinal
3. Interval: Described as a "Weak Scale" (Example: Temperature).
4. Ratio: Described as a "Strong scale".

📂 Data Sources & Distribution

- Source of Data:
  - Primary Data: Can be grouped or ungrouped.
  - Secondary Data.
-[^4] Frequency Distribution Table: Consists of columns for Class Interval, Tally range, and Frequency.

🎯 Central Tendency

- Central tendency refers to the central value of the data.
- Measures include:
  - [^5]Mean
  - [^6]Median
  - [^7]Mode
- differences : [^8]x 
- Types of Mean: A.M ([^9]Arithmetic Mean), G.M ([^10]Geometric Mean), and H.M ([^11]Harmonic Mean).
- Important Relationship: A.M is greater than or equal to G.M, which is greater than or equal to H.M.

---

Tags: #statistics #data #variables #central-tendency #measurement-scales #class-notes



# 10 November class 2
![[JPEG_20261111_055659_8646015617116971960.webp|105]]    ![[JPEG_20261111_055804_3730326127798271696.webp|96]]   


## Topic: 
### Today's Class Notes: Basic Statistics

## 📌 Main Topics
- Frequency Distribution Table
- Mean Calculation
- Median & Quartiles
- Measures of Central Tendency
---

## 📝 Summary

**1. Frequency Distribution:**
- The notes demonstrate how to create a frequency distribution table by determining the class interval, frequency ($f_i$), mid-value ($x$), and cumulative frequency ($cf$)
- [^12]Sturges' formula for calculating the number of classes ($k$) is given: 
  $$ k = 1 + 3.225 \log_{10}(N) $$
- The formula for finding the Class Interval ($I$) is: 
  $$ I = \frac{\text{Range}}{k} $$
- The concepts of [^14]"closed interval" , "[^15]open interval" and "[^16]semi-open interval"are also mentioned

**2. Mean:**
- The formula for calculating the mean of grouped data is provided as:
  $$ \bar{x} = \frac{\sum fx}{\sum f} $$
- A solved example shows $\sum fx = 87$ and $\sum f = 15$, resulting in a mean of $5.8$


**3. Median:**
- The algorithm for finding the median class depends on the total observation: use position $\frac{n}{2}$ for even numbers, and position $\frac{n+1}{2}$ for odd numbers
- The main formula for calculating the median is:
  $$ Me = L + \frac{\frac{N}{2} - cf}{f} \times c $$
  *(Here, $L$ = lower limit, $cf$ = cumulative frequency just above the median class, $f$ = frequency of the median class, and $c$ = class interval)

**4. [^17]Quartile & [^18]Quantile:**
- The formula for calculating the $i$-th Quartile ($Q_i$) is:
  $$ Q_i = L + \frac{\frac{iN}{4} - cf}{f_{Qi}} \times c $$
- A diagram illustrates that the 2nd quartile ($Q_2$) is equal to the median.
- The topics of "Inter quartile Range" and "Quartile deviation" are listed.
- The "Quantile family" is categorized under central tendency measurement[^19]

---
**Tags:** #statistics #class-notes #math #frequency-distribution #mean #median



# 12 November Class 3
   ![[IMG_20261112_114640.webp|100]]   ![[IMG_20261112_114645.webp|100]]    ![[IMG_20261112_114650.webp|100]]    ![[IMG_20261112_114653.webp|100]]

### Class Notes: Statistics - Central Tendency & Dispersion

## 📌 Frequency Distribution & Mode
- **FDT (Frequency Distribution Table):** A table is shown to explain how to arrange class intervals, mid-values, and frequencies, where the total frequency (Sum of f) = 15.
- **Mode:** The value that occurs most frequently in a dataset is called the mode.
- **Types of Mode:**
  - Unimodal.
  - Bimodal (Example: 2, 2, 4, 5, 6, 6).
  - Multimodal (Example: 2, 2, 4, 5, 6, 6, 7, 7).
- **Formula for Mode:** For grouped data:
  $$Mo = L + \left(\frac{\Delta_1}{\Delta_1 + \Delta_2}\right) \times c$$
  - $L$ = Lower limit of the modal class.
  - $f_0$ = Frequency of the modal class.
  - $f_1$ = Frequency of the pre-modal class (the class preceding the modal class).
  - $\Delta_1 = f_1 - f_0$ 
  - $\Delta_2 = f_2 - f_0$ 

## 📌 Mean & Symmetric Distribution
- **Symmetric Distribution:** In this type of distribution, mean = mode = median.
- **Shortcut / Coded Method[^20] for Mean:**
  - $A$ = Assumed mean or arbitrary origin.
  - $C$ = Scale (class interval width).
  - Formula:
    $$\bar{x} = A + c\bar{u}$$
    where,
    $$\bar{u} = \frac{\sum fu}{\sum f}$$
  - An example[^21] was solved where the mean, $\bar{x} = 37$.
- **Note:** Arithmetic mean depends on the scale and origin.

## 📌 Measures of Dispersion
- **What is Dispersion?** Dispersion[^22]   is the measure of how far an observation is spread out from its central value.
- **Types of Dispersion:**
  ###  **Absolute Measures:** 
  1. Range[^23]
  2. Quartile Deviation (QD) [^24]
  3. Mean Deviation (MD)[^25]
  4. Variance, 
  5. Standard Deviation.

  ###  **Relative Measures:** 
  6. Coefficient of Range
  7. Coefficient of QD, 
  8. Coefficient of MD, 
  9. Coefficient of Variation.

- Two additional topics were mentioned: Sampling Fluctuation and Extreme Value.

## 📐 Important Formulas of Dispersion
- **Mean Deviation (M.D):**
  $$M.D = \frac{\sum |D_i|}{N}$$
  - Where $|D_i| = |x_i - \bar{x}|$ (absolute deviation).
   - ### Example math [^26]
- **Important Proof Topic:** The sum of the deviations of all observations from their arithmetic mean is always zero.
  $$\sum (x_i - \bar{x}) = 0$$
- **Variance:** Variance is the average of the squared deviations of all observations from their arithmetic mean.
  $$\text{Variance} = \frac{\sum (x_i - \bar{x})^2}{N}$$
- **Standard Deviation (SD):** Standard deviation is the positive square root of the variance.
  $$SD = \sigma = \sqrt{V(x)}$$

---
**Tags:** #statistics #mean #mode #dispersion #variance #standard-deviation #class-notes



# 16 November class 4

![[JPEG_20261117_071018_2994899854395004895.webp|140]] ![[JPEG_20261117_071100_2301076191623287475.webp|139]] ![[IMG_20261116_113401.webp|247]]

## Class Notes: Statistics - Measures of Dispersion

## 📌 Main Concepts

### 1. Mean Deviation (M.D.)
- **For raw data (ungrouped):** If $x_1, x_2, \dots, x_n$ are observations, the mean deviation about the mean is defined as:
  $$M.D. = \frac{\sum_{i=1}^{n} |x_i - \bar{x}|}{N}$$
  Where $\bar{x} = \frac{\sum_{i=1}^{n} x_i}{N}$ .
     - EXAMPLE MATH[^27]



- **For grouped data (with frequency):** If $x_1, x_2, \dots$ have corresponding frequencies $f_1, f_2, \dots$, the mean deviation is:
  $$MD = \frac{\sum_{i=1}^{n} f_i |x_i - \bar{x}|}{N}$$
  Where $N = \sum f_i$ .
 -  EXAMPLE MATH [^28]
### 2. Variance ($V(x)$ or $\sigma^2$)
- **For raw data:**
  $$V(x) = \frac{\sum_{i=1}^{n} (x_i - \bar{x})^2}{N}$$
- EXAMPLE MATH [^29]
- **For grouped data:**
- EXAMPLE MATH[^30]
  $$\sigma^2 = \text{Variance} = \frac{\sum_{i=1}^{n} f_i(x_i - \bar{x})^2}{N}$$ 
- **Alternative Variance Formula:**
- EXAMPLE MATH[^31]
  $$V(x) = \frac{1}{n} \left[ \sum f_i x_i^2 - \frac{(\sum f_i x_i)^2}{N} \right]$$
- derivation [^32]

### 3. Standard Deviation (S.D. or $\sigma$)
- The standard deviation is the square root of the variance:
  $$\sigma = S.D = \sqrt{V(x)}$$ 

---

## 📊 Example: Frequency Distribution Table (FDT) & Calculations
The class worked through a full example to calculate these values .

**Given Data Table:**
- Class intervals: 2-4, 4-6, 6-8, 8-10, 10-12 
- Mid-values ($x_i$): 3, 5, 7, 9, 11 
- Frequencies ($f_i$): 1, 2, 5, 4, 3 

**Calculated Totals from the Board:**
- $n = \sum f_i = 15$ 
- $\sum f_i x_i = 117$ 
- $\sum f_i x_i^2 = 991$ 
- $\sum f_i |x_i - \bar{x}| = 28.8$ 
- $\sum f_i (x_i - \bar{x})^2 = 78.4$ 

**Final Calculated Results:**
- **Mean Deviation (M.D.):** $M.D. = \frac{28.8}{15} = 1.92$ 
- **Variance ($V(x)$):** $V(x) = \sigma^2 = \frac{78.4}{15} = 5.22$ 
  - *(Using the alternative formula: $\frac{1}{15} [991 - \frac{(117)^2}{15}] = 5.22$)* 
- **Standard Deviation (S.D.):** $\sigma = \sqrt{5.22} = 2.28$ 

---

## 💡 Exam Tip (Note from Khata)
- **Probable Question Pattern:** You may be asked to write the definition of all dispersion terms, followed by their formulas, and then list their Advantages and Disadvantages (সবগুলো dispersion এর সংজ্ঞা লিখতে হবে, তারপর সূত্র, তারপর Advantage, and Disadvantage) .

---
**Tags:** #statistics #dispersion #mean-deviation #variance #standard-deviation #class-notes


















































































































































































































---

[^2]: যে উপাত্তগুলোকে বিভিন্ন নাম বা শ্রেণিতে ভাগ করা যায়, কিন্তু তাদের মধ্যে কোনো নির্দিষ্ট ক্রম বা Ranking থাকে না, তাকে Nominal Data বলে।

[^3]: যে উপাত্তগুলোকে বিভিন্ন শ্রেণিতে ভাগ করার পাশাপাশি একটি নির্দিষ্ট ক্রম বা Ranking-এ সাজানো যায়, তাকে Ordinal Data বলে।
	

[^4]: **Frequency Distribution Table:** এটি এমন একটি পরিসংখ্যানগত ছক, যেখানে এলোমেলো ডেটাকে নির্দিষ্ট শ্রেণী ব্যবধানে (Class Interval) ভাগ করে ট্যালি (Tally) এবং গণসংখ্যার (Frequency) মাধ্যমে গুছিয়ে উপস্থাপন করা হয়, যাতে একনজরেই ডেটার মূল চিত্র বোঝা যায়।

[^5]: সবগুলো ডেটার যোগফলকে মোট ডেটার সংখ্যা দিয়ে ভাগ করলে যা পাওয়া যায়। এটি ডেটাসেটের একটি সাধারণ বা অ্যাভারেজ মান দেখায়।

[^6]: সবগুলো ডেটাকে ছোট থেকে বড় (বা বড় থেকে ছোট) সাজানোর পর ঠিক মাঝখানে যে মানটি থাকে, সেটিই হলো Median। এটি ডেটাসেটকে সমান দুই ভাগে ভাগ করে।
	
	**উদাহরণের সাহায্যে:** প্রথমে নম্বরগুলোকে ছোট থেকে বড় সাজাই: ১২, ১৮, ২২, ২৩, ২৫, ২৫, ২৮, ২৮, ৩১, **৩২, ৩৪**, ৩৫, ৩৬, ৩৮, ৩৯, ৪১, ৪২, ৪৪, ৪৫, ৪৭
	
	যেহেতু এখানে মোট ২০টি নম্বর (জোড় সংখ্যা), তাই ঠিক মাঝখানে একটি মাত্র সংখ্যা নেই। মাঝখানে আছে দশম (৩২) এবং একাদশ (৩৪) সংখ্যাটি।
	
	- **Median:** এই মাঝের দুটি সংখ্যার গড় = (৩২ + ৩৪) ÷ ২ = **৩৩**
	    
	
	অর্থাৎ, ক্লাসের ঠিক অর্ধেক ছাত্র ৩৩-এর কম পেয়েছে এবং অর্ধেক ছাত্র ৩৩-এর বেশি পেয়েছে।

[^7]: একটি ডেটাসেটে যে মানটি সবচেয়ে বেশিবার (highest frequency) এসেছে বা রিপিট হয়েছে, সেটিই হলো Mode।
	
	**উদাহরণের সাহায্যে:** 
	১২, ১৮, ২২, ২৩, ২৫, ২৫, ২৮, ২৮, ৩১, **৩২, ৩৪**, ৩৫, ৩৬, ৩৮, ৩৯, ৪১, ৪২, ৪৪, ৪৫, ৪৭ 
	নম্বরগুলোর দিকে লক্ষ্য করলে দেখা যায়:
	
	- **২৫** নম্বরটি ২ বার এসেছে।
	    
	- **২৮** নম্বরটি ২ বার এসেছে।
	    
	- বাকি সবগুলো নম্বর মাত্র ১ বার করে এসেছে।
	    
	
	যেহেতু ২৫ এবং ২৮ সবচেয়ে বেশিবার (২ বার) এসেছে, তাই এই ডেটাসেটের **Mode হলো ২৫ এবং ২৮**। (এ ধরনের ডেটাকে Bimodal বা দ্বি-প্রচুরক বলা হয়)।

[^8]: **একনজরে পার্থক্য:**
	
	- **Mean:** গাণিতিক গড় (৩২.২৫)
	    
	- **Median:** পজিশনাল বা ঠিক মাঝের মান (৩৩)
	    
	- **Mode:** সবচেয়ে জনপ্রিয় বা বহুল ব্যবহৃত মান (২৫ এবং ২৮)

[^9]: ### ১. A.M (Arithmetic Mean) - গাণিতিক গড়
	
	**কী:** এটি আমাদের সবচেয়ে পরিচিত সাধারণ গড়। সবগুলো মান যোগ করে মোট সংখ্যা দিয়ে ভাগ করলে এটি পাওয়া যায়। **হিসাব (২ এবং ৮ এর জন্য):**
	
	- যোগফল: ২ + ৮ = ১০
	    
	- মোট সংখ্যা: ২ টি
	    
	- **A.M:** ১০ ÷ ২ = **৫**
	    
	
	**কখন ব্যবহার করা হয়?** সাধারণ দৈনন্দিন হিসাবে। যেমন: ছাত্রদের পরীক্ষার নম্বর, গড় ওজন, বা গড় আয় বের করতে।

[^10]: ### ২. G.M (Geometric Mean) - জ্যামিতিক গড়
	
	**কী:** এখানে সংখ্যাগুলোকে যোগ না করে **গুণ** করতে হয়। তারপর যতগুলো সংখ্যা, তার তততম Root (মূল) বের করতে হয়। (২টি সংখ্যা থাকলে Square Root বা বর্গমূল, ৩টি সংখ্যা থাকলে Cube Root বা ঘনমূল)। **হিসাব (২ এবং ৮ এর জন্য):**
	
	- গুণফল: ২ × ৮ = ১৬
	    
	- যেহেতু সংখ্যা ২টি, তাই বর্গমূল (Square Root): $\sqrt{16}$ = **৪**
	    
	- **G.M:** **৪**
	    
	
	**কখন ব্যবহার করা হয়?** যখন ডেটাগুলো শতাংশ, অনুপাত বা বৃদ্ধির হার (Growth rate) বোঝায়। যেমন: জনসংখ্যার বৃদ্ধির হার, শেয়ার বাজারের রিটার্ন বা চক্রবৃদ্ধি সুদ হিসাব করতে এটি সবচেয়ে নির্ভুল।

[^11]: ### ৩. H.M (Harmonic Mean) - উল্টানো গড় (তরঙ্গ গড়)
	
	**কী:** এটি একটু ব্যতিক্রম। এখানে প্রথমে সংখ্যাগুলোর উল্টো মান (Reciprocal, যেমন ২-এর উল্টো ১/২) নিতে হয়। এরপর সেই উল্টো মানগুলোর যোগফল দিয়ে মোট সংখ্যাকে ভাগ করতে হয়। **হিসাব (২ এবং ৮ এর জন্য):**
	
	- সংখ্যা ২টির উল্টো মান: $\frac{1}{2}$ এবং $\frac{1}{8}$
	    
	- তাদের যোগফল: $\frac{1}{2} + \frac{1}{8} = \frac{5}{8}$
	    
	- এবার মোট সংখ্যা (২) কে এই যোগফল দিয়ে ভাগ:
	    
	- **H.M:** $\frac{2}{5/8} = \frac{16}{5}$ = **৩.২**
	    
	
	**কখন ব্যবহার করা হয়?** যখন কোনো কিছুর হার (Rate) বা গতি (Speed) হিসাব করতে হয়। _উদাহরণ:_ আপনি যদি ২০ কিমি/ঘণ্টা বেগে কোথাও যান এবং ৩০ কিমি/ঘণ্টা বেগে ফিরে আসেন, তবে আপনার গড় গতি A.M দিয়ে বের করলে ভুল হবে, সঠিক গড় গতি বের করতে H.M ব্যবহার করতে হয়।

[^12]: স্টার্জেস লক্ষ্য করেছিলেন যে, একটি আদর্শ বা স্বাভাবিক ডেটাসেট ঘণ্টা আকৃতির (Bell curve) আচরণ করে।
	
	তার ধারণা অনুযায়ী, যদি ডেটাকে $k$ সংখ্যক শ্রেণীতে ভাগ করা হয়, তবে মোট ডেটার সংখ্যা ($N$) হবে ২-এর ঘাতের (power) সমান। গাণিতিকভাবে তিনি এটি এভাবে লেখেন:
	
	$$N = 2^{k-1}$$
	
	এই সমীকরণটি সমাধান করেই মূলত সূত্রটি এসেছে:
	$$\log_2(N) = k - 1$$
$$k = 1 + \log_2(N)$$
$$\log_2(N) = \frac{\log_{10}(N)}{\log_{10}(2)}$$
	$$k = 1 + 3.322 \log_{10}(N)$$

[^13]: কোনো ডেটাসেটের **সবচেয়ে বড় মান (Maximum Value)** এবং **সবচেয়ে ছোট মানের (Minimum Value)** মধ্যকার পার্থক্যকেই **Range** বলা হয়।
	
	### সূত্র:
	
	$$\text{Range} = \text{সর্বোচ্চ মান (Highest Value)} - \text{সর্বনিম্ন মান (Lowest Value)}$$

[^14]: ### Closed Interval (বদ্ধ ব্যবধান)
	
	যে ইন্টারভ্যালে সীমানার সর্বনিম্ন এবং সর্বোচ্চ—**দুটি মানই অন্তর্ভুক্ত থাকে**, তাকে **Closed Interval** বলে।
	
	- **গণিতিক চিহ্ন:** এটি থার্ড ব্র্যাকেট `[ ]` দিয়ে লেখা হয়।
	    
	- **সহজ উদাহরণ:** $[10, 20]$
	    
	    - এর মানে হলো ১০ থেকে ২০ পর্যন্ত **সব সংখ্যা**, এবং **১০ ও ২০ দুটি সংখ্যাই এর অন্তর্ভুক্ত**।
	        
	    - যদি কেউ ১০ পায়, তবে সে এই ঘরে গণনা হবে। যদি কেউ ঠিক ২০-ও পায়, তবে সে-ও এই ঘরেই গণনায় আসবে।

[^15]: ### Open Interval (মুক্ত ব্যবধান)
	
	যে ইন্টারভ্যালে সীমানার মান দুটি **বাদ পড়ে** (অন্তর্ভুক্ত থাকে না), কিন্তু তাদের মধ্যবর্তী সমস্ত মান অন্তর্ভুক্ত থাকে, তাকে **Open Interval** বলে।
	
	- **গাণিতিক চিহ্ন:** এটি ফার্স্ট ব্র্যাকেট `( )` দিয়ে লেখা হয়।
	    
	- **সহজ উদাহরণ:** $(10, 20)$
	    
	    - এর মানে হলো ১০-এর চেয়ে বড় এবং ২০-এর চেয়ে ছোট সব সংখ্যা (যেমন: ১০.১, ১৫, ১৯.৯৯)।
	        
	    - কিন্তু **১০ এবং ২০ নিজে এই ঘরে অন্তর্ভুক্ত হবে না**।

[^16]: ### Semi-Open / Semi-Closed Interval (অর্ধ-মুক্ত ব্যবধান)
	
	পরিসংখ্যানে শ্রেণী ব্যবধান তৈরিতে এটিই সবচেয়ে বেশি ব্যবহৃত হয়, যেখানে একপাশ খোলা এবং অন্যপাশ বন্ধ থাকে:
	
	- **$[10, 20)$** $\to$ ১০ অন্তর্ভুক্ত হবে, কিন্তু ২০ বাদ যাবে (১০ থেকে ১৯.৯৯ পর্যন্ত)।
	    
	- **$(10, 20]$** $\to$ ১০ বাদ যাবে, কিন্তু ২০ অন্তর্ভুক্ত হবে (১০.০১ থেকে ২০ পর্যন্ত)।

[^17]: **Quartile (চতুর্থক)** হলো এমন কিছু মান বা পয়েন্ট, যা সাজানো কোনো ডেটাসেটকে সমান **৪টি ভাগে** ভাগ করে।
	
	যেমন—Median (মধ্যক) একটি ডেটাসেটকে সমান ২ ভাগ করে, ঠিক তেমনি Quartile পুরো ডেটাসেটকে ৪ ভাগ করতে **৩টি পয়েন্ট** ব্যবহার করে। এই ৩টি পয়েন্টকে **$Q_1$, $Q_2$, এবং $Q_3$** বলা হয়।
	
	### Quartile-এর গুরুত্ব
	
	- ডেটাগুলো কীভাবে ছড়িয়ে আছে (Data Distribution) তা বুঝতে এটি সাহায্য করে।
	    
	- **Interquartile Range (IQR = $Q_3 - Q_1$)** বের করে ডেটাসেটের চরম বা অস্বাভাবিক মানগুলো (Outliers) সহজে চিহ্নিত করা যায়।
	
	### ৩টি Quartile-এর পরিচয়
	
	১. **$Q_1$ (First Quartile / Lower Quartile):**
	
	- এটি প্রথম **২৫%** ডেটাকে নির্দেশ করে। অর্থাৎ, ২৫% ডেটা এই মানের নিচে থাকে এবং ৭৫% ডেটা এর ওপরে থাকে।
	    
	
	২. **$Q_2$ (Second Quartile / Middle Quartile):**
	
	- এটি ঠিক মাঝখানের **৫০%** ডেটাকে নির্দেশ করে। **$Q_2$ আর Median (মধ্যক) একই কথা।** ৫০% ডেটা এর নিচে এবং ৫০% ডেটা এর ওপরে থাকে।
	    
	
	৩. **$Q_3$ (Third Quartile / Upper Quartile):**
	
	- এটি **৭৫%** ডেটাকে নির্দেশ করে। অর্থাৎ, ৭৫% ডেটা এই মানের নিচে থাকে এবং বাকি ২৫% ডেটা এর ওপরে থাকে।

[^18]: **Quantile (কোয়ান্টাইল)** হলো পরিসংখ্যানের একটি সার্বিক ধারণা, যা সাজানো কোনো ডেটাসেটকে নির্দিষ্ট সংখ্যক **সমান অংশে** ভাগ করার কাট-অফ পয়েন্ট বা সীমানাগুলোকে বোঝায়।
	
	সহজ কথায়, আপনি যদি একটি ডেটাসেটকে ছোট থেকে বড় সাজিয়ে সেটিকে কয়েকটি সমান টুকরো করতে চান, তবে যেই পয়েন্টগুলোতে ভাগ করবেন, সেগুলোকে বলা হয় Quantile।
[^20]: **Proof of Coded Method for Mean:**
	
	ধরি, $u_i = \frac{x_i - A}{c}$$\Rightarrow x_i = A + c u_i$
	
	উভয়পাশে ফ্রিকোয়েন্সি $f_i$ দ্বারা গুণ করে সমষ্টি (summation) নিলে:$\sum f_i x_i = \sum f_i (A + c u_i)$$\Rightarrow \sum f_i x_i = A \sum f_i + c \sum f_i u_i$
	
	উভয়পক্ষকে মোট ফ্রিকোয়েন্সি $N$ (যেখানে $N = \sum f_i$) দিয়ে ভাগ করে পাই:$\frac{\sum f_i x_i}{N} = A \frac{\sum f_i}{N} + c \frac{\sum f_i u_i}{N}$
	
	যেহেতু, $\frac{\sum f_i x_i}{N} = \bar{x}$, $\frac{\sum f_i u_i}{N} = \bar{u}$ এবং $\frac{\sum f_i}{N} = 1$ অতএব, $\bar{x} = A + c\bar{u}$ (প্রমাণিত)
[^21]: **প্রশ্ন:** নিচের ডেটাসেট থেকে শর্টকাট পদ্ধতিতে গড় (Mean) নির্ণয় করো।
	
	- শ্রেণী (Class): ১০-২০, ২০-৩০, ৩০-৪০, ৪০-৫০, ৫০-৬০
	    
	- ফ্রিকোয়েন্সি ($f$): ২, ৮, ১৫, ১০, ৫
	    
	
	**সমাধান:** প্রথমে আমাদের শ্রেণীগুলোর মধ্যবিন্দু ($x$) বের করতে হবে। এরপর হিসাবের সুবিধার জন্য মাঝামাঝি একটি মানকে Assumed Mean ($A$) হিসেবে ধরে নেব।
	
	ধরি, Assumed Mean, $A = 35$ (কারণ এটি ডেটার মাঝামাঝি আছে) শ্রেণী ব্যবধান, $c = 10$
	
	এবার নিচের টেবিলটি তৈরি করি:
	
	| **শ্রেণী (Class)** | **ফ্রিকোয়েন্সি (f)** | **মধ্যবিন্দু (x)** | **u=cx−A​**               | **fu**            |
	| ------------------ | -------------------- | ------------------ | ------------------------- | ----------------- |
	| ১০-২০              | ২                    | ১৫                 | $\frac{15 - 35}{10} = -2$ | ২ × (-২) = -৪     |
	| ২০-৩০              | ৮                    | ২৫                 | $\frac{25 - 35}{10} = -1$ | ৮ × (-১) = -৮     |
	| **৩০-৪০**          | **১৫**               | **৩৫ ($A$)**       | $\frac{35 - 35}{10} = 0$  | ১৫ × ০ = ০        |
	| ৪০-৫০              | ১০                   | ৪৫                 | $\frac{45 - 35}{10} = 1$  | ১০ × ১ = ১০       |
	| ৫০-৬০              | ৫                    | ৫৫                 | $\frac{55 - 35}{10} = 2$  | ৫ × ২ = ১০        |
	| **মোট**            | **$\sum f = 40$**    |                    |                           | **$\sum fu = 8$** |
	
	**হিসাব:** আমরা জানি, শর্টকাট পদ্ধতির সূত্র হলো:
	
	$$\bar{x} = A + c\bar{u}$$
	
	যেখানে, $\bar{u} = \frac{\sum fu}{\sum f}$
	
	তাহলে,$\bar{u} = \frac{8}{40} = 0.2$
	
	এবার গড়ের মূল সূত্রে মানগুলো বসাই:$\bar{x} = 35 + 10 \times (0.2)$$\bar{x} = 35 + 2$$\bar{x} = 37$
	
	**উত্তর:** নির্ণেয় গড় ($\bar{x}$) = ৩৭।


[^22]: ### Dispersion (বিস্তার) কী?
	
	সহজ কথায়, একটি ডেটাসেটের মানগুলো তার কেন্দ্রীয় মান (যেমন: গড় বা Mean) থেকে কতটুকু দূরে ছড়িয়ে-ছিটিয়ে আছে, তার পরিমাপকেই **Dispersion** বলে।
	
	- **উদাহরণ:** ধরুন, দুজন ব্যাটসম্যানের ৫টি ম্যাচের গড় রান ৫০। প্রথমজন করেছেন: ৪৮, ৫০, ৫২, ৪৯, ৫১। দ্বিতীয়জন করেছেন: ০, ১০০, ০, ১৫০, ০। দুজনের গড় ৫০ হলেও দ্বিতীয়জনের রানের **Dispersion** অনেক বেশি (খুব অনিয়মিত), আর প্রথমজনের কম (ধারাবাহিক)।
[^23]: ### ১. Range (পরিসর) ও Coefficient of Range
	
	বিস্তার মাপার সবচেয়ে সহজ ও প্রাথমিক পদ্ধতি হলো **Range**।
	
	- **মূল ধারণা:** একটি ডেটাসেটের একদম সর্বোচ্চ মান ($X_{\max}$) এবং সর্বনিম্ন মান ($X_{\min}$)-এর মধ্যকার পার্থক্যই হলো Range। এটি বলে দেয় ডেটাটি সর্বনিম্ন কত থেকে সর্বোচ্চ কত পর্যন্ত বিস্তৃত।
	    
	- **সূত্রসমূহ:**
	    
	    - **Range (Absolute Measure):** $R = X_{\max} - X_{\min}$
	        
	    - **Coefficient of Range (Relative Measure):** $\text{Coefficient of Range} = \frac{X_{\max} - X_{\min}}{X_{\max} + X_{\min}}$
	        
	
	**সীমাবদ্ধতা (বিজ্ঞানীরা কেন পরের ধাপে গেলেন?):**
	
	Range শুধু ডেটার দুই প্রান্তের দুটি সংখ্যাকে দেখে, মাঝের সংখ্যাগুলোর কোনো খবর রাখে না। ধরুন, একটি রুমে ১০ জন সাধারণ চাকরিজীবী আছেন যাদের বেতন ২০ থেকে ৩০ হাজার টাকার মধ্যে। হঠাৎ সেখানে একজন বিলিয়নিয়ার ঢুকলেন। এতে ওই রুমের বেতনের Range আকাশচুম্বী হয়ে যাবে, যা সাধারণ মানুষগুলোর প্রকৃত অবস্থার ভুল চিত্র দেবে। এই চরম মান বা **Outlier**-এর প্রভাব কাটানোর জন্যই বিজ্ঞানীরা নিয়ে এলেন **Quartile Deviation**।
[^24]: ### ২. Quartile Deviation (QD) ও Coefficient of QD
	
	Outlier বা অস্বাভাবিক বড়/ছোট মানগুলোর ঝামেলা এড়াতে পরিসংখ্যানবিদরা চিন্তা করলেন—ডেটাকে ছোট থেকে বড় সাজিয়ে এর **শুরুর ২৫% এবং শেষের ২৫% বাদ দিয়ে শুধু মাঝের ৫০% ডেটার বিস্তার** মাপলে কেমন হয়? এখান থেকেই আসে Quartile Deviation (চতুর্থক ব্যবধান)।
	
	- **মূল ধারণা:** কোনো সাজানো ডেটাসেটকে সমান ৪ ভাগে ভাগ করলে তিনটি বিন্দু পাওয়া যায়: $Q_1$ (২৫% বিন্দু), $Q_2$ (৫০% বিন্দু বা Median), এবং $Q_3$ (৭৫% বিন্দু)। তৃতীয় চতুর্থক ($Q_3$) ও প্রথম চতুর্থক ($Q_1$)-এর ব্যবধানের অর্ধেককেই **Quartile Deviation (QD)** বা Semi-Interquartile Range বলে।
	    
	- **সূত্রসমূহ:**
	    
	    - **Quartile Deviation (Absolute Measure):** $QD = \frac{Q_3 - Q_1}{2}$
	        
	    - **Coefficient of QD (Relative Measure):** $\text{Coefficient of QD} = \frac{Q_3 - Q_1}{Q_3 + Q_1}$
	        
	
	### ছোট একটি উদাহরণে পার্থক্যটি দেখুন
	
	ধরুন, ৭ জন শিক্ষার্থীর নম্বর হলো (ছোট থেকে বড় সাজানো):
	
	`১০, ১৫, ২০, ২৫, ৩০, ৩৫, ১০০` _(এখানে ১০০ একটি অস্বাভাবিক বড় মান বা Outlier)_
	
	১. **Range-এর হিসাব:**
	
	- $R = 100 - 10 = 90$
	    
	- $\text{Coefficient of Range} = \frac{100 - 10}{100 + 10} = \frac{90}{110} \approx 0.82$
	    
	    _(দেখুন, শুধু ১০০ থাকার কারণে বিস্তার অনেক বেশি দেখাচ্ছে)_
	    
	
	২. **Quartile Deviation-এর হিসাব:**
	
	এখানে মোট সংখ্যা $n = 7$।
	
	- $Q_1$ এর অবস্থান $= \frac{n+1}{4} = \frac{7+1}{4} = 2\text{তম পদ} = 15$
	    
	- $Q_3$ এর অবস্থান $= \frac{3(n+1)}{4} = \frac{3(7+1)}{4} = 6\text{তম পদ} = 35$
	    
	- $QD = \frac{35 - 15}{2} = 10$
	    
	- $\text{Coefficient of QD} = \frac{35 - 15}{35 + 15} = \frac{20}{50} = 0.40$
	    
	    _(লক্ষ্য করুন, ১০০ থাকা সত্ত্বেও QD মাঝের ডেটাগুলোর প্রকৃত ও স্থিতিশীল বিস্তার ১০ দেখাল)_
[^25]: **Coefficient of Range (Relative Measure):** $\text{Coefficient of Range} = \frac{X_{\max} - X_{\min}}{X_{\max} + X_{\min}}$
[^26]: 
	        
	

[^25]: ### ১. গাণিতিক সংজ্ঞা (Formal Definition)
	
	কোনো ডেটাসেটের প্রতিটি মান তার কেন্দ্রীয় মান (গাণিতিক গড়, মধ্যমা বা প্রচুরক) থেকে গড়ে কতটুকু দূরে অবস্থান করছে, তার পরম দূরত্বের (Absolute Distance) গাণিতিক গড়কে **Mean Deviation (MD)** বলা হয়। এটি বিস্তারের একটি পরিমাপক (Measure of Dispersion), যা ডেটার প্রতিটি পর্যবেক্ষণকে গণনায় অন্তর্ভুক্ত করে।
	
	### ২. সাধারণ সূত্রসমূহ (General Formulas)
	
	ধরি, একটি ডেটাসেটের চলকগুলো হলো $x_1, x_2, ..., x_n$ এবং $A$ হলো যেকোনো একটি কেন্দ্রীয় মান (সাধারণত Mean বা Median)।
	
	**অবিন্যস্ত ডেটার (Ungrouped Data) ক্ষেত্রে:**
	
	$$MD_A = \frac{1}{n} \sum_{i=1}^{n} \vert{}x_i - A\vert{}$$
	
	যেখানে, $n$ = মোট পর্যবেক্ষণের সংখ্যা।
	
	**বিন্যস্ত বা ফ্রিকোয়েন্সি ডেটার (Grouped Data) ক্ষেত্রে:**
	
	$$MD_A = \frac{1}{N} \sum_{i=1}^{n} f_i \vert{}x_i - A\vert{}$$
	
	যেখানে, $f_i$ = প্রতিটি শ্রেণীর গণসংখ্যা এবং $N = \sum f_i$ (মোট গণসংখ্যা)।
	
	**আপেক্ষিক পরিমাপ (Relative Measure):** দুটি ভিন্ন ডেটাসেটের বিস্তারের তুলনার জন্য Coefficient বা সহগ ব্যবহার করা হয়:
	
	$$\text{Coefficient of MD} = \frac{MD_A}{A}$$
	
	_(যে কেন্দ্রীয় মান $A$ থেকে MD বের করা হয়েছে, তাকে দিয়েই ভাগ করতে হবে।)_

[^26]: **প্রশ্ন:** নিচের ডেটাসেট থেকে গাণিতিক গড় ব্যবহার করে Mean Deviation এবং এর Coefficient নির্ণয় করুন।
	
	- শ্রেণী (Class): ০-১০, ১০-২০, ২০-৩০
	    
	- ফ্রিকোয়েন্সি ($f_i$): ২, ৩, ৫
	    
	
	**সমাধানের টেবিল:**
	
	|**শ্রেণী**|**ফ্রিকোয়েন্সি (fi​)**|**মধ্যবিন্দু (xi​)**|**fi​xi​**|**∣xi​−xˉ∣**|**fi​∣xi​−xˉ∣**|
	|---|---|---|---|---|---|
	|০-১০|২|৫|১০|$\vert{}5 - 18\vert{} = 13$|$2 \times 13 = 26$|
	|১০-২০|৩|১৫|৪৫|$\vert{}15 - 18\vert{} = 3$|$3 \times 3 = 9$|
	|২০-৩০|৫|২৫|১২৫|$\vert{}25 - 18\vert{} = 7$|$5 \times 7 = 35$|
	|**মোট**|**$N = 10$**||**$\sum f_i x_i = 180$**||**$\sum f_i \vert{}x_i - \bar{x}\vert{} = 70$**|
	
	**ধাপ ১: গাণিতিক গড় ($\bar{x}$) নির্ণয়**
	
	$$\bar{x} = \frac{\sum f_i x_i}{N} = \frac{180}{10} = 18$$
	
	**ধাপ ২: Mean Deviation ($MD$) নির্ণয়**
	
	$$MD = \frac{\sum f_i \vert{}x_i - \bar{x}\vert{}}{N} = \frac{70}{10} = 7$$
	
	**ধাপ ৩: Coefficient of MD নির্ণয়**
	
	$$\text{Coefficient of MD} = \frac{MD}{\bar{x}} = \frac{7}{18} \approx 0.3889$$
	
	**চূড়ান্ত উত্তর:** Mean Deviation হলো $7$ এবং Coefficient of Mean Deviation হলো $0.3889$।: 

[^27]: ### প্রশ্ন:
	নিম্নলিখিত অবিন্যস্ত উপাত্তগুলো (Ungrouped Data) থেকে **গাণিতিক গড়ের সাপেক্ষে গড় ব্যবধান (Mean Deviation about Mean)** নির্ণয় করো:
	
	**উপাত্ত (Data):** $12, 15, 18, 20, 25$
	
	---
	
	### সমাধান:
	
	এখানে মোট উপাত্ত বা পর্যবেক্ষণের সংখ্যা, $N = 5$
	
	#### ধাপ ১: গাণিতিক গড় ($\bar{x}$) নির্ণয়
	আমরা জানি, গাণিতিক গড়:
	$$\bar{x} = \frac{\sum_{i=1}^{n} x_i}{N}$$
	
	$$\implies \bar{x} = \frac{12 + 15 + 18 + 20 + 25}{5}$$
	
	$$\implies \bar{x} = \frac{90}{5} = 18$$
	
	সুতরাং, গড় মান $\bar{x} = 18$।
	
	---
	
	#### ধাপ ২: প্রতিটি উপাত্ত থেকে গড়ের পরম ব্যবধান ($|x_i - \bar{x}|$) নির্ণয়
	
	| পর্যবেক্ষণ ($x_i$) | গড় ($\bar{x}$) | ব্যবধান ($x_i - \bar{x}$) | পরম ব্যবধান ($|x_i - \bar{x}|$) |
	| :---: | :---: | :---: | :---: |
	| $12$ | $18$ | $12 - 18 = -6$ | $6$ |
	| $15$ | $18$ | $15 - 18 = -3$ | $3$ |
	| $18$ | $18$ | $18 - 18 = 0$ | $0$ |
	| $20$ | $18$ | $20 - 18 = +2$ | $2$ |
	| $25$ | $18$ | $25 - 18 = +7$ | $7$ |
	| **মোট ($N = 5$)** | | | **$\sum |x_i - \bar{x}| = 18$** |
	
	---
	
	#### ধাপ ৩: গড় ব্যবধান (M.D.) নির্ণয়
	সূত্রানুযায়ী, গড়ের সাপেক্ষে গড় ব্যবধান:
	$$M.D. = \frac{\sum_{i=1}^{n} |x_i - \bar{x}|}{N}$$
	
	$$\implies M.D. = \frac{18}{5} = 3.6$$
	
	---
	
	### উত্তর:
	নির্ণেয় গড় ব্যবধান (Mean Deviation) = **$3.6$**
[^28]: 

[^28]: #### ধাপ ১: ছকের মাধ্যমে প্রয়োজনীয় মানসমূহ গণনা
	| শ্রেণি-ব্যাপ্তি | মধ্যবিন্দু ($x_i$) | গণসংখ্যা ($f_i$) | গুণফল ($f_i x_i$) | ব্যবধান ($\vert x_i - \bar{x} \vert$) | $f_i \vert x_i - \bar{x} \vert$ |
	| :---: | :---: | :---: | :---: | :---: | :---: |
	| 20 - 30 | 25 | 2 | $2 \times 25 = 50$ | $\vert 25 - 45 \vert = 20$ | $2 \times 20 = 40$ |
	| 30 - 40 | 35 | 3 | $3 \times 35 = 105$ | $\vert 35 - 45 \vert = 10$ | $3 \times 10 = 30$ |
	| 40 - 50 | 45 | 10 | $10 \times 45 = 450$ | $\vert 45 - 45 \vert = 0$ | $10 \times 0 = 0$ |
	| 50 - 60 | 55 | 3 | $3 \times 55 = 165$ | $\vert 55 - 45 \vert = 10$ | $3 \times 10 = 30$ |
	| 60 - 70 | 65 | 2 | $2 \times 65 = 130$ | $\vert 65 - 45 \vert = 20$ | $2 \times 20 = 40$ |
	| **মোট** | | **$N = \sum f_i = 20$** | **$\sum f_i x_i = 900$** | | **$\sum f_i \vert x_i - \bar{x} \vert = 140$** |
	
	#### ধাপ ২: গাণিতিক গড় ($\bar{x}$) নির্ণয়
	আমরা জানি, গাণিতিক গড়:
	$$\bar{x} = \frac{\sum f_i x_i}{N}$$
	
	$$\implies \bar{x} = \frac{900}{20} = 45$$
	
	#### ধাপ ৩: গড় ব্যবধান ($M.D.$) নির্ণয়
	সূত্রানুযায়ী:
	$$M.D. = \frac{\sum f_i \vert x_i - \bar{x} \vert}{N}$$
	
	$$\implies M.D. = \frac{140}{20} = 7$$
	
	### উত্তর:
	নির্ণেয় গড় ব্যবধান (Mean Deviation) = **$7$**

[^29]: ### উদাহরণ: অবিন্যস্ত উপাত্তের ভেদাঙ্ক (Variance) নির্ণয়
	মনে করি, একটি অবিন্যস্ত উপাত্তের (raw data) মানসমূহ হলো: $10, 12, 15, 18, 20$। 
	উপর্যুক্ত সূত্র ব্যবহার করে এর ভেদাঙ্ক বা Variance নির্ণয় করতে হবে।
	
	#### ধাপ ১: গাণিতিক গড় ($\bar{x}$) নির্ণয়
	এখানে, মোট উপাত্তের সংখ্যা, $N = 5$
	উপাত্তসমূহের সমষ্টি, $\sum x_i = 10 + 12 + 15 + 18 + 20 = 75$
	
	গাণিতিক গড়,
	$$\bar{x} = \frac{\sum x_i}{N}$$
	$$\implies \bar{x} = \frac{75}{5} = 15$$
	
	#### ধাপ ২: ছকের মাধ্যমে প্রয়োজনীয় মানসমূহ গণনা
	| উপাত্ত ($x_i$) | ব্যবধান ($x_i - \bar{x}$) | ব্যবধানের বর্গ $(x_i - \bar{x})^2$ |
	| :---: | :---: | :---: |
	| 10 | $10 - 15 = -5$ | $(-5)^2 = 25$ |
	| 12 | $12 - 15 = -3$ | $(-3)^2 = 9$ |
	| 15 | $15 - 15 = 0$ | $(0)^2 = 0$ |
	| 18 | $18 - 15 = 3$ | $(3)^2 = 9$ |
	| 20 | $20 - 15 = 5$ | $(5)^2 = 25$ |
	| **মোট** | | **$\sum (x_i - \bar{x})^2 = 68$** |
	
	#### ধাপ ৩: ভেদাঙ্ক ($V(x)$ বা $\sigma^2$) নির্ণয়
	অবিন্যস্ত উপাত্তের ভেদাঙ্কের সূত্রানুযায়ী:
	$$V(x) = \frac{\sum_{i=1}^{n} (x_i - \bar{x})^2}{N}$$
	
	$$\implies V(x) = \frac{68}{5}$$
	
	$$\implies V(x) = 13.6$$
	
	### উত্তর:
	নির্ণেয় ভেদাঙ্ক (Variance) = **$13.6$**

[^30]: ### উদাহরণ: বিন্যস্ত উপাত্তের ভেদাঙ্ক (Variance) নির্ণয়
	বিন্যস্ত উপাত্তের ক্ষেত্রে ভেদাঙ্কের সূত্রটি হলো: 
	$$\sigma^2 = \frac{\sum f_i (x_i - \bar{x})^2}{N}$$
	
	ধরি, নিচে একটি গণসংখ্যা নিবেশন সারণি দেওয়া আছে। এর ভেদাঙ্ক নির্ণয় করতে হবে।
	
	#### ধাপ ১: ছকের মাধ্যমে প্রয়োজনীয় মানসমূহ গণনা
	প্রথমে গাণিতিক গড় ($\bar{x}$) নির্ণয়ের জন্য প্রয়োজনীয় মান এবং পরে সূত্র অনুযায়ী ছক তৈরি করা হলো:
	
	| শ্রেণি-ব্যাপ্তি | মধ্যবিন্দু ($x_i$) | গণসংখ্যা ($f_i$) | $f_i x_i$ | ব্যবধান ($x_i - \bar{x}$) | ব্যবধানের বর্গ $(x_i - \bar{x})^2$ | $f_i (x_i - \bar{x})^2$ |
	| :---: | :---: | :---: | :---: | :---: | :---: | :---: |
	| 0 - 10 | 5 | 2 | $2 \times 5 = 10$ | $5 - 25 = -20$ | $(-20)^2 = 400$ | $2 \times 400 = 800$ |
	| 10 - 20 | 15 | 4 | $4 \times 15 = 60$ | $15 - 25 = -10$ | $(-10)^2 = 100$ | $4 \times 100 = 400$ |
	| 20 - 30 | 25 | 8 | $8 \times 25 = 200$ | $25 - 25 = 0$ | $(0)^2 = 0$ | $8 \times 0 = 0$ |
	| 30 - 40 | 35 | 4 | $4 \times 35 = 140$ | $35 - 25 = 10$ | $(10)^2 = 100$ | $4 \times 100 = 400$ |
	| 40 - 50 | 45 | 2 | $2 \times 45 = 90$ | $45 - 25 = 20$ | $(20)^2 = 400$ | $2 \times 400 = 800$ |
	| **মোট** | | **$N = 20$** | **$\sum f_i x_i = 500$** | | | **$\sum f_i(x_i - \bar{x})^2 = 2400$** |
	
	#### ধাপ ২: গাণিতিক গড় ($\bar{x}$) নির্ণয়
	আমরা জানি, বিন্যস্ত উপাত্তের ক্ষেত্রে গাণিতিক গড়:
	$$\bar{x} = \frac{\sum f_i x_i}{N}$$
	
	$$\implies \bar{x} = \frac{500}{20} = 25$$
	*(এই মানটি ব্যবহার করেই ছকের পঞ্চম ও ষষ্ঠ কলামের হিসাব করা হয়েছে)*
	
	#### ধাপ ৩: ভেদাঙ্ক ($\sigma^2$ বা Variance) নির্ণয়
	সূত্রানুযায়ী:
	$$\sigma^2 = \frac{\sum f_i (x_i - \bar{x})^2}{N}$$
	
	$$\implies \sigma^2 = \frac{2400}{20}$$
	
	$$\implies \sigma^2 = 120$$
	
	### উত্তর:
	নির্ণেয় ভেদাঙ্ক (Variance, $\sigma^2$) = **$120$**

[^31]: ### উদাহরণ: বিকল্প সূত্রের সাহায্যে বিন্যস্ত উপাত্তের ভেদাঙ্ক (Variance) নির্ণয়
	বিকল্প সূত্রটি হলো: 
	$$V(x) = \frac{1}{N} \left[ \sum f_i x_i^2 - \frac{(\sum f_i x_i)^2}{N} \right]$$
	*(এখানে $N = \sum f_i$ বা মোট গণসংখ্যা)*
	
	পূর্বের উদাহরণের উপাত্তটিই এখানে ব্যবহার করা হলো:
	
	#### ধাপ ১: ছকের মাধ্যমে প্রয়োজনীয় মানসমূহ গণনা
	এই সূত্রের জন্য আমাদের $f_i x_i$ এবং $f_i x_i^2$ এর মান প্রয়োজন। 
	
	| শ্রেণি-ব্যাপ্তি | মধ্যবিন্দু ($x_i$) | গণসংখ্যা ($f_i$) | $f_i x_i$ | $x_i^2$ (মধ্যবিন্দুর বর্গ) | $f_i x_i^2$ |
	| :---: | :---: | :---: | :---: | :---: | :---: |
	| 0 - 10 | 5 | 2 | $2 \times 5 = 10$ | $5^2 = 25$ | $2 \times 25 = 50$ |
	| 10 - 20 | 15 | 4 | $4 \times 15 = 60$ | $15^2 = 225$ | $4 \times 225 = 900$ |
	| 20 - 30 | 25 | 8 | $8 \times 25 = 200$ | $25^2 = 625$ | $8 \times 625 = 5000$ |
	| 30 - 40 | 35 | 4 | $4 \times 35 = 140$ | $35^2 = 1225$ | $4 \times 1225 = 4900$ |
	| 40 - 50 | 45 | 2 | $2 \times 45 = 90$ | $45^2 = 2025$ | $2 \times 2025 = 4050$ |
	| **মোট** | | **$N = 20$** | **$\sum f_i x_i = 500$** | | **$\sum f_i x_i^2 = 14900$** |
	
	#### ধাপ ২: ভেদাঙ্ক ($V(x)$ বা $\sigma^2$) নির্ণয়
	বিকল্প সূত্রানুযায়ী:
	$$V(x) = \frac{1}{N} \left[ \sum f_i x_i^2 - \frac{(\sum f_i x_i)^2}{N} \right]$$
	
	মান বসিয়ে পাই:
	$$V(x) = \frac{1}{20} \left[ 14900 - \frac{(500)^2}{20} \right]$$
	
	$$V(x) = \frac{1}{20} \left[ 14900 - \frac{250000}{20} \right]$$
	
	$$V(x) = \frac{1}{20} \left[ 14900 - 12500 \right]$$
	
	$$V(x) = \frac{1}{20} \times 2400$$
	
	$$V(x) = 120$$
	
	### উত্তর:
	বিকল্প সূত্রের সাহায্যে নির্ণেয় ভেদাঙ্ক (Variance, $\sigma^2$) = **$120$**
[^32]: 

[^32]: ### ভেদাঙ্কের (Variance) বিকল্প সূত্রের প্রতিপাদন (Derivation)
	
	আমরা জানি, বিন্যস্ত উপাত্তের ক্ষেত্রে ভেদাঙ্কের মূল সূত্রটি হলো:
	$$V(x) = \frac{\sum f_i (x_i - \bar{x})^2}{N}$$
	
	যেখানে, 
	$N = \sum f_i$ (মোট গণসংখ্যা)
	$\bar{x} = \frac{\sum f_i x_i}{N}$ (গাণিতিক গড়) $\implies \sum f_i x_i = N\bar{x}$
	
	#### প্রতিপাদনের ধাপসমূহ:
	
	**ধাপ ১:** প্রথমে মূল সূত্রের লবের (numerator) অংশটি নিয়ে কাজ করি:
	$$\sum f_i (x_i - \bar{x})^2$$
	
	**ধাপ ২:** বর্গের সূত্র $(a - b)^2 = a^2 - 2ab + b^2$ প্রয়োগ করে পাই:
	$$= \sum f_i (x_i^2 - 2x_i\bar{x} + \bar{x}^2)$$
	
	**ধাপ ৩:** এবার $f_i$ দ্বারা গুণ করে $\sum$ (সামেশন) আলাদা করে দিই:
	$$= \sum (f_i x_i^2) - \sum (2\bar{x} f_i x_i) + \sum (\bar{x}^2 f_i)$$
	
	**ধাপ ৪:** ধ্রুবক পদগুলোকে (যেমন $\bar{x}$ এবং $2$) সামেশন চিহ্নের বাইরে নিয়ে আসি:
	$$= \sum f_i x_i^2 - 2\bar{x} \sum f_i x_i + \bar{x}^2 \sum f_i$$
	
	**ধাপ ৫:** আমরা জানি, $\sum f_i = N$ এবং $\sum f_i x_i = N\bar{x}$। এই মানগুলো সমীকরণে বসিয়ে পাই:
	$$= \sum f_i x_i^2 - 2\bar{x} (N\bar{x}) + \bar{x}^2 (N)$$
	$$= \sum f_i x_i^2 - 2N\bar{x}^2 + N\bar{x}^2$$
	$$= \sum f_i x_i^2 - N\bar{x}^2$$
	
	**ধাপ ৬:** এবার লবের এই প্রাপ্ত মানটি ভেদাঙ্কের মূল সূত্রে ($V(x)$) বসাই:
	$$V(x) = \frac{1}{N} \left( \sum f_i x_i^2 - N\bar{x}^2 \right)$$
	
	**ধাপ ৭:** সমীকরণটি ভেঙে লিখলে $N$ কাটা যায়:
	$$V(x) = \frac{\sum f_i x_i^2}{N} - \frac{N\bar{x}^2}{N}$$
	$$V(x) = \frac{\sum f_i x_i^2}{N} - \bar{x}^2$$
	
	**ধাপ ৮:** এখন গাণিতিক গড় $\bar{x} = \frac{\sum f_i x_i}{N}$ এর মানটি পুনরায় সমীকরণে বসাই:
	$$V(x) = \frac{\sum f_i x_i^2}{N} - \left( \frac{\sum f_i x_i}{N} \right)^2$$
	$$V(x) = \frac{\sum f_i x_i^2}{N} - \frac{(\sum f_i x_i)^2}{N^2}$$
	
	**ধাপ ৯:** সবশেষে সমীকরণটি থেকে $\frac{1}{N}$ কমন নিলেই আমাদের কাঙ্ক্ষিত বিকল্প সূত্রটি পাওয়া যায়:
	$$V(x) = \frac{1}{N} \left[ \sum f_i x_i^2 - \frac{(\sum f_i x_i)^2}{N} \right]$$
	
	**(প্রমাণিত)**

# 17 November class 5
![[Stat Daily Class Note-1794905586071.webp|157]] ![[Stat Daily Class Note-1794905605442.webp|157]]  ![[Stat Daily Class Note-1794905624858.webp|158]]  

## Class Notes: Statistics - Relative Measures & Variation

## 📌 Relative Measures of Dispersion
- **Coefficient of Range:** $\frac{L - S}{L + S} \times 100\%$
- **Mid Range:** The average of the largest observation and the smallest observation.
- **Coefficient of Quartile Deviation:** $\frac{Q_3 - Q_1}{Q_3 + Q_1} \times 100\%$
- **Coefficient of Mean Deviation:** $\frac{MD \text{ of } (\bar{x})}{\bar{x}} \times 100$
- **Coefficient of Variation (C.V.):** $\frac{\sigma}{\bar{x}} \times 100\%$
  - *Definition:* The percentage ratio of the standard deviation (SD) to the arithmetic mean.

---

## ⚖️ Distinction: Standard Deviation vs. Coefficient of Variation

| Feature              | Standard Deviation (S.D.)                                     | Coefficient of Variation (Coff. of Variation)                                   |
| :------------------- | :------------------------------------------------------------ | :------------------------------------------------------------------------------ |
| **Type of Measure**  | It is an absolute measure.                                    | It is a relative measure.                                                       |
| **Units**            | It has a unit.                                                | It has no unit.                                                                 |
| **Ratio/Percentage** | It is not a ratio. It is not a percentage.                    | It is a ratio. It is a percentage.                                              |
| **Value Range**      | (Not specified in notes)                                      | Since it is a ratio, it lies between 0 - 1.                                     |
| **Comparability**    | It can be compared between 2 sets of data with the same unit. | It can be compared between 2 or more different datasets having different units. |

---

## 📝 Practice Example
**Problem Statement:**
Suppose we have the following values for salaries in thousands of dollars, shown in increasing order:
$30, 36, 47, 50, 52, 52, 56, 60, 63, 70, 70, 110$

**Find the following:**
- Maximum and minimum value
- Range
- Mean
- Median
- Mode
- $Q_1$, $Q_3$
- IQR (Interquartile Range)
- MD (Mean Deviation)
- Variance
- Coefficient of Variance (Variation)
- 5-number summary
- Mid range

---
**Tags:** #statistics #dispersion #coefficient-of-variation #standard-deviation #class-notes

# 23 November class 6


![[JPEG_20261123_230436_4816754204847746212.webp|190]]![[JPEG_20261123_230539_9056416652506753446.webp|142]]![[JPEG_20261123_230606_2307739748382005720.webp|145]]![[JPEG_20261123_230646_2387467597871336865.webp|144]]![[JPEG_20261123_230704_2981202689339178074.webp|170]]![[JPEG_20261123_230725_8535476066596916059.webp|174]] 


## Class Notes: Statistics - Dispersion, Deviation Properties & Probability

## 📐 Empirical Relations Between Measures of Dispersion
For a symmetrical or moderately skewed distribution[^33], empirical relationships connect Quartile Deviation ($QD$)[^34], Mean Deviation ($MD$)[^35], and Standard Deviation ($SD$ or $\sigma$)[^36]:

$$QD = \frac{2}{3} SD = \frac{2}{3} \sigma = \frac{2}{3} \cdot \frac{5}{4} MD$$

$$MD = \frac{4}{5} SD = \frac{4}{5} \sigma$$

$$SD = \frac{3}{2} QD = \frac{5}{4} MD$$

*(Correction Note: One line in the handwritten note repeats `SD` on the right side of the second equals sign as `= 5/4 SD`; the standard empirical relation in terms of $MD$ is $SD = \frac{5}{4} MD$.)*

### Solved Example: Finding $QD$, $MD$, and $SD$
**Given:** $Q_1 = 15$ and $Q_3 = 40$ for a symmetrical distribution.

1. **Interquartile Range ($IQR$) & Quartile Deviation ($QD$):**
   $$IQR = Q_3 - Q_1 = 40 - 15 = 25$$
   $$QD = \frac{IQR}{2} = \frac{25}{2} = 12.5$$

2. **Standard Deviation ($SD$):**
   $$SD = \frac{3}{2} \times QD = \frac{3}{2} \times 12.5 = \frac{75}{4} = 18.75$$

3. **Mean Deviation ($MD$):** *(completed)*
   Since $MD = \frac{4}{5} SD$:
   $$MD = \frac{4}{5} \times \frac{75}{4} = 15$$

---

## ➕ Summation & Deviation Identities
For $n$ observations $x_1, x_2, \dots, x_n$ with arithmetic mean $\bar{x} = \frac{1}{n}\sum_{i=1}^n x_i$:

1. **Sum of Deviations from Arithmetic Mean:**
   $$\sum_{i=1}^n (x_i - \bar{x}) = \sum_{i=1}^n x_i - \bar{x}\sum_{i=1}^n 1 = \sum_{i=1}^n x_i - \left(\frac{\sum_{i=1}^n x_i}{n}\right)n = 0$$

2. **Sum of Squared Deviations & Raw Sum of Squares ($RSS - CT$):**
   Expanding $\sum_{i=1}^n (x_i - \bar{x})^2$ gives:
   $$\sum_{i=1}^n (x_i - \bar{x})^2 = \sum_{i=1}^n (x_i^2 - 2x_i\bar{x} + \bar{x}^2) = \sum_{i=1}^n x_i^2 - 2\bar{x}\sum_{i=1}^n x_i + n\bar{x}^2$$
   Since $\sum_{i=1}^n x_i = n\bar{x}$, this simplifies to the **Raw Sum of Squares minus Correction Term ($CT$)**[^37]:
   $$\sum_{i=1}^n (x_i - \bar{x})^2 = \sum_{i=1}^n x_i^2 - \frac{\left(\sum_{i=1}^n x_i\right)^2}{n}$$
   *(Correction Note: The handwritten expansion has stray/miswritten terms in the intermediate lines marked `"Compleat the math, maybe worng written"`; the algebraic steps above show the exact derivation.)*

   - **Variance ($V(x)$ or $\sigma^2$):**
     $$V(x) = \frac{1}{n}\sum_{i=1}^n (x_i - \bar{x})^2 = \frac{1}{n}\left[\sum_{i=1}^n x_i^2 - \frac{\left(\sum_{i=1}^n x_i\right)^2}{n}\right]$$

3. **Mean Deviation Least About Median:**
   Mean deviation is least when measured from the median ($Me$) rather than another reference point such as the arithmetic mean ($\bar{x}$). Writing $|x_i - \bar{x}| = |(x_i - Me) + (Me - \bar{x})|$ shows the shift between $MD(\bar{x})$ and $MD(Me)$ (noting that $|a + b| \le |a| + |b|$ in general, so $\frac{1}{n}\sum_{i=1}^n |x_i - \bar{x}| \ge \frac{1}{n}\sum_{i=1}^n |x_i - Me|$).

---

## 🔢 First $n$ Natural Numbers: Mean, Variance, SD & CV
For the first $n$ natural numbers $1, 2, 3, \dots, n$:

- **Sum of First $n$ Natural Numbers:**
  $$\sum_{i=1}^n x_i = 1 + 2 + 3 + \dots + n = \frac{n(n+1)}{2}$$

- **Sum of Squares of First $n$ Natural Numbers:**
  $$\sum_{i=1}^n x_i^2 = 1^2 + 2^2 + 3^2 + \dots + n^2 = \frac{n(n+1)(2n+1)}{6}$$

- **Arithmetic Mean ($\bar{x}$):**
  $$\bar{x} = \frac{\sum_{i=1}^n x_i}{n} = \frac{n(n+1)}{2} \cdot \frac{1}{n} = \frac{n+1}{2}$$

- **Variance ($V(x)$):**
  $$V(x) = \frac{1}{n}\left[\frac{n(n+1)(2n+1)}{6} - \frac{\left(\frac{n(n+1)}{2}\right)^2}{n}\right] = \frac{(n+1)(n-1)}{12} = \frac{n^2 - 1}{12}$$

- **Standard Deviation ($SD$) & Coefficient of Variation ($CV$)[^38]:** *(completed)*
  $$SD = \sqrt{V(x)} = \sqrt{\frac{n^2 - 1}{12}}$$
  $$CV = \frac{SD}{\bar{x}} \times 100\% = \frac{\sqrt{\frac{n^2 - 1}{12}}}{\frac{n+1}{2}} \times 100\% = \sqrt{\frac{n-1}{3(n+1)}} \times 100\%$$

---

## 📊 Key Properties of Absolute Dispersion & Symmetrical Distribution
- **Larger vs. Smaller Spread:** Greater spread/variation in data produces larger dispersion values ($QD$, variance, $SD$), whereas high concentration or homogeneity yields smaller values ($QD$, range, variance, $SD$).
- **Identical Observations:** If all observations in a dataset are equal, there is zero variation, so every absolute measure of dispersion is **zero**.
- **Non-Negativity:** Absolute measures of dispersion are always **non-negative** ($\ge 0$; written as `"alwes posetive"` in the notes).
- **Symmetrical / Bell-Shaped Distribution:** For a bell-shaped symmetrical distribution, **$\text{Mean} = \text{Median} = \text{Mode}$**.

---

## 🎲 Introduction to Probability
Three types of probability[^39] are listed in the notes:
1. **Subjective probability** *(spelled `"Subjective prob..."`)*
2. **Empirical probability** *(spelled `"Empanical prob..."`)*
3. **Axiomatic probability** *(spelled `"Axiomatic"`)*

---

## 📌 Exam & Viva Focus
- **Must-Know Derivations:** Prove $\sum (x_i - \bar{x}) = 0$, derive the variance shortcut formula ($\text{RSS} - \text{CT}$), and derive the mean and variance of the first $n$ natural numbers ($\frac{n+1}{2}$ and $\frac{n^2-1}{12}$).
- **Conceptual Viva Points:** Why is $\sum (x_i - \bar{x}) = 0$? Why are absolute dispersion measures zero when all values are identical? What holds for $\text{Mean}$, $\text{Median}$, and $\text{Mode}$ in a symmetric bell-shaped curve?

---

## 📖 Key Definitions (Footnotes)
[^33]: **Symmetrical / Moderately Skewed Distribution:** A probability or frequency distribution that is balanced around its central peak (symmetrical, where mean, median, and mode coincide) or has mild asymmetry (moderately skewed) where standard empirical ratios among $QD$, $MD$, and $SD$ apply approximately.
[^34]: **Quartile Deviation ($QD$):** Semi-interquartile range, defined as half the difference between the third quartile ($Q_3$, 75th percentile) and first quartile ($Q_1$, 25th percentile): $QD = \frac{Q_3 - Q_1}{2}$.
[^35]: **Mean Deviation ($MD$):** The arithmetic mean of the absolute deviations of observations from a central value (such as the mean or median), measuring average distance from the center.
[^36]: **Standard Deviation ($SD$ or $\sigma$):** The positive square root of variance, measuring data spread in the same units as the original observations.
[^37]: **Correction Term ($CT$):** The adjustment term $\frac{(\sum x_i)^2}{n} = n\bar{x}^2$ subtracted from the raw sum of squares $\sum x_i^2$ to obtain the centered sum of squares $\sum (x_i - \bar{x})^2$.
[^38]: **Coefficient of Variation ($CV$):** A relative measure of dispersion expressing standard deviation as a percentage of the mean ($CV = \frac{SD}{\bar{x}} \times 100\%$), useful for comparing variability across datasets with different units or scales.
[^39]: **Probability (Subjective, Empirical, Axiomatic):** Quantitative measure of likelihood: *subjective* reflects personal judgment/belief; *empirical* comes from relative frequency in repeated experiments; *axiomatic* is defined rigorously via Kolmogorov's probability axioms.

---
**Tags:** #statistics #dispersion #variance #standard-deviation #quartile-deviation #probability #class-notes




# 24 November class 7
![[JPEG_20261124_205253_5401005581551023649.webp|146]]![[JPEG_20261124_205326_6290289306506491772.webp|142]]![[JPEG_20261124_205342_337986836068993449.webp|144]]![[JPEG_20261124_205359_5671629252352652905.webp|132]]
## Class Notes: Statistics - Curve Shape, Dispersion Formulas & Probability Fundamentals (Nov 24, 2026)

**Book Reference:** *Fundamentals of Probability* by Monoranjan / Monendra Kumar Roy (written as `"Fundamental of probability - monendro kumer roy"`)

---

## 📈 Curve Shape Characteristics & Empirical Intervals
For a normal / bell-shaped distribution, symmetric intervals around the mean ($\bar{x}$) capture approximate proportions of observations:
- $\bar{x} \pm QD$ includes **$50\%$** of observations (corresponding to quartiles $Q_1$ and $Q_3$).
- $\bar{x} \pm MD$ includes approximately **$57.51\%$** of observations.
- $\bar{x} \pm SD$ includes approximately **$68.27\%$** of observations.

**Empirical Rule (68–95–99.7 / "Almost All"):**
- $\bar{x} \pm \sigma$ contains approximately **$68\%$** of observations.
- $\bar{x} \pm 2\sigma$ contains approximately **$95\%$** of observations.
- $\bar{x} \pm 3\sigma$ contains **almost all** ($\approx 99.7\%$) of observations.

### Symmetry vs. Skewness ($\beta_1$)
- **Symmetrical Distribution:** $\text{Mean} = \text{Median} = \text{Mode}$ (and $Q_1, Q_3$ are equidistant from $Me, Q_2$).
- **Negatively Skewed ($-$ skewed, $\beta_1 < 0$):** Tail extends to the left; $\text{Mode} > \text{Median} > \text{Mean}$. *(Correction note: Handwritten arrow in the diagram shows $\beta_1 < 0$ for negative skewness.)*
- **Positively Skewed ($+$ skewed, $\beta_1 > 0$):** Tail extends to the right; $\text{Mean} > \text{Median} > \text{Mode}$.

---

## 🧮 Dispersion & Variance Summary Formulas
- **Coefficient of Variation ($CV$):**
  $$CV = \frac{\sigma}{\bar{x}} \times 100\%$$
  *(Note: In the handwritten note, `x 100` is written without the `%` symbol; multiplying by $100$ expresses $CV$ as a percentage.)*
- **Population / Unbiased-by-$n$ Variance ($\sigma^2$):**
  $$\sigma^2 = \frac{1}{n}\sum_{i=1}^n (x_i - \bar{x})^2 = \frac{1}{n}\left[\sum_{i=1}^n x_i^2 - \frac{\left(\sum_{i=1}^n x_i\right)^2}{n}\right]$$
- **Summary Calculation Checklist:** To compute variance using the shortcut formula, find $\sum x_i^2$, $\sum x_i$, and $n$.

---

## 🎲 Probability: Core Concepts & Approaches

### Probability vs. Possibility
- **Probability:** Quantitative measure of how likely an event is to occur; it *may or may not happen* (`may be happne or not`).
- **Possibility:** Conceptual feasibility of an outcome occurring (*must happen* / logically possible outcome in the sample space, written as `"must happne"` in the note).

### Approaches to Defining Probability
1. **Classical Probability** (also called *a priori* / statistical or frequency probability under equally likely outcomes)[^40]
2. **Empirical Probability** (experimental / relative-frequency approach)[^41]
3. **Subjective Probability** (degree of personal belief / judgment)[^42]
4. **Axiomatic Probability** (formal set-theoretic foundation using Kolmogorov's axioms)[^43]

### Experiments, Trials & Sample Space
- **Types of Experiment:**
  - *Absolute experiment*
  - *Comparative experiment*
  - *Random experiment*[^44]
- **Trial vs. Experiment:** A *trial* is a single performance/execution of an experiment, whereas an *experiment* is a process generating well-defined outcomes.
- **Sample Space ($\Omega$ or $S$):** The set of all possible sample points ($\{\omega_1, \omega_2, \omega_3, \omega_4, \dots\}$)[^45]:
  - **1 Coin Throw:** $\Omega = \{H, T\}$ ($2$ outcomes)
  - **2 Coin Throws:** $\Omega = \{HH, HT, TH, TT\}$ ($4$ outcomes)
  - **Die Throw** *(written as `"Dies throw"`)*: $\Omega = \{1, 2, 3, 4, 5, 6\}$ ($6$ outcomes)
  - **Drawing a Marble** from a bag
  - **Drawing a Card** from a standard deck ($52$ cards)

---

## 📌 Events & Properties of Probability
- **Simple vs. Compound Event:** A *simple (elementary) event* consists of a single sample point, while a *compound (composite) event* consists of two or more sample points.
- **Types of Events:**
  - **Mutually Exclusive Events:** Two events $A$ and $B$ are mutually exclusive if they cannot occur simultaneously ($A \cap B = \emptyset$, so $P(A \cap B) = 0$)[^46].
  - **Equally Likely Events:** Two or more events are equally likely if they have the same probability of occurring[^47].
  - **Independent Events:** Events where the occurrence of one does not affect the probability of the other ($P(A \cap B) = P(A)P(B)$)[^48].
  - **Exhaustive Events:** A set of events whose union covers the entire sample space ($\bigcup A_i = \Omega$)[^49].

### Fundamental Properties of Probability
For any event $A$:
1. **Non-negativity:** Probability cannot be negative ($P(A) \ge 0$).
2. **Boundedness:** Probability lies between $0$ and $1$:
   $$0 \le P(A) \le 1$$
3. **Total Probability:** The probability of the sure/certain event (entire sample space) equals unity ($1$):
   $$P(\Omega) = 1$$

---

## 📌 Exam & Viva Focus
- **Study Checklist (`সংজ্ঞা, example, সুবিধা, অসুবিধা`):** For every probability definition and approach (classical, empirical, subjective, axiomatic) and event type, prepare: **(1) formal definition, (2) concrete example, (3) advantages/merits, and (4) limitations/demerits**.
- **Skewness Ordering:** Be careful not to mix up left/negative skew ($\text{Mean} < \text{Median} < \text{Mode}$, $\beta_1 < 0$) and right/positive skew ($\text{Mean} > \text{Median} > \text{Mode}$, $\beta_1 > 0$).
- **Core Probability Bounds:** Always state $0 \le P(A) \le 1$ and $P(\text{Sample Space}) = 1$.

---

## 📖 Key Definitions (Footnotes)
[^40]: **Classical Probability:** Defines the probability of an event $A$ as the ratio of the number of favorable outcomes ($n_A$) to the total number of equally likely, mutually exclusive outcomes ($N$) in the sample space: $P(A) = \frac{n_A}{N}$.
[^41]: **Empirical (Experimental) Probability:** Estimates the probability of an event as the limiting relative frequency $\frac{n_A}{n}$ when a random experiment is repeated a large number of times ($n$) under identical conditions.
[^42]: **Subjective Probability:** A probability assignment based on an individual's personal judgment, experience, or expert opinion rather than repeatable frequencies or symmetry.
[^43]: **Axiomatic Probability:** A rigorous mathematical framework introduced by Andrey Kolmogorov where probability is a set function $P$ defined on events satisfying non-negativity, unit total measure ($P(\Omega)=1$), and countable additivity for mutually exclusive events.
[^44]: **Random Experiment:** A repeatable process or observation whose outcome cannot be predicted with certainty in advance, although the set of all possible outcomes (sample space) is known.
[^45]: **Sample Space ($\Omega$):** The set of all possible elementary outcomes of a random experiment.
[^46]: **Mutually Exclusive Events:** Events that share no common outcomes ($A \cap B = \emptyset$), meaning if one happens, the other cannot happen in the same trial.
[^47]: **Equally Likely Events:** Outcomes or events that have the exact same chance of occurring given the available evidence or symmetry.
[^48]: **Independent Events:** Events where knowing one occurred does not change the probability of the other ($P(A \mid B) = P(A)$).
[^49]: **Exhaustive Events:** A collection of events whose union accounts for every possible outcome in the sample space.

---
**Tags:** #statistics #probability #skewness #empirical-rule #variance #sample-space #events #class-notes