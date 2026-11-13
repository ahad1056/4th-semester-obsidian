

---
course_code: EEE-513
course_title: Communication Systems
university: University of Chittagong
years_analyzed: [2023, 2024, 2025]
tags:
  - EEE-513
  - Question-Bank
  - Syllabus-Cluster
  - CU-EEE
---

# 📚 EEE-513: Syllabus-Wise Question Cluster (2023–2025)

> [!info] Exam Strategy Summary
> - **Section A:** Primarily covers **Modules 1, 2, 3** (and **Module 4** in 2023 & 2025).
> - **Section B:** Guaranteed coverage of **Modules 5, 6, and 7** (plus **Module 4** in 2024).
> - **High-Yield Pattern:** Almost every main question ends with a numerical problem (`d` or `e`), and Radar/Propagation/Satellite questions repeat heavily across years.

---

## 🌐 MODULE 1: Fundamentals of Communication Systems

### 📖 Theory & Concepts
1. **Basic Elements & Communication Limits**
   - What are the basic constituents of a communication system? `[2023 Q1a]` `[2025 Q1b]` 🔥
   - What limits our ability to communicate? How does this limitation also add extra benefit to the communication system? `[2024 Q1a]` `[2025 Q1a]` 🔥
2. **Modulation & Carrier Fundamentals**
   - The carrier performs certain functions in radio communications. What are they? `[2023 Q1b]` `[2025 Q1c]` 🔥
   - What is the need for modulation in a communication system? `[2024 Q1b]`
3. **Noise Fundamentals**
   - Define noise / What is meant by the term "noise"? Where (at what stage) is it most likely / most severely to affect the signal? `[2024 Q2a]` `[2025 Q1d]` 🔥
   - Discuss the types, causes, and effects of the various forms of noise which may be created within a receiver or an amplifier. *(Also relates to Module 3)* `[2023 Q1c]` `[2024 Q1c]` 🔥

---

## 📻 MODULE 2: Analogue Modulation and Demodulation

### 📖 Theory & Derivations (AM, DSB-SC, SSB, VSB)
1. **AM, DSB-SC & VSB Concepts**
   - What is amplitude modulation (AM)? With necessary expressions, find the bandwidth of an AM signal. `[2023 Q2a]`
   - Sketch AM wave ($\phi_{AM}(t)$) for modulation indices of $m = 0.5$ and $m = 1$ `[2024 Q1d]`, and $\mu = 0.3$ and $\mu = 1$ `[2025 Q1e]`, when $m(t) = B\cos\omega_m t$ or $\cos\omega_m t$. Why are such types of modulation called tone modulation? `[2024 Q1d]` `[2025 Q1e]` 🔥
   - Describe double sideband – suppressed carrier (DSB-SC) and its advantages over AM modulation. `[2023 Q2b]`
   - Why is the efficiency of SSB+C pathetically lower than AM in case of envelope detection? `[2024 Q2d]`
   - *"VSB is a clever compromise between the SSB and DSB, which makes it very attractive for television broadcast systems."* Explain. `[2025 Q2d]`
2. **Modulators & Carrier Acquisition (PLL / Costas Loop)**
   - Explain the principle of nonlinear modulator. Why is it called a single balanced modulator? `[2024 Q2b]`
   - Prove that the balanced modulator produces an output consisting of sidebands only with the carrier removed. `[2024 Q2c]` `[2025 Q2b]` 🔥
   - Describe the process of carrier acquisition using PLL. `[2025 Q3a]`
   - How can a Costas phase-locked loop be used for the generation of a coherent demodulation carrier? `[2025 Q3b]`

### 📖 Theory & Derivations (FM, PM & Noise Performance)
3. **Angle Modulation (FM & PM)**
   - Derive an expression for the instantaneous value of an FM signal and define its modulation index. `[2023 Q5a]`
   - Write down the salient features of wideband and narrowband FM signal. `[2023 Q5b]`
   - What are the applications of amplitude modulation and frequency modulation? `[2023 Q2c]`
   - Of the various advantages of FM over AM, identify and discuss those due to the intrinsic qualities of frequency modulation. `[2024 Q3a]`
   - Draw the complete block diagram of the Armstrong frequency modulation system and explain the functions of the mixer and multipliers. In what circumstances can we dispense with the mixer? `[2024 Q3c]`
4. **Interference & Noise in FM (Pre-emphasis / De-emphasis)**
   - With the aid of vector diagrams, explain what happens when a carrier is modulated by a single noise frequency. `[2023 Q5c]` `[2024 Q3b]` 🔥
   - What is pre-emphasis? Why is it used? Explain why de-emphasis must be used also. *(Asked alongside receiver questions)* `[2023 Q6c]` `[2024 Q4c]` 🔥

