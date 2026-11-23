

# Thermodynamics: Specific Heats & Adiabatic Processes

> [!abstract] Quick Formula Overview
> - **Mayer’s Relation:** $C_p - C_v = R$
> - **Adiabatic Ratio:** $\gamma = \frac{C_p}{C_v}$
> - **Adiabatic $P\text{-}V$ Relation:** $PV^\gamma = \text{constant}$
> - **Adiabatic $T\text{-}V$ Relation:** $TV^{\gamma - 1} = \text{constant}$
> - **Adiabatic $T\text{-}P$ Relation:** $T^\gamma P^{1 - \gamma} = \text{constant}$

---

## Topic 1: Relation Between $C_p$ and $C_v$ (Mayer’s Relation)

> [!question] Probable Exam Questions
> 1. **Establish the relation between the molar specific heat capacities $C_p$ and $C_v$ of a perfect gas.**
> 2. **Prove that $C_p - C_v = R$ for an ideal gas.**
> 3. **Derive Mayer’s relation for $1\text{ kg-mole}$ of a perfect gas.**

### Answer:

#### **1. Consideration & Given Parameters**
Let us consider **$1\text{ kg-mole}$** ($n = 1$) of a perfect gas enclosed in a cylinder fitted with a frictionless, movable piston at constant pressure. When some heat is supplied to the gas externally, both its temperature and volume increase.
![[Chapter 1 - Thermodynmics and 1st law-1795448058474.webp|142]]
- $P =$ Constant pressure applied on the piston
- $\alpha =$ Area of cross-section of the piston
- $dT$ (or $\Delta T$) $=$ Rise in temperature of the gas
- $dx =$ Distance ($AB$) through which the piston is pushed upward
- $dv = \alpha \, dx =$ Increase in volume of the gas
- $C_p =$ Molar specific heat capacity of the gas at constant pressure
- $C_v =$ Molar specific heat capacity of the gas at constant volume
- $Q =$ Total amount of heat supplied to the gas

---

#### **2. Step-by-Step Derivation**

Although the rise in temperature and increase in volume take place simultaneously, for convenience of calculation, we assume the process occurs in **two separate steps**:

##### **Step I: Heating at Constant Volume**
Assume the volume of the gas remains constant and the temperature rises by $dT$. Let $Q_1$ be the heat required for this temperature rise:
$$Q_1 = 1 \cdot C_v \cdot dT \text{ Joules} \quad \longrightarrow (1)$$

##### **Step II: Expansion at Constant Pressure (External Work Done)**
Next, the volume of the gas increases by $dv$ as the gas pushes the piston upward by a distance $dx$ against a constant downward force $F = P \times \alpha$. 

Let $Q_2$ be the energy required to perform this mechanical work:
$$Q_2 = \text{Force} \times \text{Displacement}$$
$$Q_2 = (P \times \alpha) \times dx = P \times (\alpha \, dx)$$
$$Q_2 = P \, dv \text{ Joules} \quad \longrightarrow (2)$$

##### **Step III: Total Heat Supplied**
Since $Q_1$ and $Q_2$ are the two parts of the total heat $Q$ supplied to the gas:
$$Q = Q_1 + Q_2 \quad \longrightarrow (3)$$

However, looking at the change as a whole, the total heat $Q$ raises the temperature of $1\text{ kg-mole}$ of the gas by $dT$ at **constant pressure**:
$$Q = 1 \cdot C_p \cdot dT \quad \longrightarrow (4)$$

##### **Step IV: Combining the Equations**
Substituting equations $(1)$, $(2)$, and $(4)$ into equation $(3)$, we get:
$$C_p \, dT = C_v \, dT + P \, dv$$
$$(C_p - C_v) dT = P \, dv$$
$$C_p - C_v = P \frac{dv}{dT} \quad \longrightarrow (5)$$

##### **Step V: Applying the Ideal Gas Equation**
For a perfect gas, the ideal gas equation is:
$$PV = nRT$$
For $1\text{ kg-mole}$ of gas ($n = 1$):
$$PV = RT$$

Differentiating both sides with respect to temperature $T$ while keeping pressure $P$ constant (writing volume change as $dv$):
$$P \frac{dv}{dT} = R \quad \longrightarrow (6)$$

##### **Step VI: Final Result**
Substituting equation $(6)$ into equation $(5)$, we obtain:
$$C_p - C_v = R \quad \longrightarrow (7)$$

**(Proved)**

