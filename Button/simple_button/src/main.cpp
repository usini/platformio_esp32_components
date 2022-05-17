#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  Serial.println("Button - https://usini.eu/espress/button.html");
  pinMode(5, OUTPUT);
  pinMode(13, INPUT_PULLUP);
}

void loop() {
  if(!digitalRead(13)){
    Serial.println("Pressed");
    digitalWrite(5, LOW);
  } else {
    Serial.println("Not Pressed");
    digitalWrite(5, HIGH);
  }
}
