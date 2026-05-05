# 🧠 Neuromorphic-Inspired Decision-Making System

## 📌 Overview
This project implements a **neuromorphic-inspired decision-making system** using an ESP32-S3 microcontroller.  
It mimics brain-like behavior by modeling **spiking neurons, stochastic inputs, and competitive neural dynamics** instead of traditional rule-based logic.

Unlike deterministic systems, this model introduces **uncertainty, temporal behavior, and competition**, similar to biological neural systems.

---

## 🎯 Objective
The goal of this project is to:
- Simulate **brain-like decision making**
- Demonstrate **neuromorphic computing principles**
- Build a **hardware + software hybrid neural system**
- Show how **uncertainty affects decisions**

---

## ⚙️ Key Features
- 🧠 Software-based spiking neuron model  
- ⚡ Winner-Take-All (WTA) neural competition  
- 🌫️ Stochastic noise injection  
- 🔌 IR-based environmental sensing  
- 🔄 Dynamic, non-deterministic decision switching  
- 💡 Dual LED outputs representing neuron firing  
- ⚙️ Hybrid hardware influence (transistor + RC behavior)  

---

## 🧠 Working Principle

The system is based on the **Leaky Integrate-and-Fire (LIF) neuron model**:

- Sensor inputs act as **stimulus signals**
- Neurons accumulate input over time (integration)
- A decay factor simulates **leaky memory**
- Random noise introduces **uncertainty**
- Neurons compete via **winner-take-all mechanism**
- The neuron with higher activation suppresses the other
- The dominant neuron triggers its corresponding LED

This behavior mimics **biological neural competition and decision making**.

---

## 🔌 Hardware Components

- ESP32-S3 Development Board  
- IR Sensor  
- 2 × LEDs  
- Transistor  
- Resistors  
- Capacitor  
- Breadboard  
- Jumper wires  

---

## ⚙️ Role of Each Component

### 🔴 IR Sensor
- Detects object presence  
- Acts as **primary sensory input**  
- Provides stimulus to neurons  

---

### 💡 LEDs
- Represent neuron outputs  
- LED1 → Neuron 1 firing  
- LED2 → Neuron 2 firing  
- Visualizes decision-making process  

---

### 🔌 Resistors
Used for:
- Limiting current to LEDs (prevent damage)  
- Stabilizing signals in transistor circuit  
- Ensuring proper voltage levels  

👉 Without resistors:
- LEDs may burn  
- signals become unstable  

---

### ⚡ Capacitor
Used for:
- Creating **temporal behavior (RC effect)**  
- Introducing slight delay / smoothing  
- Mimicking **neuron membrane charging**

👉 Acts like:
> short-term memory element in hardware  

---

### 🔀 Transistor
Used as:
- Signal modulator / switch  
- Adds **hardware-based variation/noise**  
- Influences neuron activation indirectly  

👉 Acts like:
> artificial synapse / signal amplifier  

---

## 🔧 Pin Configuration

| Component      | GPIO Pin |
|---------------|---------|
| IR Sensor     | GPIO 6  |
| Transistor    | GPIO 10 |
| LED 1         | GPIO 2  |
| LED 2         | GPIO 4  |

---

## 🎥 Project Demonstration

👉 [Watch Demo Video](https://drive.google.com/file/d/1dnMhR4fSHv9399pQDcfpmmPNJGRW1REK/view?usp=drivesdk)

---

## 🧠 System Behavior

- No input → system stays inactive  
- IR trigger → neurons accumulate signals  
- Noise adds unpredictability  
- Neurons compete dynamically  
- One neuron dominates → LED ON  
- System switches over time → brain-like activity  

---

## 🧪 Observations

- System shows **non-linear behavior**
- Output is **not fixed for same input**
- Noise influences decision outcomes
- Competition leads to **alternating dominance**
- Demonstrates **probabilistic computing**

---

## 🚀 Applications

- 🤖 Autonomous robotics decision systems  
- 🧠 Neuromorphic computing research  
- 🚨 Smart sensing & alert systems  
- 🌐 Edge AI devices  
- 🎓 Educational neural modeling tool  
- 🎮 Adaptive game AI systems  

---

## ✅ Result

- Successfully implemented **neuromorphic-inspired computation**
- Achieved **dynamic decision-making behavior**
- Demonstrated **winner-take-all neural competition**
- Simulated **brain-like stochastic processing**
- Combined **hardware + software neural modeling**

---

## 🔮 Future Scope

- Add **learning mechanism (adaptive weights)**
- Expand to **multi-neuron network**
- Implement **spike-timing-based learning (STDP)**
- Integrate **IoT dashboard for visualization**
- Develop **real-time neural signal graphs**
- Apply to **real-world AI decision systems**

---

## 🧠 Key Concepts Used

- Neuromorphic Computing  
- Leaky Integrate-and-Fire Neurons  
- Stochastic Systems  
- Winner-Take-All Networks  
- Embedded Systems (ESP32)  
- Hybrid Hardware-Software Design  

---

## 👨‍💻 Author

**Tharun S**

---

## ⭐ If you like this project

Give it a ⭐ on GitHub!