> [!tip] সহজ বাংলায় মূল ধারণা
> - **স্থির আয়তনে ($C_v$):** তাপ দিলে গ্যাসের আয়তন বাড়ে না, তাই পিস্টন সরাতে কোনো বাহ্যিক কাজ করতে হয় না। সম্পূর্ণ তাপই গ্যাসের অভ্যন্তরীণ শক্তি (তাপমাত্রা) বাড়াতে ব্যয় হয়।
> - **স্থির চাপে ($C_p$):** তাপ দিলে তাপমাত্রা বাড়ার পাশাপাশি গ্যাস প্রসারিত হয়ে পিস্টনকে ওপরে ঠেলে দেয় (বাহ্যিক কাজ $P\,dv$ করে)। তাই সমপরিমাণ তাপমাত্রা বাড়াতে স্থির চাপে অতিরিক্ত তাপের প্রয়োজন হয়, আর এই অতিরিক্ত তাপের পরিমাণই হলো সর্বজনীন গ্যাস ধ্রুবক $R$।

---

## Topic 2: Gas Equation for an Adiabatic Process ($PV^\gamma = \text{constant}$)

> [!question] Probable Exam Questions
> 1. **Derive the gas equation for an adiabatic process: $PV^\gamma = \text{constant}$.**
> 2. **Show that for a reversible adiabatic transformation of an ideal gas, $PV^\gamma = \text{constant}$, where $\gamma = \frac{C_p}{C_v}$.**

### Answer:

#### **1. Consideration & Given Parameters**
Let us consider **$1\text{ kg-mole}$** ($n = 1$) of a perfect gas enclosed in a cylinder fitted with a movable piston. Let a small amount of heat $\Delta Q$ be supplied to the gas, causing its temperature and volume to increase.

- $\Delta Q =$ Amount of heat supplied to the gas
- $P =$ Pressure applied on the piston
- $\alpha =$ Area of cross-section of the piston
- $dT =$ Rise in temperature of the gas
- $dx = AB =$ Distance through which the piston is pushed upward
- $dV$ (or $dv$) $= \alpha \, dx =$ Increase in volume of the gas
- $C_p \text{ \& } C_v =$ Molar specific heat capacities at constant pressure and constant volume respectively

---

#### **2. Step-by-Step Derivation**

##### **Step I: Total Heat Absorbed in Two Imaginary Steps**
1. **Constant Volume Heating:** Let the volume remain constant while the temperature rises by $dT$. The heat absorbed ($Q_1$) is:
   $$Q_1 = 1 \cdot C_v \cdot dT \text{ Joules} \quad \longrightarrow (1)$$

2. **Isothermal Expansion (Mechanical Work):** Let the temperature remain constant at $(T + dT)$ while the volume increases by $dV$. The heat energy absorbed ($Q_2$) in pushing the piston up by distance $dx$ against force $(P \times \alpha)$ is:
   $$Q_2 = (P \times \alpha) dx = P \times (\alpha \, dx) = P \, dV \text{ Joules} \quad \longrightarrow (2)$$

Therefore, total heat absorbed by the gas:
$$\Delta Q = Q_1 + Q_2 = C_v \, dT + P \, dV$$

##### **Step II: Applying the Adiabatic Condition**
In an **adiabatic transformation**, no heat enters or leaves the system ($\Delta Q = 0$). Hence:
$$C_v \, dT + P \, dV = 0 \quad \longrightarrow (3)$$

##### **Step III: Using the Perfect Gas Equation**
For $1\text{ kg-mole}$ of a perfect gas ($n = 1$):
$$PV = RT$$

Differentiating both sides:
$$P \, dV + V \, dP = R \, dT$$
$$dT = \frac{P \, dV + V \, dP}{R}$$

Since $R = C_p - C_v$, we can write:
$$dT = \frac{P \, dV + V \, dP}{C_p - C_v} \quad \longrightarrow (4)$$

##### **Step IV: Substituting $dT$ into the Adiabatic Equation**
Putting equation $(4)$ into equation $(3)$:
$$C_v \left( \frac{P \, dV + V \, dP}{C_p - C_v} \right) + P \, dV = 0$$

Multiplying both sides by $(C_p - C_v)$:
$$C_v P \, dV + C_v V \, dP + (C_p - C_v) P \, dV = 0$$
$$C_v P \, dV + C_v V \, dP + C_p P \, dV - C_v P \, dV = 0$$
$$\implies C_v V \, dP + C_p P \, dV = 0$$

##### **Step V: Dividing by $C_v PV$**
Dividing both sides of the equation by $C_v PV$:
$$\frac{C_v V \, dP}{C_v PV} + \frac{C_p P \, dV}{C_v PV} = 0$$
$$\frac{dP}{P} + \left(\frac{C_p}{C_v}\right) \frac{dV}{V} = 0$$

Let $\gamma = \frac{C_p}{C_v} = \text{Constant}$ (adiabatic index). Then:
$$\frac{dP}{P} + \gamma \frac{dV}{V} = 0$$

##### **Step VI: Integrating Both Sides**
Integrating the differential equation:
$$\int \frac{dP}{P} + \gamma \int \frac{dV}{V} = \int 0$$
$$\implies \log_e P + \gamma \log_e V = \text{constant}$$

