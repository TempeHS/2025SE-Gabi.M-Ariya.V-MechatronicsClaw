#include "Base.h"

Base::Base(int pin) 
{
  this->pin = pin;
  myServo.attach(pin);
}

void Base::moveLeft() 
{
  // Serial.println("Moving arm Left");
  int angle = 45;
  myServo.write(angle);
}

void Base::moveRight() 
{
  // Serial.println("Moving arm Right");
  int angle_2 = 90;
  myServo.write(angle_2);
}