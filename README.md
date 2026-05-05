# 🧠 Neuromorphic-Inspired Decision-Making System

## 📌 Overview
This project implements a **neuromorphic-inspired decision-making system** using an ESP32 microcontroller.  
It mimics brain-like behavior using **spiking neurons, stochastic inputs, and competitive dynamics** instead of traditional logic-based processing.

---

## ⚙️ Key Features
- 🧠 Spiking neural model (software-based)
- ⚡ Winner-Take-All neuron competition
- 🌫️ Random noise for uncertainty handling
- 🔌 IR sensor input (environment sensing)
- 🔄 Dynamic decision switching (non-deterministic behavior)
- 💡 Dual LED output representing neuron firing

---

## 🧠 Working Principle

The system follows a **Leaky Integrate-and-Fire (LIF) neuron model**:

- Inputs from sensors are converted into neuron signals  
- Neurons accumulate signals over time  
- A decay factor simulates memory loss  
- Random noise introduces uncertainty  
- Neurons compete using **winner-take-all logic**  
- The dominant neuron activates its corresponding LED  

---

## 🔌 Hardware Components

- ESP32-S3 Development Board  
- IR Sensor  
- 2 × LEDs  
- Transistor (for additional input influence)  
- Breadboard & connecting wires  

---

## 🔧 Pin Configuration

| Component      | GPIO Pin |
|---------------|---------|
| IR Sensor     | GPIO 6  |
| Transistor    | GPIO 10 |
| LED 1         | GPIO 2  |
| LED 2         | GPIO 4  |

---

## 📷 Project Images

![Setup](setup.jpg)
![Circuit](circuit.jpg)
![Working](working.jpg)

---

## 🎥 Project Demonstration

👉 [Watch Demo Video](PASTE_YOUR_DRIVE_LINK_HERE)

---

## 🧠 System Behavior

- When input is low → system remains inactive  
- When stimulated → neurons accumulate signals  
- Random noise creates unpredictable behavior  
- One neuron dominates → corresponding LED turns ON  
- System continuously switches → simulating brain-like decisions  

---

## 🚀 Applications

- 🤖 Smart robotics decision systems  
- 🧠 Neuromorphic computing research  
- 🚨 Intelligent sensing and alert systems  
- 🌐 Edge AI / IoT decision nodes  
- 🎓 Educational demonstration of neural models  

---

## ✅ Result

- Successfully implemented a **neuromorphic-inspired model**
- Achieved **dynamic and non-deterministic decision making**
- Demonstrated **real-time neuron competition using LEDs**
- Simulated brain-like behavior on embedded hardware  

---

## 🔮 Future Scope

- Add learning mechanism (adaptive weights)  
- Expand to multi-neuron networks  
- Integrate full IoT dashboard  
- Implement real spike-based visualization  
- Apply to real-world decision systems  

---

## 👨‍💻 Author

**Tharun S**

---

## ⭐ If you like this project

Give it a ⭐ on GitHub!

## 🎥 Project Demonstration

👉 [Watch Demo Video]
(https://drive.google.com/file/d/1dnMhR4fSHv9399pQDcfpmmPNJGRW1REK/view?usp=drivesdk)
