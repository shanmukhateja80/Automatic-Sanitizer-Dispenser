Automatic Sanitizer Dispenser

1.Overview

This project demonstrates a touchless, automatic sanitizer dispenser created during the COVID-19 pandemic (June 2020). The dispenser uses an ultrasonic sensor and custom-built PCB to spray sanitizer when a hand is detected near the nozzle. The device was designed to reduce contact, ensuring hygiene.

---

2.Features

- Touchless Operation: Uses an ultrasonic sensor to detect hands.
- Custom-Built PCB: Reduced costs compared to using an Arduino board.
- High-Performance Components: Supports a 24V DC pump and solenoid valve for effective sanitizer dispensing.

---

3.How It Works

1. Detection: The ultrasonic sensor detects a hand placed near the nozzle.
2. Activation: Once detected, the PCB activates the relay, powering the pump and solenoid.
3. Dispensing: The sanitizer is sprayed from the nozzle for 5 seconds.
4. Reset: The circuit resets, ready for the next use.

---

4.Components Used

1. Custom PCB:

   - Designed with ports for:
     - 24V adapter input (+, -).
     - Pump terminals (+, -).
     - Solenoid terminals (+, -).
   - Includes relay, LEDs, and IC for control logic.

2. Ultrasonic Sensor (HC-SR04):

   - For hand detection.

3. Relay Module:

   - To control the pump and solenoid.

4. 24V DC Pump:

   - For dispensing sanitizer.

5. Solenoid Valve:

   - To control liquid flow.

---

5.Project History

- Initially tested using Arduino for circuit logic.
- Transitioned to a custom-built PCB to lower costs and improve scalability.
- Gifted the first working model to Sri Viswa IIT and Medical Academy.

---

 Setup and Usage
 Using Arduino (Initial Testing)

1. Connections:

   - Connect the ultrasonic sensor to Arduino pins:
     - VCC -> 5V pin.
     - GND -> GND.
     - Trig -> Digital Pin (e.g., D9).
     - Echo -> Digital Pin (e.g., D10).
   - Connect the relay signal pin to a digital output pin (e.g., D8).
   - Connect the pump and solenoid to the relay output terminals.
   - Power the circuit with an external 24V DC adapter.

2. Code:

   - Upload the Arduino sketch to the microcontroller.
   - Ensure the timing and distance thresholds match your requirements.


6.Using Custom PCB

1. Connect Components:

   - Attach the pump and solenoid to their respective terminals on the PCB.
   - Connect the ultrasonic sensor to its designated port.
   - Supply 24V DC power to the adapter ports.

2. Activate:

   - Power on the circuit and test by placing your hand near the nozzle.

3. Calibration:

   - Adjust the PCB’s potentiometers if needed for sensitivity or timing.

---

7.Project Media

- [3-Second Working Video](./Media/working_video.mp4)

- Photos:

  - [PCB Design](./Hardware/PCB_Design/PCB_Image.jpg)
  - [Gifted to College](./Media/gifted_photos/gifting_photo1.jpg)

---

8.Future Improvements

- Add support for battery power.
- Optimize PCB design for mass production.

---

 License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

