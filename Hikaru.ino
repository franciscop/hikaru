// Add the small 'async' LED library
#include "Led.h"

// Create the instances
// Note: better to initialize them without the PIN number as seen here:
// http://arduino.stackexchange.com/q/3658/731
Led Red;
Led Green;
Led Blue;


// Initialie them
void setup() {

  // Attach it to PWM pins
  Red.create(6);
  Green.create(9);
  Blue.create(5);
}

// Looping. When the code is properly abstracted, the main funcion/loop looks
// as simple as this (I'm really proud of this) (:
void loop() {

  
  Red.update();
  Green.update();
  Blue.update();

  // This sets up the speed of change
  delay(20);
}
