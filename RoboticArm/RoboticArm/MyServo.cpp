#include "MyServo.h"

MyServo::MyServo(byte pin)
{
  this->pin = pin;
}

void MyServo::init()
{
  myServo.attach(pin);
}

void MyServo::writevalue(byte value)
{
  myServo.write(value);
}