### 🧮 Mathematical Problems (Module 2)
- **AM Current & Power:** Unmodulated RF carrier power of $2\text{ kW}$ sends a current of $5\text{ amp}$ rms through an antenna. On amplitude modulation by another sinusoidal voltage, the antenna current increases to $5.9\text{ amp}$. Calculate the modulation index, and carrier power after modulation. `[2023 Q1d]`
- **AM Power Saving:** Calculate the percentage of power saving in an AM wave when: (i) The carrier is suppressed, (ii) One of the sidebands is suppressed. `[2023 Q2d]`
- **AM Power Saving (Specific $m$):** Calculate the percentage of power saving when the carrier and one of the sidebands are suppressed in an AM wave modulated to a depth of (i) $100\%$ and (ii) $50\%$. `[2024 Q1e]`
- **AM Efficiency & Sideband Power:** Determine the efficiency and the percentage of total power carried by the sidebands of the AM wave for (i) $\mu = 0.3$ and (ii) $\mu = 1$. `[2025 Q1e]`
- **FM & PM Wave Equations:** A $25\text{ MHz}$ carrier is modulated by a $400\text{ Hz}$ sine wave. If the carrier voltage is $4\text{ V}$ and the maximum deviation is $10\text{ kHz}$, write the equation of this modulated wave for (i) FM and (ii) PM. If the modulating frequency is now changed to $2\text{ kHz}$, all else remaining constant, write a new equation for (i) FM and (ii) PM. `[2023 Q5d]`
- **FM Parameter Extraction:** Find the carrier and modulating frequencies, the modulation index, and the maximum deviation of the FM wave represented by the voltage equation $v = 12\sin(6 \times 10^8 t + 5\sin 1250t)$. What power will this FM wave dissipate in a $10\,\Omega$ resistor? `[2024 Q3d]`

---

## 📻 MODULE 3: Radio Transmitter and Receiver

### 📖 Theory & Diagrams
1. **Transmitters**
   - Draw the block diagram of an AM transmitter and explain the function of each block. `[2024 Q4a]`
   - Draw the block diagram of an FM transmitter and explain the function of each block. `[2023 Q6a]`
2. **Superheterodyne Receiver (SHR) & TRF**
   - Illustrate the functional diagram of a Superheterodyne AM receiver. `[2024 Q4b]`
   - Define the terms: sensitivity, selectivity, and image frequency. What are the advantages of a superheterodyne receiver over a TRF receiver? `[2025 Q2a]`
   - Explain how the constant intermediate frequency is achieved in the SHR. `[2023 Q6b]` `[2025 Q3c]` 🔥
3. **Noise Limiting Circuit**
   - Draw the circuit of a simple noise limiter and describe its working principle. `[2025 Q2c]`

### 🧮 Mathematical Problems (Module 3)
- **Image Frequency & Rejection Ratio (No RF Amp):** In a broadcast superheterodyne receiver having no RF amplifier, the loaded $Q$ of the antenna coupling circuit (at the input to the mixer) is $100$. If the intermediate frequency is $455\text{ kHz}$, calculate the image frequency and its rejection ratio (a) at $1000\text{ kHz}$ and (b) at $25\text{ MHz}$. `[2023 Q6d]`
- **Image Frequency & Rejection Ratio (With RF Amp):** Calculate the image-frequency (and rejection ratio) of a receiver having an RF amplifier and an IF of $450\text{ kHz}$, if the $Q$s of the relevant coils are $65$, at an incoming frequency of (i) $1200\text{ kHz}$, (ii) $20\text{ MHz}$. `[2024 Q4d]`
- **Image Frequency & Rejection Ratio (Given LO Freq):** When a superheterodyne receiver is tuned to $555\text{ kHz}$, its local oscillator provides the mixer with an input at $1010\text{ kHz}$. What is the image frequency? The antenna of this receiver is connected to the mixer via a tuned circuit whose loaded $Q$ is $40$. What will be the rejection ratio for the calculated image frequency? `[2025 Q3d]`

---

## 📺 MODULE 4: Television (TV) Systems

### 📖 Theory & Diagrams
1. **Scanning & Sync Pulses**
   - Why is scanning necessary in television transmission? Write short notes on horizontal and vertical scanning. `[2023 Q3b]`
   - Define blanking and synchronizing pulses. What are the functions of these pulses in television? `[2023 Q3a]`
   - Describe in a TV system: scanning, blanking, synchronizing, and equalizing pulses. `[2025 Q4a]`
   - Draw a scanning pattern interlaced in two fields for a total of **21 lines** `[2023 Q3c]` / **25 lines** `[2024 Q5b]` per frame. Also show the corresponding sawtooth waveforms for horizontal and vertical scanning. `[2023 Q3c]` `[2024 Q5b]` 🔥
2. **Picture Quality, Standards & Perception**
   - What are the effects of incorrect aspect ratio? `[2023 Q3d]`
   - What is persistence of vision? What is the impact of persistence of vision on TV broadcasting? `[2024 Q5c]`
   - What are the major U.S. TV standards? `[2025 Q4b]`
   - Which picture quality do you think is more important, contrast or resolution? `[2025 Q4d]`
   - Name one similarity and one difference between television pictures and motion pictures on film. `[2025 Q4e]`
