#include "Arduino.h"

// Class used to handle each of the LEDs color from the strip
class Led {
  public:

    // Store in which pin the LED is connected
    int pin = 0;

    // Store the current intensity of the LED
    int value = 0;

    // What's the next intensity that we want to reach?
    int next = 0;

    // Assign the instance a pin number
    void create(int pinNumber);

    // Update the LED intensity according to 'next'
    void update();
};
