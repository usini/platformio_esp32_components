#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  Serial.println("LED Blink - https://usini.eu/espress/led.html");
  pinMode(5, OUTPUT); // LOLIN D32
  pinMode(22, OUTPUT); // LOLIN32
  pinMode(10, OUTPUT); // M5Stack Stick C
}

void loop() {
  Serial.println("ON");
  digitalWrite(5, HIGH);
  digitalWrite(22, HIGH);
  digitalWrite(10, HIGH);
  delay(1000);
  Serial.println("OFF");
  digitalWrite(5, LOW);
  digitalWrite(22, LOW);
  digitalWrite(10, LOW);
  delay(1000);
}
