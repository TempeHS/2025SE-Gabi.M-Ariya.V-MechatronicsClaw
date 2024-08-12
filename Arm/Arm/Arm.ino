#include "Arm.h"

Arm arm(12);

void setup() {
  Serial.begin(9600);
  arm.init();
}

void loop() {
  arm.moveUp();
  delay(1000);
  arm.moveDown();
  delay(1000);
}
