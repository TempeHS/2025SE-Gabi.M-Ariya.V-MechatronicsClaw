#include "MyServo.h"

MyServo::MyServo(int pin) : pin(pin) {}

void MyServo::init()
{
  myServo.attach(pin);
}

void MyServo::writeValue(int value)
{
  myServo.write(value);
}