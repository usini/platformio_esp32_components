#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  Serial.println("LED Blink - https://usini.eu/espress/led.html");
  pinMode(5, OUTPUT);
}

void loop() {
  Serial.println("ON");
  digitalWrite(5, HIGH);
  delay(1000);
  Serial.println("OFF");
  digitalWrite(5, LOW);
  delay(1000);
}
