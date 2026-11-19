# Class 1 Math Problem

**Summary:** This note covers the construction of a Frequency Distribution Table (FDT) from grouped data and the calculation of the arithmetic mean . It also outlines essential statistical formulas, including Sturges' rule for determining class intervals, as well as the generalized formulas for calculating the Median and Quartiles for grouped frequency distributions

---

## 1. Frequency Distribution Table (FDT)

Here is the structured data table extracted from the raw problem[cite: 1]:

| Class Interval | Midpoint ($x$) | Frequency ($f$) | Cumulative Frequency ($cf$) | $f \times x$ |
| :--- | :---: | :---: | :---: | :---: |
| 0 - 2 | 1 | 1 | 1 | 1 |
| 2 - 4 | 3 | 2 | 3 | 6 |
| 4 - 6 | 5 | 5 | 8 | 25 |
| 6 - 8 | 7 | 4 | 12 | 28 |
| 8 - 10 | 9 | 3 | 15 | 27 |
| **Total** | | **$\sum f = 15$** | | **$\sum fx = 87$** |

---

## 2. Mean Calculation

Using the data from the frequency distribution table, the arithmetic mean is calculated as follows[cite: 1]:

$$ \text{Mean } (\bar{x}) = \frac{\sum fx}{\sum f} $$

$$ \bar{x} = \frac{87}{15} = 5.8 $$

---

## 3. Key Statistical Formulas & Concepts

### A. Data Classification Rules[cite: 1]
* **Number of Classes ($k$) via Sturges' Rule:** 
  $$ k = 1 + 3.225 \log_{10}(N) $$
* **Class Interval Width ($I$):** 
  $$ I = \frac{\text{Range}}{k} $$ 
  *(For the data above, Range = 10 - 0 = 10).*
* **Interval Types:** Data can be categorized using **closed intervals** or **open intervals**.

### B. Median ($Me$)
The median is the 2nd quartile ($Q_2$). The position of the median class is determined by $\frac{N}{2}$

**Formula for Grouped Data:**
$$ Me = L + \frac{\frac{N}{2} - cf}{f_m} \times c $$
* **$L$**: Lower boundary of the median class.
* **$N$**: Total number of observations ($\sum f$).
* **$cf$**: Cumulative frequency of the class *just above* (preceding) the median class.
* **$f_m$**: Frequency of the median class.
* **$c$**: Class interval width.

*Note for Ungrouped Data:* 
* Even observations: use $\frac{n}{2}$ position.
* Odd observations: use $\frac{n+1}{2}$ position.

### C. Quartiles ($Q_i$) & Quantile Family
The quantile family includes central tendency measurements like Interquartile Range and Quartile Deviation.

**Formula for $i$-th Quartile in Grouped Data:**
$$ Q_i = L + \frac{\frac{iN}{4} - cf}{f_{Qi}} \times c $$
* Where $i$ represents the specific quartile (e.g., 1, 2, or 3) and the parameters follow the same logic as the median formula for the $i$-th quartile class.

# Class 5 Math practice problem 

## Descriptive Statistics: Salary Dataset

## Dataset
Given $n = 12$ sorted salary values (in thousands of dollars):
$$X = \{30, 36, 47, 50, 52, 52, 56, 60, 63, 70, 70, 110\}$$

---

## Summary Table

| Metric | Value ($k) | Value ($) |
| :--- | :--- | :--- |
| **Minimum** | $30$ | $\$30,000$ |
| **Maximum** | $110$ | $\$110,000$ |
| **Range** | $80$ | $\$80,000$ |
| **Mid-range** | $70$ | $\$70,000$ |
| **Mean ($\bar{x}$)** | $58$ | $\$58,000$ |
| **Median ($Q_2$)** | $54$ | $\$54,000$ |
| **Mode** | $52, 70$ | $\$52,000$ and $\$70,000$ |
| **First Quartile ($Q_1$)** | $48.5$ | $\$48,500$ |
| **Third Quartile ($Q_3$)** | $66.5$ | $\$66,500$ |
| **Interquartile Range ($\text{IQR}$)** | $18$ | $\$18,000$ |
| **Mean Deviation ($\text{MD}$)** | $13.83$ | $\$13,833.33$ |
| **Sample Variance ($s^2$)** | $413.64$ | — |
| **Population Variance ($\sigma^2$)** | $379.17$ | — |
| **Coefficient of Variation ($\text{CV}$, Sample)** | $35.07\%$ | — |
| **Coefficient of Variation ($\text{CV}$, Pop.)** | $33.57\%$ | — |

---

## Step-by-Step Solutions

