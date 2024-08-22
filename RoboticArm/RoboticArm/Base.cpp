#include "Base.h"
#include "MyServo.h"

MyServo baseServo;

Base::Base(byte pin) 
{
  this->pin = pin;
}

void Base::moveLeft() 
{
  baseServo.writevalue(100);
}

void Base::moveRight() 
{
  baseServo.writevalue(50);
}