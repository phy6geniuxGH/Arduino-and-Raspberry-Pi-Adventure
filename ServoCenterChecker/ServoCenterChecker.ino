#include <Servo.h> 

Servo myservo;

void setup() 
{ 
  myservo.attach(12);
  myservo.write(90);  // set servo to mid-point
} 

void loop() {} 