### 1. Maximum and Minimum Value
* **Minimum ($\min$):** $30$ ($\$30,000$)
* **Maximum ($\max$):** $110$ ($\$110,000$)

### 2. Range
$$\text{Range} = \max - \min = 110 - 30 = 80\text{ ($\$80,000$)}$$

### 3. Mean ($\bar{x}$)
$$\bar{x} = \frac{\sum x_i}{n} = \frac{30 + 36 + 47 + 50 + 52 + 52 + 56 + 60 + 63 + 70 + 70 + 110}{12} = \frac{696}{12} = 58\text{ ($\$58,000$)}$$

### 4. Median ($Q_2$)
Since $n = 12$ is even, the median is the average of the $6\text{th}$ and $7\text{th}$ values:
$$\text{Median} = \frac{52 + 56}{2} = 54\text{ ($\$54,000$)}$$

### 5. Mode
The dataset is **bimodal**, as both $52$ and $70$ appear twice (the highest frequency):
$$\text{Mode} = 52\text{ and }70\text{ ($\$52,000\text{ and }\$70,000$)}$$

### 6. Quartiles ($Q_1$ and $Q_3$)
Splitting the ordered dataset into two equal halves of $6$ values each:
* **Lower half:** $\{30, 36, 47, 50, 52, 52\}$
  $$Q_1 = \frac{47 + 50}{2} = 48.5\text{ ($\$48,500$)}$$
* **Upper half:** $\{56, 60, 63, 70, 70, 110\}$
  $$Q_3 = \frac{63 + 70}{2} = 66.5\text{ ($\$66,500$)}$$

> [!note] Alternative Interpolation Method
> Using linear percentile interpolation ($p(n-1) + 1$), $Q_1 = 49.25$ and $Q_3 = 64.75$ ($\text{IQR} = 15.5$). Standard textbook median-splitting ($48.5$ and $66.5$) is used above.

### 7. Interquartile Range ($\text{IQR}$)
$$\text{IQR} = Q_3 - Q_1 = 66.5 - 48.5 = 18\text{ ($\$18,000$)}$$

### 8. Mean Deviation ($\text{MD}$)
Using absolute deviations from the mean ($\bar{x} = 58$):
$$\sum |x_i - \bar{x}| = |30-58| + |36-58| + |47-58| + |50-58| + |52-58| + |52-58| + |56-58| + |60-58| + |63-58| + |70-58| + |70-58| + |110-58|$$
$$\sum |x_i - \bar{x}| = 28 + 22 + 11 + 8 + 6 + 6 + 2 + 2 + 5 + 12 + 12 + 52 = 166$$
$$\text{MD} = \frac{\sum |x_i - \bar{x}|}{n} = \frac{166}{12} \approx 13.83\text{ ($\$13,833.33$)}$$

### 9. Variance
First, compute the sum of squared deviations from the mean ($\bar{x} = 58$):
$$\sum (x_i - \bar{x})^2 = (-28)^2 + (-22)^2 + (-11)^2 + (-8)^2 + (-6)^2 + (-6)^2 + (-2)^2 + (2)^2 + (5)^2 + (12)^2 + (12)^2 + (52)^2$$
$$\sum (x_i - \bar{x})^2 = 784 + 484 + 121 + 64 + 36 + 36 + 4 + 4 + 25 + 144 + 144 + 2704 = 4550$$

* **Sample Variance ($s^2$, with $n - 1 = 11$):**
  $$s^2 = \frac{4550}{11} \approx 413.64$$
* **Population Variance ($\sigma^2$, with $N = 12$):**
  $$\sigma^2 = \frac{4550}{12} \approx 379.17$$

### 10. Coefficient of Variation ($\text{CV}$)
$$\text{CV} = \left(\frac{\text{Standard Deviation}}{\text{Mean}}\right) \times 100\%$$

* **Sample $\text{CV}$** ($s = \sqrt{413.6364} \approx 20.34$):
  $$\text{CV}_{\text{sample}} = \left(\frac{20.3381}{58}\right) \times 100\% \approx 35.07\%$$
* **Population $\text{CV}$** ($\sigma = \sqrt{379.1667} \approx 19.47$):
  $$\text{CV}_{\text{pop}} = \left(\frac{19.4722}{58}\right) \times 100\% \approx 33.57\%$$

### 11. 5-Number Summary
$$(\min,\; Q_1,\; \text{Median},\; Q_3,\; \max) = (30,\; 48.5,\; 54,\; 66.5,\; 110)$$

### 12. Mid-range
$$\text{Mid-range} = \frac{\min + \max}{2} = \frac{30 + 110}{2} = \frac{140}{2} = 70\text{ ($\$70,000$)}$$