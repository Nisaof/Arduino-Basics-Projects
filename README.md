# Arduino Basics 🚀

> A collection of beginner-friendly Arduino projects ordered from **easy to advanced**.  
> Each folder contains a simple `.ino` example demonstrating a core Arduino concept.

[![Arduino](https://img.shields.io/badge/Arduino-UNO-00979D?style=flat&logo=arduino&logoColor=white)](https://www.arduino.cc/)
[![License](https://img.shields.io/badge/License-MIT-blue.svg)](LICENSE)

---

## 📋 Table of Contents

- [Overview](#-overview)
- [Project Structure](#-project-structure)
- [Learning Path](#-learning-path)
- [Requirements](#️-requirements)
- [Getting Started](#-getting-started)
- [Projects](#-projects)
  - [Digital Outputs](#digital-outputs)
  - [Digital Inputs](#digital-inputs)
  - [Analog I/O](#analog-io)
  - [Advanced Concepts](#advanced-concepts)
- [Contributing](#-contributing)
- [License](#-license)

---

## 🎯 Overview

This repository is designed to help beginners gradually learn the core fundamentals of Arduino programming and electronics through small, focused examples. Each project builds upon previous concepts, making it easy to progress from basic LED blinking to more complex sensor interactions and motor control.

**Key Features:**
- ✅ Progressive difficulty from beginner to intermediate
- ✅ Well-commented code for easy understanding
- ✅ Focused examples demonstrating single concepts
- ✅ Ready-to-upload `.ino` files
- ✅ Practical real-world applications

---

## 📁 Project Structure

```
Arduino Basics/
├── 01-BuiltinLED-Blink/
├── 02-SerialPrint/
├── 03-MultipleLED-Blink/
├── 04-SequentialLEDs/
├── 05-Button-ControlLEDs/
├── 06-Button-ConditionalLEDs/
├── 07-TwoButton-StartStopLEDs/
├── 08-Button-IncreaseDecrease/
├── 09-PWM-LedBrightness/
├── 10-Potentiometer-Read/
├── 11-Potentiometer-LEDBarGraph/
├── 12-LDR-BrightnessControl/
└── 13-Servo-Sweep/
```

---

## 🗺️ Learning Path

### **Beginner Level** (Projects 01-04)
Learn the basics of digital output and program structure.

### **Intermediate Level** (Projects 05-09)
Master digital inputs, conditional logic, and PWM control.

### **Advanced Level** (Projects 10-13)
Explore analog I/O, sensors, and motor control.

---

## 🛠️ Requirements

### Hardware
- **Arduino UNO** (or compatible board)
- **USB Cable** (A to B for UNO)
- **Breadboard** (recommended)
- **Jumper Wires**

### Components
- **LEDs** (5mm, various colors) × 4-5
- **Resistors** (220Ω for LEDs, 10kΩ for pull-up)
- **Push Buttons** × 2-3
- **Potentiometer** (10kΩ)
- **LDR (Light Dependent Resistor)** + 10kΩ resistor
- **Servo Motor** (SG90 or compatible)

### Software
- **Arduino IDE** ([Download here](https://www.arduino.cc/en/software))
- **Arduino Servo Library** (included with Arduino IDE)

---

## 🚀 Getting Started

1. **Install Arduino IDE**
   - Download and install from [arduino.cc](https://www.arduino.cc/en/software)
   - Install necessary board drivers if needed

2. **Clone or Download this Repository**
   ```bash
   git clone https://github.com/yourusername/Arduino-Basics-Projects.git
   ```

3. **Open a Project**
   - Navigate to any project folder
   - Open the `.ino` file in Arduino IDE

4. **Connect Your Arduino**
   - Connect Arduino UNO to your computer via USB
   - Select the correct board: `Tools > Board > Arduino Uno`
   - Select the correct port: `Tools > Port > [Your Port]`

5. **Upload and Test**
   - Click the Upload button (→) in Arduino IDE
   - Follow the wiring instructions in each project's comments
   - Observe the results!

---

## 📚 Projects

### Digital Outputs

#### 01. Built-in LED Blink 
**Difficulty:** ⭐ Beginner  
**Concepts:** `pinMode()`, `digitalWrite()`, `delay()`, Built-in LED  
**Description:** Your first Arduino program! Blinks the built-in LED on pin 13 with customizable timing. Learn the basic structure of Arduino programs and digital output control.

#### 02. Serial Print 
**Difficulty:** ⭐ Beginner  
**Concepts:** `Serial.begin()`, `Serial.print()`, `Serial.println()`, Serial Monitor  
**Description:** Learn how to communicate with your computer through the Serial Monitor. Essential for debugging and displaying sensor values.

#### 03. Multiple LED Blink 
**Difficulty:** ⭐ Beginner  
**Concepts:** Multiple pin control, loops, arrays  
**Description:** Control multiple LEDs simultaneously. Introduces efficient code patterns for managing multiple outputs.

#### 04. Sequential LEDs 
**Difficulty:** ⭐⭐ Beginner-Intermediate  
**Concepts:** Sequential control, timing, visual effects  
**Description:** Create a chasing light effect by turning LEDs on and off in sequence. Great for understanding program flow and timing.

---

### Digital Inputs

#### 05. Button Control LEDs 
**Difficulty:** ⭐⭐ Intermediate  
**Concepts:** `digitalRead()`, button input, conditional statements  
**Description:** Control LEDs with a push button. Learn how to read digital inputs and respond to user interaction.

#### 06. Button Conditional LEDs 
**Difficulty:** ⭐⭐ Intermediate  
**Concepts:** Conditional logic, if-else statements, button states  
**Description:** Implement conditional LED control based on button state. Introduces decision-making in code.

#### 07. Two Button Start/Stop 🎮
**Difficulty:** ⭐⭐⭐ Intermediate  
**Concepts:** Multiple inputs, state management, start/stop logic  
**Description:** Use two buttons to start and stop LED sequences. Learn to manage multiple inputs and program states.

#### 08. Button Increase/Decrease 
**Difficulty:** ⭐⭐⭐ Intermediate  
**Concepts:** Increment/decrement, variable manipulation, edge detection  
**Description:** Increase or decrease LED brightness or count using two buttons. Introduces variable manipulation and button edge detection.

---

### Analog I/O

#### 09. PWM LED Brightness 
**Difficulty:** ⭐⭐ Intermediate  
**Concepts:** PWM (Pulse Width Modulation), `analogWrite()`, brightness control  
**Description:** Control LED brightness using PWM. Learn how to create analog-like output from digital pins.

#### 10. Potentiometer Read 
**Difficulty:** ⭐⭐ Intermediate  
**Concepts:** `analogRead()`, ADC (Analog-to-Digital Converter), voltage calculation  
**Description:** Read analog values from a potentiometer and convert them to voltage. Essential for understanding analog inputs.

#### 11. Potentiometer LED Bar Graph 
**Difficulty:** ⭐⭐⭐ Intermediate-Advanced  
**Concepts:** Analog input mapping, multiple outputs, visual feedback  
**Description:** Create a visual bar graph using LEDs that responds to potentiometer position. Combines analog input with multiple digital outputs.

#### 12. LDR Brightness Control 
**Difficulty:** ⭐⭐⭐ Intermediate-Advanced  
**Concepts:** Light sensing, threshold detection, automatic control  
**Description:** Automatically control LEDs based on ambient light using an LDR sensor. Introduces sensor-based automation.

---

### Advanced Concepts

#### 13. Servo Sweep 🎯
**Difficulty:** ⭐⭐⭐ Advanced  
**Concepts:** Servo library, motor control, angle manipulation  
**Description:** Control a servo motor to sweep back and forth. Learn how to use libraries and control motors for physical movement.

---

## 💡 Tips for Learning

- **Start from the beginning** - Projects are designed to build on each other
- **Read the comments** - Each code file includes detailed explanations
- **Experiment** - Try modifying delays, pin numbers, and logic
- **Use Serial Monitor** - Print values to understand what's happening
- **Check your wiring** - Most issues come from incorrect connections
- **Take notes** - Document what you learn from each project

---

## 🔧 Troubleshooting

| Problem | Solution |
|---------|----------|
| Code won't upload | Check board and port selection in Arduino IDE |
| LEDs don't light up | Verify wiring and resistor values (220Ω recommended) |
| Button not working | Check for pull-up/pull-down resistor configuration |
| Servo not moving | Ensure proper power supply and correct pin connection |
| Serial Monitor shows gibberish | Verify baud rate matches `Serial.begin()` value |

---

## 🤝 Contributing

Contributions are welcome! If you'd like to improve this repository:

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

**Ideas for contributions:**
- Add more projects
- Improve code comments
- Add wiring diagrams
- Fix bugs or improve code quality
- Translate documentation

---

## 📝 Notes

- Each project can be uploaded directly to the Arduino UNO
- The code inside each folder includes comments that explain the logic
- Projects are tested on Arduino UNO but should work on compatible boards
- Always double-check your wiring before uploading code
- Use appropriate resistors to protect components

---







