#ifndef MY_SERVO_H
#define MY_SERVO_H

#include <Servo.h>
#include <Arduino.h>

class MyServo
{
protected:
  byte pin;
  Servo myServo;
public:
  MyServo() {} //do not use
  MyServo(byte pin);

  //init the pin for the Servo
  void init();
  void writevalue(byte value);

};

#endif