Using logarithm rules ($\gamma \log_e V = \log_e V^\gamma$ and $\log A + \log B = \log AB$):
$$\log_e (P V^\gamma) = \text{constant}$$

Taking antilog on both sides:
$$P V^\gamma = e^{\text{constant}} = \text{constant}$$
$$\implies P V^\gamma = \text{constant} \quad \longrightarrow (5)$$

**(Proved)**

> [!tip] সহজ বাংলায় মূল ধারণা
> রুদ্ধতাপীয় প্রক্রিয়ায় (Adiabatic Process) সিস্টেমের ভেতরে বা বাইরে কোনো তাপ আদান-প্রদান হয় না, তাই $\Delta Q = 0$ বসানো হয়েছে। এরপর আদর্শ গ্যাস সমীকরণ $PV = RT$ ব্যবহার করে $dT$-কে অপসারণ করে ইন্টিগ্রেশন করলেই $PV^\gamma = \text{constant}$ পাওয়া যায়।

---

## Topic 3: Adiabatic Relations Between $(T, V)$ and $(T, P)$

> [!question] Probable Exam Questions
> 1. **From $PV^\gamma = \text{constant}$, derive the adiabatic relations between:**
>    - **(i) Temperature and Volume ($TV^{\gamma - 1} = \text{constant}$)**
>    - **(ii) Temperature and Pressure ($T^\gamma P^{1 - \gamma} = \text{constant}$)**

### Answer:

From the adiabatic pressure-volume relation, we know:
$$P V^\gamma = \text{constant} \quad \longrightarrow (5)$$

Also, for $1\text{ kg-mole}$ of a perfect gas, the ideal gas law is:
$$PV = RT$$

From this, we get two expressions:
$$P = \frac{RT}{V} \quad \longrightarrow (6)$$
$$V = \frac{RT}{P} \quad \longrightarrow (7)$$

---

#### **(i) Relation Between Temperature ($T$) and Volume ($V$)**

Substituting $P = \frac{RT}{V}$ from equation $(6)$ into equation $(5)$:
$$\left(\frac{RT}{V}\right) V^\gamma = \text{constant}$$
$$R \cdot T \cdot V^{\gamma - 1} = \text{constant}$$

Since $R$ is the universal gas constant, dividing both sides by $R$ gives a new constant:
$$T V^{\gamma - 1} = \text{constant} \quad \longrightarrow (8)$$

---

#### **(ii) Relation Between Temperature ($T$) and Pressure ($P$)**

Substituting $V = \frac{RT}{P}$ from equation $(7)$ into equation $(5)$:
$$P \left(\frac{RT}{P}\right)^\gamma = \text{constant}$$
$$P \cdot \frac{R^\gamma T^\gamma}{P^\gamma} = \text{constant}$$
$$R^\gamma \cdot T^\gamma \cdot P^{1 - \gamma} = \text{constant}$$

Since $R^\gamma$ is a constant, dividing both sides by $R^\gamma$ gives:
$$T^\gamma P^{1 - \gamma} = \text{constant} \quad \longrightarrow (9)$$

**(Proved)**

---

## Bonus: Short & Viva Questions (অতিরিক্ত সংক্ষিপ্ত প্রশ্নোত্তর)

> [!question] Q1: Why is $C_p$ always greater than $C_v$ ($C_p > C_v$)?
> **Answer:** When a gas is heated at constant volume, all supplied heat is used solely to increase its internal energy (temperature). However, when heated at constant pressure, the gas expands and does external mechanical work ($P\,dV$) against the surroundings in addition to raising its temperature. Therefore, more heat is required at constant pressure, making $C_p > C_v$.

> [!question] Q2: What is $\gamma$ (gamma) in thermodynamics?
> **Answer:** $\gamma$ is the **adiabatic index** (or specific heat ratio), defined as the ratio of molar specific heat at constant pressure to molar specific heat at constant volume:
> $$\gamma = \frac{C_p}{C_v}$$
> Since $C_p > C_v$, the value of $\gamma$ is always greater than $1$ ($\gamma > 1$).

---

## Summary Table for Quick Revision

| Equation / Relation            |              Mathematical Form              | Condition                             |
| :----------------------------- | :-----------------------------------------: | :------------------------------------ |
| **Mayer's Formula**            |               $C_p - C_v = R$               | For $1\text{ mole}$ of an ideal gas   |
| **Adiabatic $P\text{-}V$ Law** |        $PV^\gamma = \text{constant}$        | $\Delta Q = 0$ (Reversible adiabatic) |
| **Adiabatic $T\text{-}V$ Law** |     $TV^{\gamma - 1} = \text{constant}$     | Eliminating $P$ using $PV = RT$       |
| **Adiabatic $T\text{-}P$ Law** | $T^\gamma P^{1 - \gamma} = \text{constant}$ | Eliminating $V$ using $PV = RT$       |