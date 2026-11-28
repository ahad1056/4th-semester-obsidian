
## Question : why an induction motor can be treated as a rotating transformer ?

![[full_induction_motor_cross_section_animation.html]]



## Question: Prove that an induction motor with a 3-phase supply can produce a rotating magnetic field at a constant magnitude and speed.
### Answer:

When a balanced 3-phase supply is fed to a 3-phase stator winding (displaced by $120^\circ$ in space), a **Rotating Magnetic Field (RMF)** of constant magnitude ($1.5\Phi_m$) is produced, which rotates at a constant synchronous speed ($N_s$).

#### **1. Mathematical Proof (Constant Magnitude)**

Let the three balanced alternating fluxes produced by phases $R$, $Y$, and $B$ be:
$$\Phi_R = \Phi_m \sin(\omega t)$$
$$\Phi_Y = \Phi_m \sin(\omega t - 120^\circ)$$
$$\Phi_B = \Phi_m \sin(\omega t - 240^\circ)$$

Where $\Phi_m$ is the maximum flux due to any phase. Since the windings are displaced by $120^\circ$ in space, the resultant flux ($\Phi_r$) at any instant is the vector sum of these three fluxes.

We evaluate $\Phi_r$ at four specific instants of time ($\omega t = 0^\circ, 60^\circ, 120^\circ, 180^\circ$):

* **Case 1: At $\omega t = 0^\circ$**
  * $\Phi_R = 0$
  * $\Phi_Y = \Phi_m \sin(-120^\circ) = -\frac{\sqrt{3}}{2}\Phi_m$
  * $\Phi_B = \Phi_m \sin(-240^\circ) = +\frac{\sqrt{3}}{2}\Phi_m$
  
  Since the angle between $\Phi_Y$ and $\Phi_B$ is $60^\circ$ (after reversing $\Phi_Y$ due to negative sign):
  $$\Phi_r = 2 \times \left(\frac{\sqrt{3}}{2}\Phi_m\right) \cos\left(\frac{60^\circ}{2}\right) = \sqrt{3}\Phi_m \times \frac{\sqrt{3}}{2} = \mathbf{1.5\Phi_m}$$
  *(Direction: Vertically upwards / $90^\circ$)*

* **Case 2: At $\omega t = 60^\circ$**
  * $\Phi_R = \Phi_m \sin(60^\circ) = +\frac{\sqrt{3}}{2}\Phi_m$
  * $\Phi_Y = \Phi_m \sin(-60^\circ) = -\frac{\sqrt{3}}{2}\Phi_m$
  * $\Phi_B = \Phi_m \sin(-180^\circ) = 0$
  
  $$\Phi_r = 2 \times \left(\frac{\sqrt{3}}{2}\Phi_m\right) \cos(30^\circ) = \mathbf{1.5\Phi_m}$$
  *(Direction: Rotated by $60^\circ$ clockwise from Case 1)*

* **Case 3: At $\omega t = 120^\circ$**
  * $\Phi_R = \Phi_m \sin(120^\circ) = +\frac{\sqrt{3}}{2}\Phi_m$
  * $\Phi_Y = 0$
  * $\Phi_B = \Phi_m \sin(-120^\circ) = -\frac{\sqrt{3}}{2}\Phi_m$
  
  $$\Phi_r = \mathbf{1.5\Phi_m}$$
  *(Direction: Rotated by $120^\circ$ clockwise from Case 1)*

* **Case 4: At $\omega t = 180^\circ$**
  * $\Phi_R = 0$, $\Phi_Y = +\frac{\sqrt{3}}{2}\Phi_m$, $\Phi_B = -\frac{\sqrt{3}}{2}\Phi_m$
  * $$\Phi_r = \mathbf{1.5\Phi_m}$$
  *(Direction: Rotated by $180^\circ$ clockwise from Case 1)*

> **Diagram Note (Draw in Exam):** Draw the 3-phase sinusoidal waveform at $0^\circ, 60^\circ, 120^\circ, 180^\circ$ along with the corresponding phasor diagrams showing the resultant vector $\Phi_r = 1.5\Phi_m$ rotating by $60^\circ$ at each step.

---

#### **2. Proof of Constant Speed ($N_s$)**

From the cases above, for every $60^\circ$ electrical rotation of the supply current, the resultant magnetic field rotates by $60^\circ$ in space. Therefore, in **1 complete cycle** ($360^\circ$ electrical) of the alternating current, the magnetic field completes **1 revolution** (for a 2-pole machine).

* If supply frequency = $f$ cycles/sec (Hz), then for a 2-pole machine ($P=2$), revolutions per second = $f$.
* For a machine with $P$ poles, the field completes $\frac{2}{P}$ revolutions per cycle.
* Thus, revolutions per second ($n_s$) = $\frac{2f}{P}$.

Converting to Revolutions Per Minute (RPM):
$$N_s = \frac{120f}{P} \text{ rpm}$$

Since both frequency ($f$) and number of poles ($P$) are constant for a given machine and supply, the speed of the rotating magnetic field ($N_s$) is **constant**.

