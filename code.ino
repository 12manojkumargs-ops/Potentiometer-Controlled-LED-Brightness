int potPin = A0;
int ledPin = 11;
int potValue;
int brightness;
void setup() {
  pinMode(ledPin, OUTPUT);
}
void loop() {
  potValue = analogRead(potPin);
  brightness = map(potValue, 0, 1023, 0, 255);
  analogWrite(ledPin, brightness);
  delay(1);
}
