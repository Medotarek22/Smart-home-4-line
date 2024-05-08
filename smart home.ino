#include <SoftwareSerial.h>

const int bluetoothTx = 2;
const int bluetoothRx = 3;
const int relayLight1 = 6;
const int relayLight2 = 7;
const int relayLight3 = 8;
const int relayLight4 = 9;

SoftwareSerial bluetooth(bluetoothTx, bluetoothRx);

void setup() {
  Serial.begin(9600);
  bluetooth.begin(9600);
  pinMode(relayLight1, OUTPUT);
  pinMode(relayLight2, OUTPUT);
  pinMode(relayLight3, OUTPUT);
  pinMode(relayLight4, OUTPUT);
  digitalWrite(relayLight1, HIGH);
  digitalWrite(relayLight2, HIGH);
  digitalWrite(relayLight3, HIGH);
  digitalWrite(relayLight4, HIGH);
}

void loop() {
  if (bluetooth.available()) {
    char command = bluetooth.read();

    if (command == '1') {
      digitalWrite(relayLight1, HIGH);
    } else if (command == '2') {
      digitalWrite(relayLight1, LOW);
    } else if (command == '3') {
      digitalWrite(relayLight2, HIGH);
    } else if (command == '4') {
      digitalWrite(relayLight2, LOW);
    } else if (command == '5') {
      digitalWrite(relayLight3, HIGH);
    } else if (command == '6') {
      digitalWrite(relayLight3, LOW);
    } else if (command == '7') {
      digitalWrite(relayLight4, HIGH);
    } else if (command == '8') {
      digitalWrite(relayLight4, LOW);
    } else if (command == '9') {
      digitalWrite(relayLight1, LOW);
      digitalWrite(relayLight2, LOW);
      digitalWrite(relayLight3, LOW);
      digitalWrite(relayLight4, LOW);
    } else if (command == '0') {
      digitalWrite(relayLight1, HIGH);
      digitalWrite(relayLight2, HIGH);
      digitalWrite(relayLight3, HIGH);
      digitalWrite(relayLight4, HIGH);
    }
  }

 
}