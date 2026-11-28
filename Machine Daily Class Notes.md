

# 12 November Class 1
![[IMG_20261112_100343.webp|200]]

Class Notes: Machine
- ANIMATION OF MAGNETISM
 -  ![[electromagnetism_relativistic_origin_explorer.html]] 
### 📌 General Notes

- Mention of "1 CT & viva".

### 📝 Homework Assignment

- 1st homework: Why a conductor possesses magnetic characteristics when current flows through it.

### 🧲 Main Topic: Magnetism

- The core topic introduced is Magnetism.
- A diagram illustrates a conductor showing the relationship between charge and current:
  - Electron flow (e) moving in one direction (left).
  - Current (i) flowing in the opposite direction (right).
  - Positive (+) and negative (-) charges represented within the conductor.
- An additional small diagram shows current (i) flowing vertically.

---

Tags: #machine #magnetism #conductor #current #homework #class-notes





# 15 November class 2 
![[JPEG_20261115_112907_381189162920160358.webp|200x280]]


## Rotating Magnetic Field
- The main topic discussed is the rotating magnetic field .
- Exam/Study Focus: You need to learn the proof that a 3-phase system produces a rotating magnetic field .
- ANIMATION
 - ![[rotating_magnetic_field_3_phase_visualizer.html]]

## Project Work
- Assigned project: Making a Generator .

## Improvement of Motor
When looking at ways to improve a motor, the following key factors were listed:
- Efficiency 
- Speed control 
- Cost 
- Maintenance 
- User-friendly 
- Torque 

---
Tags: #machine #magnetic-field #3-phase-system #generator-project #motor-improvement #class-notes


# 17 November class 3 
![[IMG_20261117_094535.webp|243]]![[IMG_20261117_094839.webp|234]]![[JPEG_20261117_221324_1596615549641378074.webp|135]] 

## Class Notes: Machine II (Nov 17)

## 📌 Magnetic Field & Lorentz Force
- **Key Concept:** Deepmind. "Magnetic field এর দ্বারা নির্ভর করে কত current তৈরি আর কোন বস্তুটা তার উপর।" (The amount of current generated depends on the magnetic field and the object it acts upon.)
- **Lorentz Force Equation:** 
  $$F = q(\bar{v} \times \bar{B})$$
- **Torque Dependency:** The notes ask, "টর্ক কিসের উপর নির্ভর করবে?" (What does torque depend on?) 
  - The relationships noted are $T \propto \phi$ and $T \propto \text{something else}$ (possibly current, though illegible).

## ⚙️ Motor Design & Construction
- **Cooling Mechanism:** Metal casting shape is used on the outside (metal casting shape দিয়ে বাইরের shape বানায়). For cooling, a heat sink is used. The notes mention a "cooling fan" and "laminated sheet".
- **Stator and Rotor:** Diagrams show the cross-section of a stator (with teeth/slots) and a cylindrical rotor.

## 📊 Performance Parameters (Motor Evaluation)
A list of factors for evaluating or designing a motor:
1. Speed
2. Efficiency
3. Torque
4. Cost
5. User
6. Maintenance
7. Mechanical Strength

## 🧮 Speed Equation
The formula for synchronous speed is given as:
$$N_s = \frac{120f}{P}$$
- An example calculation is shown: $N = \frac{120 \times 50}{3} = 2000$ (assuming $f=50\text{ Hz}$ and $P=3$). Note: the calculation seems to be $\frac{120 \times 50}{3} = 2000$.

## 📝 Study Topic
- "Learn about Squirrel cage loop" (from the notebook).

---
**Tags:** #machine #lorentz-force #motor-design #torque #speed-equation #class-notes
# 19 November class 4
![[IMG_20261119_112801.webp|164]]  ![[IMG_20261119_112808.webp|162]]

## Class Notes: Machine - Motor Principles & Torque

## ⚙️ Synchronous Speed & Magnetic Field
- **Synchronous Speed Equation:** [^1] $N_s = \frac{120 f}{p}$ (in RPM).
- **Concept Question:** Where does this equation come from?
- **Pole Definition:** In this context, "pole" refers to the number of end point of the rotating magnetic field.

