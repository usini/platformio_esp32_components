#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  Serial.println("Button - https://usini.eu/espress/button.html");
  pinMode(5, OUTPUT); // LOLIN D32
  pinMode(22, OUTPUT); // LOLIN32
  pinMode(2, OUTPUT); // DOIT D32
  pinMode(10, OUTPUT); // M5STICK C
  pinMode(13, INPUT_PULLUP); // ESP32
  pinMode(37, INPUT); // M5STICK C
}

void loop() {
  if(!digitalRead(13)){
    Serial.println("Pressed");
    digitalWrite(5, LOW);
    digitalWrite(2, HIGH);
    digitalWrite(22, LOW);
  } else {
    Serial.println("Not Pressed");
    digitalWrite(5, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(22, LOW);
  }
  if(!digitalRead(37)){
    Serial.println("Pressed");
    digitalWrite(10, LOW);
  } else {
    Serial.println("Not Pressed");
    digitalWrite(10, HIGH);
  }
}
