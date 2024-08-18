#ifndef MY_SERVO_H
#define MY_SERVO_H

#include <Servo.h>

class MyServo
{
private:
  int pin;
  Servo servo;
public:
  MyServo() {} //do not use
  MyServo(int pin);

  //init the pin for the Servo
  virtual void init();
  virtual void writeValue(int value);

};

#endif