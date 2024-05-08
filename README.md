# Smart-home-4-line
Smart-home-by-Bluetooth
Arduino project Smart Home Control via Bluetooth . This innovative system utilizes a Bluetooth connection for wireless control of home lighting and fans. Designed for easy interaction, it supports both direct command inputs and voice commands for a hands-free experience. video link⬇️ 



This Arduino sketch provides a way to control lights and a fan using both Bluetooth and serial voice commands. The code sets up a simple home automation system where devices (a light and a fan) can be turned on or off based on commands received over Bluetooth or through voice input via a serial connection. Here's a breakdown of how it works:

Setup: The setup() function initializes serial communication at 9600 bps for both the USB and the Bluetooth connections. It also configures the relay control pins for the light and fan as outputs and initially sets them to HIGH (typically off for a relay).

Bluetooth Command Processing: The loop() function checks for data availability on the Bluetooth serial port. If a command is available, it reads a single character and matches it to predefined commands ('1' for light on, '2' for light off, etc.). Based on the command, it controls the relays connected to the light and the fan and sends a confirmation message back over Bluetooth.


Here's the explanation of the code you provided:

The code is an Arduino sketch that enables the control of lights and a fan via Bluetooth and voice commands. Let's break it down:


Hardware Components:

Arduino board (e.g., Arduino Uno)
Bluetooth module (HC-05 or HC-06)
Relays for controlling the light and fan
Light source (e.g., LED bulb)
Fan motor
Jumper wires and breadboard (if necessary).
