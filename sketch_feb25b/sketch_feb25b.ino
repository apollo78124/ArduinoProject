int LED = 12;
int Switch1 = 2; //Pin 2 will be attached to the switch

void setup() {
//setup both output and an input on the HERO

pinMode(LED, OUTPUT);
pinMode(Switch1, INPUT);

}

void loop() {
  // If switch voltage is 5V, turn on the LED 
  if (digitalRead(Switch1) >= HIGH) {
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, LOW);
    delay(100);
  } else {
    digitalWrite(LED, LOW);
  }
}
