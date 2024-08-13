#include "Base.h"

Base::Base(int pin) 
{
  this->pin = pin;
}
void Base::init()
{
  servo.attach(pin);
  pinMode(pin, INPUT_PULLUP);
}
void Base::moveLeft() 
{
  Serial.println("Moving arm Left");
  int angle = 45;
  servo.write(angle);
  Serial.println("Arm at: ");
  Serial.println(angle);
  Serial.println("degrees angle!");
}

void Base::moveRight() 
{
  Serial.println("Moving arm Right");
  int angle_2 = 90;
  servo.write(angle_2);
  Serial.println("Arm at: ");
  Serial.println(angle_2);
  Serial.println("degrees angle!");
}