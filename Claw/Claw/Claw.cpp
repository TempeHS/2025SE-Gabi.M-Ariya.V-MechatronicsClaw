#include "Claw.h"

Claw::Claw(int pin)
{
  this->pin = pin;
}

void Claw::init()
{
  servo.attach(pin);
  pinMode(pin, INPUT_PULLUP);
}
void Claw::grabCube()
{
  Serial.println("Grabbing cube");
  int angle = 90;
  servo.write(angle);
  Serial.println("Claw closed");
}

void Claw::releaseCube()
{
  Serial.println("Releasing cube");
  int angle = 180;
  servo.write(angle);
  Serial.print("Claw open");
}