3. **Color TV & Picture Tubes**
   - Define luminance and chrominance signal. `[2024 Q5a]`
   - Sketch and explain the electron gun arrangement for three different types of colour picture tube. `[2024 Q5d]` `[2025 Q4c]` 🔥

---

## 🌊 MODULE 5: Radio Wave Propagation

### 📖 Theory & Derivations
1. **Ground Wave & Space Wave Propagation**
   - How do radio waves propagate through space? `[2023 Q7b]`
   - Describe ground-wave propagation. What is angle of tilt? How does it affect field strength at a distance from the transmitter? `[2024 Q6a]` `[2025 Q5a]` 🔥
   - Describe the effect of earth curvature on space wave propagation. `[2024 Q6d]`
   - What is the formula for radio horizon range? `[2023 Q7c]`
2. **Ionosphere & Sky Wave Propagation**
   - Describe briefly the strata of ionosphere and their effects on sky-wave propagation. `[2023 Q4a]`
   - Discuss the reflection mechanism whereby electromagnetic waves are bent back by a layer of the ionosphere. Include in your discussion a description of the virtual height of a layer. `[2023 Q7a]` `[2025 Q5c]` 🔥
   - What is the secant law of wave propagation? `[2023 Q4b]`
   - Define skip distance, and show how it is related to the maximum usable frequency (MUF). `[2024 Q6c]`
   - Describe in some detail the main abnormal ionospheric variations (including a brief mention of the interference that may be caused by sporadic E layer). `[2023 Q4c]` `[2024 Q6b]` `[2025 Q5b]` 🔥 *(3x Repeated!)*

### 🧮 Mathematical Problems (Module 5)
- **MUF Calculation:** Two points on earth are $1500\text{ km}$ apart and are to communicate by means of HF. Given that this is to be a single-hop transmission, the critical frequency at that time is $7\text{ MHz}$ and conditions are idealized, calculate the MUF for those two points if the height of the ionospheric layer is $300\text{ km}$. `[2023 Q4d]` `[2025 Q5d]` 🔥 *(Exact Repeat!)*

---

## 📡 MODULE 6: Radar Systems

### 📖 Theory & Derivations
- **Radar Range Equation:** Derive the basic radar range equation, as governed by the minimum receivable echo power $P_{\min}$. `[2023 Q7d]` `[2024 Q7a]` `[2025 Q6a]` 🔥 *(3x Repeated!)*
- **Pulsed Radar:** Draw a functional block diagram of pulsed radar set, and describe the function of each block. `[2024 Q7c]` `[2025 Q6c]` 🔥
- **CW Doppler Radar:** Write the advantages, applications, and limitations of continuous wave Doppler radar. `[2024 Q7b]` `[2025 Q6b]` 🔥

### 🧮 Mathematical Problems (Module 6)
- **Minimum Receivable Signal ($P_{\min}$):** Calculate the minimum receivable signal in a radar receiver which has an IF bandwidth of $1.5\text{ MHz}$ and a $9\text{-dB}$ noise figure. `[2024 Q7d]` `[2025 Q6d]` 🔥 *(Exact Repeat!)*

---

## 🛰️ MODULE 7: Satellite Communication

### 📖 Theory & Derivations
1. **Orbital Mechanics & Kepler's Laws**
   - State and explain Kepler's three laws of planetary motion and how they apply to satellites. `[2024 Q8b]` `[2025 Q7a]` 🔥
   - Explain equatorial, polar, and inclined orbits. `[2023 Q8b]` `[2025 Q8b]` 🔥
   - What is the difference between a geosynchronous and a geostationary satellite orbit? Define Geostationary Earth Orbit (GEO) and what are the conditions required (altitude, inclination) for an orbit to be geostationary? `[2023 Q8a]` `[2025 Q7d]` 🔥
   - What is the difference between prograde and retrograde orbit? `[2025 Q7d]`
   - Define elevation angle, inclination angle, and visible angle. `[2024 Q8a]` `[2025 Q7b]` 🔥
   - Find out (derive) the radius of the geostationary satellite. `[2024 Q8d]`
2. **Satellite Subsystems, Frequency Bands & Types**
   - What is meant by a passive satellite and an active satellite? `[2025 Q8a]`
   - What do you mean by transponder? Briefly describe the function of each component of a communication satellite transponder. `[2023 Q8c]` `[2024 Q8c]` `[2025 Q8d]` 🔥 *(3x Repeated!)*
   - Explain why uplink frequency in a satellite is kept different from the downlink frequency. `[2025 Q7c]`
   - What are the merits of $6/4\text{ GHz}$ bands for satellite communication? `[2025 Q8c]`

### 🧮 Mathematical Problems (Module 7)
- **Receiver Noise Power:** Determine the total noise power for a receiver with an input bandwidth of $20\text{ MHz}$ and an equivalent noise temperature of $600\text{ K}$. `[2023 Q8d]`