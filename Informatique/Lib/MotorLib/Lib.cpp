#include <Arduino.h>

#include "Lib.h"

Motor::Motor(int pinClockwise, int pinCounterClockwise)
{
    _pinClockwise = pinClockwise;
    _pinCounterClockwise = pinCounterClockwise;
}

void Motor::begin()
{
    pinMode(_pinClockwise, OUTPUT);
    pinMode(_pinCounterClockwise, OUTPUT);
    analogWrite(_pinClockwise, 0);
    analogWrite(_pinCounterClockwise, 0);
};

void Motor::SetSpeed(float speed)
{
    if (speed>0)
    {
        analogWrite(_pinClockwise, (int)abs(speed*4096));
        analogWrite(_pinCounterClockwise, 0);
    } else 
    {
        analogWrite(_pinClockwise, 0);
        analogWrite(_pinCounterClockwise, (int)abs(speed*4096));
    }
    
};