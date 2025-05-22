# Smart Ultrasonic Humidifier (Wokwi Simulation)

This repository contains a simulation of a Smart Ultrasonic Humidifier designed using an **ATmega328P microcontroller**. The humidifier can be controlled both **manually via a push button** and **remotely via Bluetooth** (conceptually simulated). A **relay module** is used to switch the humidifier ON/OFF. The simulation is built using [Wokwi](https://wokwi.com).

---

## 🚀 Features

- Manual ON/OFF control via push button  
- Remote ON/OFF concept using UART (Bluetooth simulation substitute)  
- Status indication via onboard LED  
- Relay switching to control external load (humidifier)
- Simulation ready and easy to test in Wokwi

---

## 🔧 Components Used

| Component              | Description                          |
|------------------------|--------------------------------------|
| ATmega328P             | Main microcontroller unit            |
| Relay Module           | Controls the ultrasonic humidifier   |
| Push Button            | Manual control input                 |
| LED                    | Status indicator                     |
| Resistors & Capacitors | Debouncing and pull-up configuration |
| UART Interface         | Simulates Bluetooth control in Wokwi |

---

## 📂 File Structure

