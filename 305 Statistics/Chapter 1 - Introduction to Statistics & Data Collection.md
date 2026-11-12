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