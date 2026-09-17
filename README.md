# Project Overview

The goal of this project is to develop a PID line follower that performs all computation using operational amplifiers. It is my final project for the Grade 12 TEJ4U0 Introduction to Computer Engineering course. The robot uses photoresistors to sense the reflection values as a voltage. These are passed into a series of operational amplifiers, which add and scale the voltage. The Ardunino Nano converst the analog signal into a PWM signal, which the motor driver uses to set motor speeds.

## Getting Started

Ensure Git is installed and setup to work with the repository

Clone the project repository to your local machine and navigate into the directory:
```
git clone https://github.com/VedantGithub123/Operational-Amplifier-PID-Line-Follower.git
cd Operational-Amplifier-PID-Line-Follower
```

Arduino IDE is needed.

## Repository Structure

The `main` branch is the organized working branch. Below is an overview of the folder structure for the `main` branch of this repository
```
Operational-Amplifier-PID-Line-Follower/
├── electrical/
├── media/
├── report/
├── src/
│   └── run/
│       └── run.ino
└── README.md
```

### Folder Descriptions

`electrical/`: Contains diagrams of the electrical wiring of the robot.

&emsp;&emsp;`schematic.png`: Schematic diagram of wiring and components

`media/`: Contains photos of the robot

`report/`: Contains the final report of the project

`src/`: Contains all source code

&emsp;&emsp;`run`: The Arudino project folder

`README.md`: Project repository documentation

## Design Process

The first thing I needed to do was find a way to read the line. The two options were IR sensors and photoresistors. Since I've never used photoresistors before, I wanted to try them out. However, they have a delay, which is not ideal. Then the operational amplifier circuit was designed by using integrators, differentiators, and inverting adder circuits. Note that inverting adder circuits were used so the voltages could be scaled by a factor less than one. To actually power the motors through the motor driver, we needed a PWM signal. The easiest way was to use and Arduino Nano.

The final robot was able to somewhat line follow a circular line for a short period of time. However, the sensor delay and weak motors limited the performance of the circuit.