

#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

// called this way, it uses the default address 0x40
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
// you can also call it with a different address you want
//Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x41);
// you can also call it with a different address and I2C interface
//Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(&Wire, 0x40);

// Depending on your servo make, the pulse width min and max may vary, you
// want these to be as small/large as possible without hitting the hard stop
// for max range. You'll have to tweak them as necessary to match the servos you
// have!
#define SERVOMIN  350 // this is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX  500// this is the 'maximum' pulse length count (out of 4096)

// our servo # counter
uint8_t servonum = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("8 channel Servo test!");

  pwm.begin();

  pwm.setPWMFreq(60);  // Analog servos run at ~60 Hz updates

  delay(10);
}

// you can use this function if you'd like to set the pulse length in seconds
// e.g. setServoPulse(0, 0.001) is a ~1 millisecond pulse width. its not precise!
/*
   void setServoPulse(uint8_t n, double pulse) {
  double pulselength;

  pulselength = 1000000;   // 1,000,000 us per second
  pulselength /= 60;   // 60 Hz
  Serial.print(pulselength); Serial.println(" us per period");
  pulselength /= 4096;  // 12 bits of resolution
  Serial.print(pulselength); Serial.println(" us per bit");
  pulse *= 1000000;  // convert to us
  pulse /= pulselength;
  Serial.println(pulse);
  pwm.setPWM(n, 0, pulse);
  }
*/

void loop() {
  // Drive each servo one at a time
  Serial.println(servonum);
  for (uint16_t pulselen = 320; pulselen < 400; pulselen++) {
    pwm.setPWM(0, 0, pulselen);
  }

  delay(500);
  for (uint16_t pulselen = 400; pulselen > 320; pulselen--) {
    pwm.setPWM(0, 0, pulselen);
  }

  delay(500);
  for (uint16_t pulselen = 300; pulselen > 0; pulselen--) {
    pwm.setPWM(1, 0, pulselen);
  }
  delay(500);
  for (uint16_t pulselen = 0; pulselen < 300; pulselen++) {
    pwm.setPWM(1, 0, pulselen);
  }

  delay(500);
  for (uint16_t pulselen = 290; pulselen > 175; pulselen--) {
    pwm.setPWM(2, 0, pulselen);
  }
  delay(500);
  for (uint16_t pulselen = 175; pulselen < 290; pulselen++) {
    pwm.setPWM(2, 0, pulselen);
  }

  delay(500);
 
}
