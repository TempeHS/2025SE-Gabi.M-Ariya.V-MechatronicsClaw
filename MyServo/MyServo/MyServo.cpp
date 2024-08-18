#include "MyServo.h"

MyServo::MyServo(int pin)
{
  this->pin = pin;
}

void MyServo::init()
{
  servo.attach(pin);
}

void MyServo::writeValue(int value)
{
  servo.write(value);
}