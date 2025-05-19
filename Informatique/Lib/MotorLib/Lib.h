#ifndef MotorLib_h
#define MotorLib_h

#include <Arduino.h>

class Motor
{
    public:
        Motor(int pinClockwise, int pinCounterClockwise);
        void begin();
        void SetSpeed(float speed);
    private:
        int _pinClockwise;
        int _pinCounterClockwise;
};

#endif