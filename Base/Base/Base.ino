#include "Base.h"

Base base(11);

Servo myservo;

void setup() {
  Serial.begin(9600);
  base.init();

}

void loop() {
  base.moveLeft();
  delay(1000);
  base.moveRight();
  delay(1000);
}