## 🔄 Torque Equations & Dependencies
Torque ($T$) is directly proportional to several factors:
- $T \propto \phi$ (Magnetic flux)
- $T \propto I_r$ (Rotor current)
- $T \propto \cos(\theta)$ (Power factor)
- **Final Torque Equation:** $T = k \phi I_r \cos(\theta)$

- **Starting Torque ($T_{ST}$):** $T_{ST} = k \frac{E_2^2 R_2}{R_2^2 + X_2^2}$.
- **Condition for Maximum Torque:** Maximum starting torque occurs when $R_2 = X_2$.

## 🌀 Slip & Rotor Frequency
- **Rotor Frequency Definition:** The frequency of the rotor current is the difference between the source frequency and the rotation frequency of the rotor.
  - Equation: $f = f_{source} - f_{rotor}$.
  - It is also expressed using slip: $f_r = s \cdot f_s$.
- **Slip ($S$) Equation:** 
  - *Correction applied:* The notebook incorrectly writes the denominator as $N$. The correct formula for Slip is relative to synchronous speed ($N_s$).
  - **Corrected Formula:** $S = \text{Slip} = \frac{N_s - N}{N_s} \times 100\%$.

## 📌 Exam & Viva Focus
- **Viva Question:** Why does Torque vary due to the power factor? (পাওয়ার ফ্যাক্টর এর জন্য কেন Torque vary করে?)
- **Homework:** How does controlling $X_2$ affect the Torque? ($X_2$ কিভাবে controll করে Torque নির্ভর করে?)
- **Key Concept to Study:** Skin effect.
- **Diagram Analysis:** Understand what happens when the rotor and magnetic field are at a specific angle (কি হবে যখন এই অবস্থায় থাকে!).

---
**Tags:** #machine #torque #slip #synchronous-speed #skin-effect #class-notes

# 22 November class 5
![[JPEG_20261122_113658_7109734686903906235.webp|340x453]] 
## Class Notes: Induction Motor - Starting & Running Torque

## 🔄 Torque Fundamentals & Relationships
Torque ($T$) in an induction motor depends on three main factors:
- $T \propto \Phi$ (Air-gap magnetic flux per pole)
- $T \propto I_2$ (Rotor current)
- $T \propto \cos\phi_2$ (Rotor power factor)

---

## 🚀 Starting Torque ($s = 1$)
At the moment of starting, the rotor is stationary, so the slip is $s = 1$.

- **Condition for Maximum Starting Torque ($T_{st(\max)}$):** 
  $$R_2 = X_2$$
  *(Rotor resistance equals standstill rotor inductive reactance)*

- **Methods to Achieve High Starting Torque:**
  1. **Deep-Bar Rotor:** Using deeper cage bars to utilize the **skin effect** (increases effective rotor resistance at high starting frequency).
  2. **Double-Cage Rotor:** Using two cages (an outer high-resistance cage for starting and an inner low-resistance cage for normal running).
  3. **VFD (Variable Frequency Drive):** Controlling both voltage and frequency to maintain optimal torque during startup.

---

## 🏃 Running Torque & Breakdown Torque
- **Condition for Maximum Running Torque ($T_{rt(\max)}$):** 
  $$R_2 = s X_2$$
  This peak torque during operation is also known as **Breakdown Torque** ($T_b$) or Pull-out Torque.

---

## 📈 Torque-Slip Characteristic Curve
As slip ($s$) decreases from $1$ (standstill) toward $0$ (synchronous speed), the motor passes through four key torque points:
1. **Starting Torque ($T_{st}$):** The torque developed at $s = 1$.
2. **Pull-up Torque (Pulling Torque):** The lowest dip in torque as the rotor begins to accelerate.
3. **Breakdown Torque ($T_b$):** The maximum torque the motor can develop before stalling (occurs where $R_2 = s X_2$).
4. **Full-Load Torque ($T_f$):** The steady operating torque near $s \approx 0$.

---

## 📌 Exam & Viva Focus (Questions & Short Answers)

