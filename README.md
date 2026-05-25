# Smart Distance Warning System 🚗📏

An Arduino-based smart distance warning system using the HC-SR04 ultrasonic sensor, LCD display, buzzer, and LED for real-time obstacle detection and alerts.

---

1) 📌 Features

- Real-time distance measurement
- LCD display output
- Buzzer warning system
- LED obstacle indicator
- Adjustable warning based on distance
- Simple and low-cost embedded project

---

2) 🛠️ Components Used

- Arduino UNO
- HC-SR04 Ultrasonic Sensor
- 16x2 I2C LCD Display
- Buzzer
- LED
- 220Ω Resistor
- Breadboard
- Jumper Wires

---

3) ⚙️ Working Principle

1. Ultrasonic sensor sends sound waves.
2. Waves reflect back after hitting an object.
3. Arduino calculates distance using echo time.
4. Distance is displayed on LCD.
5. Buzzer and LED activate when object comes close.

---

4) 📐 Distance Formula

Distance = (Speed × Time) / 2

The division by 2 is used because the sound wave travels to the object and back.

---

5) 🔌 Pin Connections

| Component | Arduino Pin |
|----------|-------------|
| TRIG | D9 |
| ECHO | D10 |
| BUZZER | D8 |
| LED | D7 |
| LCD SDA | A4 |
| LCD SCL | A5 |

---

6) 💻 Technologies Used

- Embedded C / Arduino
- I2C Communication
- Sensor Interfacing
- Serial Communication

---

7) 🚀 Future Improvements

- Bluetooth connectivity
- OLED display support
- Battery-powered version
- STM32 implementation
- Mobile app integration

---

8) 📷 Project Preview

<img width="1600" height="722" alt="image" src="https://github.com/user-attachments/assets/248c4143-b57a-4505-8aa8-ba4ee71f7418" />
<img width="1600" height="722" alt="image" src="https://github.com/user-attachments/assets/1a7dd0d3-beb8-4cbc-aa56-9f3504c17cf1" />
<img width="1600" height="722" alt="image" src="https://github.com/user-attachments/assets/17a1c2b9-d582-400c-af20-b570a2e530e1" />

---

9) 📚 Learning Outcomes

This project helped in understanding:

- Embedded system fundamentals
- Sensor interfacing
- LCD communication using I2C
- Real-time hardware interaction
- Git and GitHub workflow

---

 👨‍💻 Author
 Mohammad Yusuf Naaz

Yusuf Naaz

