#include "Wrist.h"

Wrist::Wrist(int pin)
{
  this->pin = pin;
}

void Wrist::init()
{
  servo.attach(pin);
  pinMode(pin, INPUT_PULLUP);
}

void Wrist::moveUp()
{
  Serial.println("Moving wrist up");
  int angle = 45;
  servo.write(angle);
  Serial.println("Wrist at:");
  Serial.println(angle);
}

void Wrist::moveDown()
{
  Serial.println("Moving wrist down");
  int angle_2 = 90;
  servo.write(angle_2);
  Serial.println("Arm at: ");
  Serial.println(angle_2);
}

