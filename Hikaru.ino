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


// Create the instances
// Note: better not to initialize them with the PIN number as seen here:
// http://arduino.stackexchange.com/q/3658/731
Led Red;
Led Green;
Led Blue;


// Initialie them
void setup() {

  // We should have used only PWN pins here, but the hardware was soldered,
  // I was really tired and it looked amazing anyway. There will be a V2
  // which will fix this so all of the LEDs show transitions
  Red.create(8);
  Green.create(9);
  Blue.create(7);
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
