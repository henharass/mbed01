#include "mbed.h"

DigitalOut myLED(LED3);
DigitalOut myLED2(LED1);

int main()
{
    myLED = 0;
    myLED2 = 0;
    while (1) {
        for (int i = 0; i < 6; i++) {
            myLED = !myLED;
            ThisThread::sleep_for(1000ms);
        }
        for (int i = 0; i < 4; i++) {
            myLED2 = !myLED2; 
            ThisThread::sleep_for(1000ms);
        } 
    }
}