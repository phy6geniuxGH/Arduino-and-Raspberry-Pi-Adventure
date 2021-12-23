//Servo Motor

//Include the Servo Library
//Create a Servo Object

#include <Servo.h>
Servo francisServo;

//Define the Pins
int servoPin = 9;

void setup() {
  //"Attach" the servo object
  //We don't need to set it as an output manually
  francisServo.attach(servoPin); 
  //the process is like serial, because serial has a default library
  //Servo.h is a library also.

}

void loop() {
  //Let's turn the servo from 0 to 180
  //in increments of 20 degrees
  for(int i=0; i <= 180; i=i+20){
    francisServo.write(0);
    delay(10);
  }
  
}
