
//Uno

const int dimPin = 9;
const int ledPin = 13;

void setup() 
{
  pinMode(dimPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  
  analogWrite(dimPin, 0);
  delay(100);
  analogWrite(dimPin, 255);
  delay(50);
  analogWrite(dimPin, 0);
  delay(170);
  analogWrite(dimPin, 255);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}

