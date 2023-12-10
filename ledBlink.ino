int ledPin = 13;
int ledPin2 = 14;

void setup() {
  //set up leds
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  //turn leds on
  digitalWrite(ledPin, HIGH);
  digitalWrite(ledPin2, HIGH);
  //wait 500 ms
  delay(500);
  //turn leds off
  digitalWrite(ledPin, LOW);
  digitalWrite(ledPin2, LOW);
  //wait 500ms
  delay(500);
}
