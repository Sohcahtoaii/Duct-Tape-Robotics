#include <Arduino.h>
#include "../Lib/MotorLib/Lib.h"
#include "../Lib/MotorLib/Lib.cpp"

Motor MotorR(18, 5);
Motor MotorL(17, 16);


void setup() {
}

void loop() {
  MotorR.SetSpeed(0.5);
  MotorL.SetSpeed(0.5);
  delay(100);
}
