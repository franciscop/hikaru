#include "Arduino.h"
#include "Led.h"

void Led::create(int pinNumber) {

  // Define the pin as output to be able to control the LED
  pinMode(pinNumber, OUTPUT);

  // Store the pin number and the next value goal
  this->pin = pinNumber;
  this->next = random(0, 255);
}



void Led::update() {

  // Move the current value a step closer to the objective
  if (this->value > this->next) {
    this->value--;
  }
  else if (this->value < this->next) {
    this->value++;
  }

  // If it's in the objective, generate a new one
  else {
    this->next = random(0, 255);
  }

  // Actually update the LED
  analogWrite(this->pin, this->value);
}