- **Q1: At what angle $\phi_2$ does maximum torque occur?**
  - **Answer:** Maximum torque occurs at **$\phi_2 = 45^\circ$**. While $\cos\phi_2$ alone is highest at $0^\circ$, the motor torque equation ($T \propto \frac{s E_2^2 R_2}{R_2^2 + (s X_2)^2}$) reaches its peak when $R_2 = s X_2$. At this condition, $\tan\phi_2 = \frac{s X_2}{R_2} = 1$, which gives $\phi_2 = 45^\circ$ (a rotor power factor of $0.707$).

- **Q2: Why is torque proportional to $\cos\phi_2$ and not $\sin\phi_2$?**
  - **Answer:** Only the active (in-phase) component of the rotor current ($I_2 \cos\phi_2$) aligns constructively with the rotating magnetic flux ($\Phi$) to produce net unidirectional torque. The reactive component ($I_2 \sin\phi_2$) is $90^\circ$ out of phase with the flux, resulting in zero net average torque.

---
**Tags:** #machine #induction-motor #starting-torque #running-torque #breakdown-torque #skin-effect #vfd #class-notes

[^1]: Let:
	
	- $P$ = Total number of stator poles
	    
	- $f$ = Supply frequency in Hertz (cycles per second)
	    
	- $N_s$ = Synchronous speed in Revolutions Per Minute (RPM)
	    
	
	**Step 1: Revolutions per cycle** When a three-phase AC supply is given to the stator winding, the rotating magnetic field travels across 1 pair of poles (1 North and 1 South pole) during 1 complete cycle of the AC supply.
	
	- Total number of pole pairs in the stator = $\frac{P}{2}$
	    
	- For 1 complete mechanical revolution, the magnetic field must pass through all $\frac{P}{2}$ pole pairs.
	    
	
	Therefore, the fraction of a revolution completed in 1 cycle is:
	
	$$\text{Revolutions per cycle} = \frac{1}{P/2} = \frac{2}{P}$$
	
	**Step 2: Revolutions Per Second (RPS)** Since the supply completes $f$ cycles in 1 second, the number of revolutions completed per second is:
	
	$$\text{RPS} = (\text{Revolutions per cycle}) \times (\text{Cycles per second})$$
	
	$$\text{RPS} = \frac{2}{P} \times f = \frac{2f}{P}$$
	
	**Step 3: Revolutions Per Minute (RPM)** Since 1 minute equals 60 seconds, multiplying the RPS by 60 gives the synchronous speed ($N_s$) in RPM:
	
	$$N_s = \text{RPS} \times 60$$
	
	$$N_s = \frac{2f}{P} \times 60$$
	$$N_s = \frac{120f}{P}$$



# 23 November class 6
 ![[Machine Daily Class Notes-1795839654264.webp|163]]
## Class Notes: Electrical Machines - Torque Equations, Torque-Slip Curve & Phase-Wound Rotor

## ⚡ Torque Equation & Maximum Torque Conditions
The general electromagnetic torque equation in an induction motor is:
$$T = k \phi I_2 \cos(\phi_2)$$
where $k$ is a proportionality constant, $\phi$ is the magnetic flux per pole, $I_2$ is the rotor current, and $\cos(\phi_2)$ is the rotor power factor.

- **Starting Torque ($T_{st}$):** Occurs at standstill when slip $s = 1$. Maximum starting torque, $T_{st(\max)}$, is achieved when rotor resistance equals standstill rotor reactance:
  $$R_2 = X_2$$
- **Running & Breakdown Torque ($T_r, T_b$):** During running conditions (slip $s$), maximum running torque—also known as **Breakdown Torque** ($T_b$) or pull-out torque—occurs when:
  $$R_2 = s X_2$$

---

## 📈 Torque-Slip Characteristic Curve
The torque-slip curve plots motor torque against slip ($s$) from standstill ($s = 1$) to synchronous speed ($s = 0$):
- **At $s = 1$ (Standstill):** The motor produces its initial **Starting Torque** ($T_{st}$).
- **Pulling Torque (Pull-up Torque):** Marked on the curve near the lower region during acceleration, representing the local minimum torque before torque rises toward its peak.
- **Peak (Breakdown Torque, $T_b$):** The highest point on the curve (where $R_2 = s X_2$), representing the maximum torque the motor can develop before losing stability/stalling.
- **At $s = 0$ (Synchronous Speed):** Torque drops to zero because there is no relative motion between the rotating magnetic field and the rotor conductors, so no rotor EMF or current is induced.

