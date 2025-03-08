//In this program I will make an LED blink on and off on a Raspberry Pi 5 using  the WiringPi library.
//The LED is connected to GPIO pin 2.
//The LED will blink on and off every 1 second.
//The LED will blink on and off 10 times.

#include <wiringPi.h>
#include <stdio.h>

int main(void)
{
    wiringPiSetup();
    pinMode(2, OUTPUT);
    for (int i = 0; i < 10; i++)
    {
        digitalWrite(2, HIGH);
        delay(1000);
        digitalWrite(2, LOW);
        delay(1000);
    }
    return 0;
}