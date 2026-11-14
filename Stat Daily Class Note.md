
# 8 November class 1 

![[IMG_20261110_112229.webp|66]]![[IMG_20261110_112233.webp|66]]

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
![[JPEG_20261111_055659_8646015617116971960.webp| 200]]
![[JPEG_20261111_055804_3730326127798271696.webp|176]]
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
![[IMG_20261112_114640.webp|100]]![[IMG_20261112_114645.webp|100]]![[IMG_20261112_114650.webp|100]]![[IMG_20261112_114653.webp|100]]

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

## 📌 Mean & Symmetric Distribution
- **Symmetric Distribution:** In this type of distribution, mean = mode = median.
- **Shortcut / Coded Method[^20] for Mean:**
  - $A$ = Assumed mean or arbitrary origin.
  - $C$ = Scale (class interval width).
  - Formula:
    $$\bar{x} = A + c\bar{u}$$
    where,
    $$\bar{u} = \frac{\sum fu}{\sum f}$$
  - An example[^21] was solved where the mean, $\bar{x} = 7.8$.
- **Note:** Arithmetic mean depends on the scale and origin.

## 📌 Measures of Dispersion
- **What is Dispersion?** Dispersion is the measure of how far an observation is spread out from its central value.
- **Types of Dispersion:**
  ###  **Absolute Measures:** 
  1. Range,
  2. Quartile Deviation (QD), 
  3. Mean Deviation (MD), 
  4. Variance, 
  5. Standard Deviation.

  ###  **Relative Measures:** 
  6. Coefficient of Range, 
  7. Coefficient of QD, 
  8. Coefficient of MD, 
  9. Coefficient of Variation.

- Two additional topics were mentioned: Sampling Fluctuation and Extreme Value.

## 📐 Important Formulas of Dispersion
- **Mean Deviation (M.D):**
  $$M.D = \frac{\sum |D_i|}{N}$$
  - Where $|D_i| = |x_i - \bar{x}|$ (absolute deviation).
- **Important Proof Topic:** The sum of the deviations of all observations from their arithmetic mean is always zero.
  $$\sum (x_i - \bar{x}) = 0$$
- **Variance:** Variance is the average of the squared deviations of all observations from their arithmetic mean.
  $$\text{Variance} = \frac{\sum (x_i - \bar{x})^2}{N}$$
- **Standard Deviation (SD):** Standard deviation is the positive square root of the variance.
  $$SD = \sigma = \sqrt{V(x)}$$

---
**Tags:** #statistics #mean #mode #dispersion #variance #standard-deviation #class-notes























































































































































































































































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

	

### Class Notes: Statistics - Central Tendency & Dispersion

