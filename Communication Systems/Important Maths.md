

### Solved Examples

> [!example] Example 2.1: Maximum Noise Power Output
> **Problem:** If the resistor is operating at $27^\circ\text{C}$ and the bandwidth of interest is $2\text{ MHz}$, then what is the maximum noise power output of a resistor?
>
> **Given Data:**
> * Temperature, $T = 27 + 273 = 300\text{ K}$
> * Bandwidth, $\Delta f = 2\text{ MHz} = 2 \times 10^6\text{ Hz}$
> * Boltzmann's constant, $k = 1.38 \times 10^{-23}\text{ J/K}$
>
> **Solution:**
> $$P_n = k \cdot T \cdot \Delta f$$
> $$P_n = 1.38 \times 10^{-23} \times 300 \times 2 \times 10^6$$
> $$P_n = 1.38 \times 10^{-17} \times 600 = 0.138 \times 0.6 \times 10^{-12}$$
> $$P_n = 0.0828 \times 10^{-12}\text{ Watts}$$

---

> [!example] Example 2.2: RMS Noise Voltage at Amplifier Input
> **Problem:** An amplifier operating over the frequency range from $18$ to $20\text{ MHz}$ has a $10\text{-kilohm}$ ($10\text{-k}\Omega$) input resistor. What is the rms noise voltage at the input to this amplifier if the ambient temperature is $27^\circ\text{C}$?
>
> **Given Data:**
> * Frequency range $= 18\text{ MHz}$ to $20\text{ MHz} \implies \Delta f = (20 - 18) \times 10^6\text{ Hz} = 2 \times 10^6\text{ Hz}$
> * Input resistance, $R = 10\text{ k}\Omega = 10^4\ \Omega$
> * Temperature, $T = 27 + 273 = 300\text{ K}$
> * Boltzmann's constant, $k = 1.38 \times 10^{-23}\text{ J/K}$
>
> **Solution:**
> $$V_n = \sqrt{4 k T \Delta f R}$$
> $$V_n = \sqrt{4 \times 1.38 \times 10^{-23} \times (27 + 273) \times (20 - 18) \times 10^6 \times 10^4}$$
> $$V_n = \sqrt{4 \times 1.38 \times 3 \times 2 \times 10^{-11}} = 1.82 \times 10^{-5}\text{ V}$$
> $$V_n = 18.2\text{ microvolts } (18.2\ \mu\text{V})$$
>
> > [!note] Key Observation
> > This amplifier cannot handle signals unless they are considerably larger than $18.2\ \mu\text{V}$. Any low-voltage signal near or below this level will be masked by the thermal noise and lost.

> [!example] Example 2.3: Total Input Noise Voltage with Equivalent Noise Resistance
> **Problem:** Calculate the noise voltage at the input of a television RF amplifier, using a device that has a $200\text{-ohm}$ ($200\text{-}\Omega$) equivalent noise resistance and a $300\text{-}\Omega$ input resistor. The bandwidth of the amplifier is $6\text{ MHz}$, and the temperature is $17^\circ\text{C}$.
>
> **Given Data:**
> * Equivalent noise resistance $= 200\ \Omega$
> * Input resistor $= 300\ \Omega$
> * Total resistance, $R_{\text{tot}} = 300 + 200 = 500\ \Omega$
> * Bandwidth, $\Delta f = 6\text{ MHz} = 6 \times 10^6\text{ Hz}$
> * Temperature, $T = 17 + 273 = 290\text{ K}$
> * Boltzmann's constant, $k = 1.38 \times 10^{-23}\text{ J/K}$
>
> **Solution:**
> $$V_{n,\text{tot}} = \sqrt{4 k T \Delta f R_{\text{tot}}}$$
> $$V_{n,\text{tot}} = \sqrt{4 \times 1.38 \times 10^{-23} \times (17 + 273) \times 6 \times 10^6 \times (300 + 200)}$$
> $$V_{n,\text{tot}} = \sqrt{4 \times 1.38 \times 2.9 \times 6 \times 5 \times 10^{-13}} = \sqrt{48 \times 10^{-12}}$$
> $$V_{n,\text{tot}} = 6.93 \times 10^{-6}\text{ V} = 6.93\ \mu\text{V}$$
>
> > [!note] Key Observation
> > To calculate the noise voltage due to several resistors in parallel, find the total resistance by standard methods and substitute it into the formula. The total noise voltage is less than that due to any of the individual resistors, while the noise power remains constant.

---
![[Important Maths-1794658557254.webp|262]]
> [!example] Example 2.4: Equivalent Input-Noise Resistance of a Two-Stage Amplifier
> **Problem:** The first stage of a two-stage amplifier has a voltage gain of $10$, a $600\text{-}\Omega$ input resistor, a $1600\text{-}\Omega$ equivalent noise resistance and a $27\text{-k}\Omega$ output resistor. For the second stage, these values are $25$, $81\text{ k}\Omega$, $10\text{ k}\Omega$ and $1\text{ megaohm}$ ($1\text{ M}\Omega$), respectively. Calculate the equivalent input-noise resistance of this two-stage amplifier.
>
> **Given Data:**
> * **Stage 1:** Voltage gain ($A_1$) $= 10$, Input resistor $= 600\ \Omega$, Equivalent noise resistance $= 1600\ \Omega$, Output resistor $= 27\text{ k}\Omega$
> * **Stage 2:** Voltage gain ($A_2$) $= 25$, Input resistor $= 81\text{ k}\Omega$, Equivalent noise resistance $= 10\text{ k}\Omega$, Output resistor $= 1\text{ M}\Omega$
>
> **Solution:**
> $$R_1 = 600 + 1600 = 2200\ \Omega$$
> $$R_2 = \frac{27 \times 81}{27 + 81} + 10 = 20.2 + 10 = 30.2\text{ k}\Omega$$
> $$R_3 = 1\text{ M}\Omega \quad (\text{as given})$$
> $$R_{\text{eq}} = 2200 + \frac{30,200}{10^2} + \frac{1,000,000}{10^2 \times 25^2} = 2200 + 302 + 16$$
> $$R_{\text{eq}} = 2518\ \Omega$$
>
> > [!note] Key Observation
> > Due to the high voltage gains of the preceding stages, the $1\text{-M}\Omega$ output resistor at the final stage has the same noise effect as just a $16\text{-}\Omega$ resistor at the input.



