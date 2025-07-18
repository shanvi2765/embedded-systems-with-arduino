#include <Servo.h>

Servo myServo;

int angle;

void setup()
{
  myServo.attach(9);
}

void loop()
{
  for (angle = 0; angle <= 180; angle++){
    myServo.write(angle);
    delay(20);
  }
  for (angle = 180; angle >= 0; angle--){
    myServo.write(angle);
    delay(20);
  }
}