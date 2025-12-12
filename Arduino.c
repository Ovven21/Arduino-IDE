/*
  Control 8 LEDs using an array and for loop
  Pins 2 through 9 are used for the LEDs.
*/

// Define an array to hold the pin numbers for the LEDs
int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9};
// Define the number of LEDs
int pinsCount = 8;
// Variable for the delay time in milliseconds
int delayTime = 100;

void setup() {
  // Use a for loop to initialize all LED pins as outputs
  for (int i = 0; i < pinsCount; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Loop to light up LEDs one after another (chasing right)
  for (int i = 0; i < pinsCount; i++) {
    digitalWrite(ledPins[i], HIGH); // Turn on the current LED
    delay(delayTime);              // Wait for a moment
    digitalWrite(ledPins[i], LOW);  // Turn off the current LED
  }

  // Loop to turn off LEDs one after another in reverse (chasing left)
  // We start from the second to last LED (index 6) to avoid double actions
  // and go down to index 1
  for (int i = pinsCount - 1; i > 0; i--) {
    digitalWrite(ledPins[i], HIGH); // Turn on the current LED
    delay(delayTime);              // Wait for a moment
    digitalWrite(ledPins[i], LOW);  // Turn off the current LED
  }
}
