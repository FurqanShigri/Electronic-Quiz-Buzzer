# Electronic Quiz Buzzer System using Arduino Uno

## 📌 Project Overview

The **Electronic Quiz Buzzer System** is an Arduino-based project designed for quiz competitions, classrooms, and game shows. It allows up to **4 players** to compete by pressing their individual push buttons. The Arduino detects the **first player** who presses their button, lights up the corresponding LED, sounds a buzzer, and locks all other buttons until the quiz master resets the system.

This project demonstrates digital input handling, output control, and state management using the Arduino Uno.

---

## 🎯 Features

- Supports **4 players**
- Detects the **first button pressed**
- Locks all remaining buttons after a winner is detected
- LED indication for the winning player
- Audible buzzer notification
- Reset button to start the next round
- Simple and beginner-friendly Arduino project

---

## 🛠 Components Required

| Component | Quantity |
|-----------|---------:|
| Arduino Uno | 1 |
| Push Buttons (Players) | 4 |
| Push Button (Reset) | 1 |
| LEDs (Different Colors) | 4 |
| 220Ω Resistors | 4 |
| Active Buzzer | 1 |
| Breadboard | 1 |
| Jumper Wires | As Required |

---

## 🔌 Circuit Connections

### Player Buttons

| Player | Arduino Pin |
|---------|------------|
| Player 1 Button | D2 |
| Player 2 Button | D3 |
| Player 3 Button | D4 |
| Player 4 Button | D5 |

Each button:
- One terminal → Arduino Digital Pin
- Other terminal → GND

> **Note:** The code uses `INPUT_PULLUP`, so no external pull-up resistor is required.

---

### Reset Button

| Component | Arduino Pin |
|-----------|------------|
| Reset Button | D6 |

One terminal → D6

Other terminal → GND

---

### LEDs

| LED | Arduino Pin |
|-----|------------|
| Player 1 LED | D8 |
| Player 2 LED | D9 |
| Player 3 LED | D10 |
| Player 4 LED | D11 |

LED Connection:

Arduino Pin → 220Ω Resistor → LED (+)

LED (-) → GND

---

### Buzzer

| Component | Arduino Pin |
|-----------|------------|
| Active Buzzer (+) | D12 |
| Active Buzzer (-) | GND |

---

## ⚙ Working Principle

1. The Arduino continuously monitors all four player buttons.
2. The first player to press their button is declared the winner.
3. The corresponding LED turns ON.
4. The buzzer sounds to indicate a valid response.
5. The system locks all other buttons.
6. Other players cannot buzz until the quiz master presses the Reset button.
7. Pressing the Reset button clears the LEDs and unlocks the system for the next question.

---

## ▶ Example

### Question

**"What is the capital of Pakistan?"**

All players try to answer.

Suppose **Player 3** presses first.

Result:

- Player 3 LED turns ON.
- Buzzer beeps.
- Players 1, 2, and 4 are locked.
- Reset button must be pressed before the next question.

---

## 📋 Pin Configuration

| Arduino Pin | Component |
|-------------|-----------|
| D2 | Player 1 Button |
| D3 | Player 2 Button |
| D4 | Player 3 Button |
| D5 | Player 4 Button |
| D6 | Reset Button |
| D8 | Player 1 LED |
| D9 | Player 2 LED |
| D10 | Player 3 LED |
| D11 | Player 4 LED |
| D12 | Buzzer |

---

## 💻 Software Required

- Arduino IDE
- Cirkit Designer (Optional)
- Tinkercad Circuits (Optional)

---

## 📂 Project Structure

```
Electronic-Quiz-Buzzer/
│
├── README.md
├── Electronic_Quiz_Buzzer.ino
├── circuit_diagram.png
├── project_simulation_link.txt
└── images/
```

---

## 🚀 Future Improvements

- Add a 16×2 LCD to display the winning player.
- Add an OLED display.
- Store player scores using EEPROM.
- Add a countdown timer.
- Use interrupts for faster button detection.
- Add wireless buzzers using Bluetooth or NRF24L01 modules.

---

## 📚 Learning Outcomes

By completing this project, you will learn:

- Arduino digital input
- Digital output control
- Push button interfacing
- LED interfacing
- Active buzzer control
- State management
- Locking and unlocking logic
- Arduino programming fundamentals

---

## 🎓 Applications

- School quiz competitions
- College technical events
- Classroom activities
- Science exhibitions
- Arduino learning projects
- Game shows
- Educational demonstrations

---

## 👨‍💻 Author

Developed using **Arduino Uno** as a beginner-friendly electronics and embedded systems project.

---
**Happy Building! 🚀**