---

## 🔧 What is a Phase-Wound Rotor? (`# phase wound কি?`)
A **phase-wound rotor** (commonly used in a **wound-rotor induction motor** or **slip-ring induction motor**) is a rotor constructed with insulated three-phase windings (typically star/Y-connected) rather than permanent shorted bars like a squirrel-cage rotor.
- **How it works:** The three winding terminals are brought out to **slip rings** mounted on the shaft, where stationary **carbon brushes** make electrical contact.
- **Why it is used:** External resistors (or rheostats) can be connected to the rotor circuit through the slip rings/brushes to adjust total rotor resistance ($R_2$). Because maximum torque occurs when $R_2 = s X_2$ (and $R_2 = X_2$ at starting), adding external resistance allows high starting torque with lower starting current and provides speed control.

---

## 📌 Exam & Viva Focus
- **Maximum Torque Conditions:** Memorize $R_2 = X_2$ for maximum starting torque ($s = 1$) and $R_2 = s X_2$ for maximum running/breakdown torque.
- **Curve Points:** Be able to sketch and label starting torque ($s = 1$), pulling torque, breakdown torque ($T_b$), and zero torque at synchronous speed ($s = 0$).
- **Viva Question:** *Why use a phase-wound (slip-ring) rotor instead of a squirrel-cage rotor when high starting torque is required?* Because external resistance can be added to the rotor circuit to match rotor reactance at starting, increasing starting torque while limiting starting current.

---
**Tags:** #electrical-machines #induction-motor #torque #torque-slip-curve #breakdown-torque #phase-wound-rotor #class-notes

# 26 November class 7
![[IMG_20261126_101904.webp|155]]   

## Class Notes: Electrical Machines - Induction Motor Power Flow, Torque & Starting/Control

> **Notice (`* আগামী সপ্তাহে Viva বা CT হতে পারে`):** A Viva or Class Test (CT) may take place next week.

## 📝 Assignment
- **Task:** Produce the **slip–torque characteristic** curve from the torque equation using **MATLAB** (plot electromagnetic torque $T$ vs. slip $s$ from $s = 1$ down to $s = 0$).

---

## ⚡ Induction Motor Power Flow & Torque Relations
Tracing power from stator input to mechanical shaft output (neglecting rotational/stray losses unless specified)
- **Primary (Stator) Power ($P_1$):** Electrical input power supplied to the stator windings
- **Secondary (Air-Gap) Power ($P_2$):** Power transferred across the air gap from stator to rotor (note: in the handwritten note, $P_2$ is written as `"Secondry power"`, though in induction motor terminology $P_2$ or $P_{ag}$ represents air-gap power)
- **Rotor Copper Loss ($P_{cu}$):**
  $$P_{cu} = s P_2$$
- **Gross Mechanical Power Developed ($P_m$):**
  $$P_m = P_2 - P_{cu} = P_2 - s P_2 = (1 - s) P_2$$
- **Power Ratio Identity:**
  $$P_2 : P_m : P_{cu} = 1 : (1 - s) : s$$

### Speed & Torque Equations
- **Rotor Mechanical Angular Speed ($\omega_r$):**
  $$\omega_r = (1 - s)\omega_s$$
  where $\omega_s = \frac{2\pi N_s}{60}$ is the synchronous angular speed.
- **Electromagnetic / Gross Torque ($T_g$):**
  Starting from $T = \frac{P}{\omega}$:
  $$T_g = \frac{P_m}{\omega_r} = \frac{(1 - s)P_2}{(1 - s)\omega_s} = \frac{P_2}{\omega_s}$$
  *(Correction note: In the handwritten equation, the numerator of the middle expression is written as $P_g$ while the top flow uses $P_m$; both refer to gross mechanical power developed, which simplifies cleanly to $\frac{P_2}{\omega_s}$.)*
