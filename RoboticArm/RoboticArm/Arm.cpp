#include "Arm.h"

MyServo armServo; 

Arm::Arm(byte pin)
{
  this->pin = pin;
}

void Arm::moveUp()
{
  armServo.writevalue(160);
}

void Arm::moveDown()
{
  armServo.writevalue(60);
}