---

#### **Conclusion:**
Hence, a 3-phase supply feeding a 3-phase winding produces a magnetic field of **constant magnitude ($1.5\Phi_m$)** rotating at a **constant synchronous speed ($N_s = \frac{120f}{P}$)**.



## Question: Derive the torque-slip characteristic equation of a 3-phase induction motor and indicate the condition for maximum torque.

### Answer:

#### **1. Derivation of Torque-Slip Equation**

Let,
* $E_2$ = Rotor induced EMF per phase at standstill ($s = 1$)
* $R_2$ = Rotor resistance per phase
* $X_2$ = Rotor standstill reactance per phase
* $s$ = Fractional slip
* $N_s$ = Synchronous speed in rpm ($\omega_s = \frac{2\pi N_s}{60}$ rad/s)

Under running condition at slip $s$:
* Rotor induced EMF per phase = $sE_2$
* Rotor reactance per phase = $sX_2$
* Rotor impedance per phase, $Z_2 = \sqrt{R_2^2 + (sX_2)^2}$

Therefore, **Rotor current per phase ($I_2$):**
$$I_2 = \frac{sE_2}{Z_2} = \frac{sE_2}{\sqrt{R_2^2 + (sX_2)^2}}$$

**Rotor power factor ($\cos\phi_2$):**
$$\cos\phi_2 = \frac{R_2}{Z_2} = \frac{R_2}{\sqrt{R_2^2 + (sX_2)^2}}$$

Now, the **Gross Mechanical Power ($P_m$)** developed per phase is given by:
$$P_m = \text{Rotor Input Power} - \text{Rotor Copper Loss}$$
$$P_m = (sE_2) I_2 \cos\phi_2 \cdot \left(\frac{1-s}{s}\right) = (1-s) E_2 I_2 \cos\phi_2$$

For a **3-phase** induction motor, total gross power developed:
$$P_{m(\text{total})} = 3(1-s) E_2 I_2 \cos\phi_2$$

We know that mechanical power is related to gross torque ($T$) and rotor angular speed ($\omega_r$) by:
$$P_{m(\text{total})} = T \cdot \omega_r = T \cdot \omega_s(1-s)$$

Equating the two expressions for $P_{m(\text{total})}$:
$$T \cdot \omega_s(1-s) = 3(1-s) E_2 I_2 \cos\phi_2$$

$$T = \frac{3}{\omega_s} E_2 I_2 \cos\phi_2$$

Substituting the expressions for $I_2$ and $\cos\phi_2$:
$$T = \frac{3}{\omega_s} E_2 \left(\frac{sE_2}{\sqrt{R_2^2 + (sX_2)^2}}\right) \left(\frac{R_2}{\sqrt{R_2^2 + (sX_2)^2}}\right)$$

$$\mathbf{T = \frac{3}{\omega_s} \cdot \frac{s E_2^2 R_2}{R_2^2 + (sX_2)^2}} \quad \text{N-m}$$

*(Where $K = \frac{3}{\omega_s} = \frac{3 \times 60}{2\pi N_s}$ is a constant for a given motor).*

---

#### **2. Condition for Maximum Torque ($T_{\max}$)**

For a constant supply voltage, $E_2$ and $\omega_s$ are constant. Thus, torque $T$ depends solely on slip $s$. To find the condition for maximum torque, we differentiate $T$ with respect to $s$ and equate to zero ($\frac{dT}{ds} = 0$):

$$\frac{d}{ds} \left[ \frac{s R_2}{R_2^2 + s^2 X_2^2} \right] = 0$$

Applying the quotient rule of differentiation:
$$\frac{(R_2^2 + s^2 X_2^2)(R_2) - (s R_2)(2s X_2^2)}{(R_2^2 + s^2 X_2^2)^2} = 0$$

$$R_2^3 + s^2 R_2 X_2^2 - 2s^2 R_2 X_2^2 = 0$$

$$R_2^3 - s^2 R_2 X_2^2 = 0$$

$$R_2 (R_2^2 - s^2 X_2^2) = 0$$

Since $R_2 \neq 0$:
$$R_2^2 = s^2 X_2^2 \implies \mathbf{R_2 = s X_2}$$

Therefore, the **slip at maximum torque ($s_m$)** is:
$$\mathbf{s_m = \frac{R_2}{X_2}}$$

**Key Condition:** Maximum torque occurs at that value of slip where **rotor resistance per phase equals rotor reactance per phase under running condition ($R_2 = sX_2$)**.

---

#### **3. Torque-Slip Characteristic Curve (Draw in Exam)**

* **Low Slip Region ($s \approx 0$):** $sX_2 \ll R_2$, so $T \propto s$ (Linear straight line).
* **Maximum Torque Point ($s = s_m$):** $R_2 = sX_2$, torque reaches its peak ($T_{\max}$).
* **High Slip Region ($s > s_m$):** $sX_2 \gg R_2$, so $T \propto \frac{1}{s}$ (Rectangular hyperbola).