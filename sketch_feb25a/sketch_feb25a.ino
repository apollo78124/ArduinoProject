/**
This number represents the numbering on the Hero board. wire is to be connected to the pin in the 'DIGITAL PWM' section pin number 12. 
*/
int lightPin = 12; //Hero board pin 12



void setup() {
  // put your setup code here, to run once:

  //Initialize diginal pin 12 as an output, then set its value to HIGH (5 volts) 
  pinMode(lightPin, OUTPUT);
  digitalWrite(lightPin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:

  //Output voltage to 0v
  digitalWrite(lightPin, LOW);
  delay(100);
  digitalWrite(lightPin, HIGH);
  delay(50);
}
