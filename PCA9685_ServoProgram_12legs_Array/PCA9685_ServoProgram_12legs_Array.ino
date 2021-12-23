#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

// called this way, it uses the default address 0x40
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

int rate = 500;
int angle0[] = {130, 120, 110, 100, 90};
//int angle1[] = {80, 70, 60, 50, 90};
int angle2[] = {60, 50, 40, 30, 90};
int angle3[] = {60, 50, 40, 30, 90};
//int angle4[] = {120, 110, 100, 90, 90};
int angle5[] = {140, 130, 120, 110, 90};
int angle6[] = {130, 120, 110, 100, 90};
//int angle7[] = {80, 70, 60, 50, 90};
int angle8[] = {60, 50, 40, 30, 90};
int angle9[] = {60, 50, 40, 30, 90};
//int angle10[] = {120, 110, 100, 90, 90};
int angle11[] = {140, 130, 120, 110, 90};

void setup() {
  Serial.begin(9600);
  Serial.println("8 channel Servo test!");
  pwm.begin();
  pwm.setPWMFreq(60);  // Analog servos run at ~60 Hz updates
  delay(10);
  pwm.setPWM(0, 0, angleToPulse0(90));
  //pwm.setPWM(1, 0, angleToPulse1(90));
  pwm.setPWM(2, 0, angleToPulse2(90));
  pwm.setPWM(3, 0, angleToPulse3(90));
  //pwm.setPWM(4, 0, angleToPulse4(90));
  pwm.setPWM(5, 0, angleToPulse5(90));
  pwm.setPWM(6, 0, angleToPulse6(90));
  //pwm.setPWM(7, 0, angleToPulse7(90));
  pwm.setPWM(8, 0, angleToPulse8(90));
  pwm.setPWM(9, 0, angleToPulse9(90));
  //pwm.setPWM(10, 0, angleToPulse10(90));
  pwm.setPWM(11, 0, angleToPulse11(90));
  delay(1500);

}

void loop() {
  for (int i = 0; i < 5; i++) {
    pwm.setPWM(0, 0, angleToPulse0(angle0[i]));
    //pwm.setPWM(1, 0, angleToPulse1(angle1[i]));
    pwm.setPWM(2, 0, angleToPulse2(angle2[i]));
    pwm.setPWM(3, 0, angleToPulse3(angle3[i]));
    //pwm.setPWM(4, 0, angleToPulse4(angle4[i]));
    pwm.setPWM(5, 0, angleToPulse5(angle5[i]));
    pwm.setPWM(6, 0, angleToPulse6(angle6[i]));
    //pwm.setPWM(7, 0, angleToPulse7(angle7[i]));
    pwm.setPWM(8, 0, angleToPulse8(angle8[i]));
    pwm.setPWM(9, 0, angleToPulse9(angle9[i]));
    //pwm.setPWM(10, 0, angleToPulse10(angle10[i]));
    pwm.setPWM(11, 0, angleToPulse11(angle11[i]));
    delay(rate);
  }
}

int angleToPulse0(int ang) {
  int pulse0 = map(ang, 0, 180, 160, 480);
  Serial.print("Angle: "); Serial.print(ang);
  Serial.print(" pulse: "); Serial.println(pulse0);
  return pulse0;
}

int angleToPulse1(int ang) {
  int pulse1 = map(ang, 0, 180, 160, 490);
  Serial.print("Angle: "); Serial.print(ang);
  Serial.print(" pulse: "); Serial.println(pulse1);
  return pulse1;
}

int angleToPulse2(int ang) {
  int pulse2 = map(ang, 0, 180, 160, 440);
  Serial.print("Angle: "); Serial.print(ang);
  Serial.print(" pulse: "); Serial.println(pulse2);
  return pulse2;
}

int angleToPulse3(int ang) {
  int pulse3 = map(ang, 0, 180, 185, 500);
  Serial.print("Angle: "); Serial.print(ang);
  Serial.print(" pulse: "); Serial.println(pulse3);
  return pulse3;
}
int angleToPulse4(int ang) {
  int pulse4 = map(ang, 0, 180, 190, 500);
  Serial.print("Angle: "); Serial.print(ang);
  Serial.print(" pulse: "); Serial.println(pulse4);
  return pulse4;
}

int angleToPulse5(int ang) {
  int pulse5 = map(ang, 0, 180, 190, 490);
  Serial.print("Angle: "); Serial.print(ang);
  Serial.print(" pulse: "); Serial.println(pulse5);
  return pulse5;
}

int angleToPulse6(int ang) {
  int pulse6 = map(ang, 0, 180, 160, 490);
  Serial.print("Angle: "); Serial.print(ang);
  Serial.print(" pulse: "); Serial.println(pulse6);
  return pulse6;
}

int angleToPulse7(int ang) {
  int pulse7 = map(ang, 0, 180, 160, 480);
  Serial.print("Angle: "); Serial.print(ang);
  Serial.print(" pulse: "); Serial.println(pulse7);
  return pulse7;
}

int angleToPulse8(int ang) {
  int pulse8 = map(ang, 0, 180, 175, 510);
  Serial.print("Angle: "); Serial.print(ang);
  Serial.print(" pulse: "); Serial.println(pulse8);
  return pulse8;
}

int angleToPulse9(int ang) {
  int pulse9 = map(ang, 0, 180, 180, 500);
  Serial.print("Angle: "); Serial.print(ang);
  Serial.print(" pulse: "); Serial.println(pulse9);
  return pulse9;
}

int angleToPulse10(int ang) {
  int pulse10 = map(ang, 0, 180, 160, 480);
  Serial.print("Angle: "); Serial.print(ang);
  Serial.print(" pulse: "); Serial.println(pulse10);
  return pulse10;
}

int angleToPulse11(int ang) {
  int pulse11 = map(ang, 0, 180, 190, 510);
  Serial.print("Angle: "); Serial.print(ang);
  Serial.print(" pulse: "); Serial.println(pulse11);
  return pulse11;
}
