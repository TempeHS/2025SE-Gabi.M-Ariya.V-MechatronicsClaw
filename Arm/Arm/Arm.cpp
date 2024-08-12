#include "Arm.h"

Arm::Arm(int pin)
{
  this->pin = pin;
}

void Arm::init()
{
  servo.attach(pin);
  pinMode(pin, INPUT_PULLUP);
}
void Arm::moveUp()
{
  Serial.println("Moving arm up");
  int angle = 45;
  servo.write(angle);
  Serial.println("Arm at: ");
  Serial.println(angle);
  Serial.println("degrees angle!");
}

void Arm::moveDown()
{
  Serial.println("Moving arm down");
  int angle_2 = 90;
  servo.write(angle_2);
  Serial.println("Arm at: ");
  Serial.println(angle_2);
  Serial.println("degrees angle!");
}