- **Link to Flux–Current Torque Relation (`T = P/w থেকে T = \Phi I \cos\phi_2 তে আসতে হবে`):** Since air-gap power $P_2$ is proportional to induced rotor EMF ($E_2 \propto \phi$), rotor current ($I_2$), and rotor power factor ($\cos\phi_2$), dividing by $\omega_s$ leads to the proportional torque form $T \propto \phi I_2 \cos\phi_2$.

---

## 🔧 Starting, VFD, Vector Control & Magnetic Coupling
- **Rickshaw Load Torque Calculation (`methodically calculate the torque from weight of rickshaw`):**
  To compute required wheel/motor torque methodically from total mass/weight ($W = mg$):
  1. Find rolling resistance force: $F_{\text{roll}} = \mu_r W$ (plus incline force $W\sin\theta$ if climbing and aerodynamic drag if applicable).
  2. Multiply total tractive force by wheel radius ($r$): $T_{\text{wheel}} = F_{\text{total}} \cdot r$.
  3. Account for gear ratio / transmission efficiency ($\eta_{\text{drive}}$) to find required motor shaft torque: $T_{\text{motor}} = \frac{T_{\text{wheel}}}{G \cdot \eta_{\text{drive}}}$.
- **Star–Delta Starting (`we use star-delta connection when starting`):**
  Reduces per-phase stator voltage by a factor of $\frac{1}{\sqrt{3}}$ during starting, which lowers the high starting current (drawn when back/induced EMF is initially low/zero) and reduces starting torque to $\frac{1}{3}$ of direct-on-line (DOL) starting torque.
- **VFD & Starting Current Solution (`we use VFD for increase the starting torque (X_2 = R), but the current goes up. what the solution?`):**
  A **Variable Frequency Drive (VFD)**[^2] adjusts both frequency and voltage (typically keeping a constant $V/f$ ratio) so the motor develops strong torque smoothly without excessive current spikes. To prevent overcurrent during startup or high-torque demands, use **current limiting / ramp-up (acceleration time) settings** in the VFD, avoid sudden frequency/voltage steps, and ensure proper $V/f$ boost or closed-loop torque/current control rather than applying full voltage at low speed.
- **Vector Control (Field-Oriented Control, FOC):** A control technique[^3] that decomposes stator currents into flux-producing and torque-producing components (analogous to separate excitation in a DC motor) for precise dynamic torque and speed control.
- **Magnetic Coupling:** A torque-transmission mechanism[^4] that transfers mechanical power across an air gap using magnetic fields without direct physical/mechanical contact between driving and driven shafts.

---

## 📌 Exam, Viva & Actionable Study Tips
- **Viva High-Alert Topics:** Be ready to explain **Star–Delta starting**, **VFD current rise & how to limit it**, **Vector Control**, **Magnetic Coupling**, and how to derive $T = \frac{P_2}{\omega_s}$ and $P_2 : P_m : P_{cu} = 1 : (1 - s) : s$.
- **Actionable Study Tip:** Write a short MATLAB script (`s = linspace(0, 1, 500);`) to plot $T(s)$ for two different rotor resistances ($R_2$) so you can visually verify how changing $R_2$ shifts the slip at which maximum torque occurs ($R_2 = s X_2$).

---

## 📖 Key Definitions (Footnotes)
[^2]: **Variable Frequency Drive (VFD):** A power electronics motor controller that varies supply frequency (and correspondingly voltage) to control AC motor speed, acceleration ramp, and torque smoothly.
[^3]: **Vector Control (Field-Oriented Control):** An advanced AC motor control method that transforms three-phase currents into a rotating reference frame to independently regulate magnetic flux and electromagnetic torque.
[^4]: **Magnetic Coupling:** A non-contact power transmission device using permanent magnets or electromagnetic fields across an air gap to transmit torque while providing overload protection and misalignment tolerance.

---
**Tags:** #electrical-machines #induction-motor #power-flow #torque #vfd #vector-control #magnetic-coupling #matlab #class-notes