# Proportional-Control-System-for-Prosthetic-Grip-Stimulation-
Just using a potentiometer to mimic muscle signals, if i twist one way, server motor moves 90 degrees (similar to contraction) and if i twist the other way, the server motor goes backwards 90 degrees (similar to flexion).

# Arduino Prosthetic Grip Simulator

## Overview
This project simulates a basic prosthetic hand control using an Arduino, a potentiometer, and a servo motor. Turning the potentiometer moves the servo proportionally, mimicking how a myoelectric prosthetic interprets muscle signals to control grip (There are two sets of code, one is a rough version whereas other is more refined).

---

## Components

- Arduino Uno (or Nano)  
- Small hobby servo motor  
- Potentiometer (10kΩ)  
- Breadboard & 9 jumper wires

Logic / How It Works

1. **Read Input**  
   - Arduino reads voltage from potentiometer (analog pin A0) → value 0–1023.  

2. **Optional Input Smoothing**  
   - Small jitters from the potentiometer are smoothed using a moving average filter.  

3. **Convert to Output Range**  
   - Map analog value (0–1023) to servo angle (0–180°) using `map()` function.  

4. **Safety / Limits**  
   - Servo angles are clamped to avoid mechanical stress.  

5. **Actuate Servo**  
   - Servo moves to the target angle using `myservo.write(angle)`.  
