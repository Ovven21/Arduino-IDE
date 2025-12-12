// C++ code
//
const int ledPin = 6;

void setup()
{
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  digitalWrite(ledPin, HIGH);
  delay(250); // Wait for 1000 millisecond(s)
  digitalWrite(ledPin, LOW);
  delay(250); // Wait for 1000 millisecond(s)
}
