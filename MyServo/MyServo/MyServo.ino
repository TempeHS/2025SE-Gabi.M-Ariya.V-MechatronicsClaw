//include servo library
#include <Servo.h>
#include "MyServo.h"

#define MYSERVO__PIN 9

Servo MyServo;

void setup() {
  //pin no., min, max
  MyServo.attach(9, 700, 2300);
}

void loop() {
  //set servo to 0 degrees
  MyServo.write(0);
  delay(1000);
  //move servo to 90 degrees
  MyServo.write(90);
  delay(1000);
  //move servo to 180 degrees
  MyServo.write(180);
  delay(1000);

}
