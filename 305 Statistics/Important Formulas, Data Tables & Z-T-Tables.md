## 📌 Mean & Symmetric Distribution

- **Symmetric Distribution:** $\text{Mean} = \text{Mode} = \text{Median}$ 
- **Shortcut / Coded Method for Mean:** [^1] 
  $$\bar{x} = A + c\bar{u}$$
  যেখানে, $\bar{u} = \frac{\sum fu}{\sum f}$ এবং $u = \frac{x - A}{c}$ 
  - $A$ = Assumed mean বা arbitrary origin 
  - $c$ = Scale (class interval width) 

> [!note] বৈশিষ্ট্য
> Arithmetic mean **scale** এবং **origin** উভয়ের উপর নির্ভরশীল। 

---

## 📌 Measures of Dispersion

**Dispersion:** কোনো ডেটাসেটের মানগুলো তার কেন্দ্রীয় মান (central value) থেকে কতটুকু ছড়িয়ে আছে, তার পরিমাপ।

| পরিমাপক (Measure) | Absolute Measures  | Relative Measures  |
| :--- | :--- | :--- |
| **Range**  | $R = X_{\max} - X_{\min}$ | **Coefficient of Range:** $\frac{X_{\max} - X_{\min}}{X_{\max} + X_{\min}}$  |
| **Quartile Deviation (QD)**  | $QD = \frac{Q_3 - Q_1}{2}$ | **Coefficient of QD:** $\frac{Q_3 - Q_1}{Q_3 + Q_1}$  |
| **Mean Deviation (MD)**  | **Ungrouped:** $MD = \frac{\sum \lvert x - \bar{x} \rvert}{n}$<br>**Grouped:** $MD = \frac{\sum f\lvert x - \bar{x} \rvert}{N}$<br>*(অথবা $\text{Median}$ থেকে)* | **Coefficient of MD:** $\frac{MD}{\bar{x}}$ অথবা $\frac{MD}{\text{Median}}$  |
| **Variance**  | **Ungrouped:** $\sigma^2 = \frac{\sum (x - \bar{x})^2}{n}$<br>**Grouped:** $\sigma^2 = \frac{\sum f(x - \bar{x})^2}{N}$ | — |
| **Standard Deviation (SD)**  | **Ungrouped:** $\sigma = \sqrt{\frac{\sum (x - \bar{x})^2}{n}}$<br>**Grouped:** $\sigma = \sqrt{\frac{\sum f(x - \bar{x})^2}{N}}$ | **Coefficient of Variation (CV):** $CV = \frac{\sigma}{\bar{x}} \times 100\%$  |

> [!tip] মনে রাখার সহজ উপায়
> - **Absolute Measures:** ডেটার নিজস্ব এককে (টাকা, কেজি, নম্বর) প্রকাশিত হয়।
> - **Relative Measures:** একক-মুক্ত (Unit-free) অনুপাত বা শতাংশ (%), যা দুটি ভিন্ন ডেটাসেটের তুলনায় ব্যবহৃত হয়।

[^1]: **Proof of Coded Method:** ধরি, $u_i = \frac{x_i - A}{c} \Rightarrow x_i = A + c u_i$। উভয়পাশে $f_i$ গুণ করে সমষ্টি নিলে, $\sum f_i x_i = A \sum f_i + c \sum f_i u_i$। উভয়পক্ষকে $N = \sum f_i$ দিয়ে ভাগ করলে, $\bar{x} = A + c\bar{u}$ (প্রমাণিত)।