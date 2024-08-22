#include "Claw.h"
#include "MyServo.h"

MyServo clawServo;

Claw::Claw(byte pin)
{
  this->pin = pin;
}

void Claw::open()
{
  clawServo.writevalue(100);
}

void Claw::close()
{
  clawServo.writevalue(175);
}