#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  delay(1000);
}

void loop() {
  int potValue = analogRead(39);
  Serial.println(potValue);
  Serial.print(">Value: ");
  Serial.println(potValue);

}
