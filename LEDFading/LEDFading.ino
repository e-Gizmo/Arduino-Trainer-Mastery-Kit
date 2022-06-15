/*
   Buzzer

   Use Digital pin 13 to pin 10 as output to
   turn On/OFF the LED every 1 sec.

*/
int POT_PIN = 0;
int LED_PIN = 11;


void setup() {

  pinMode(LED_PIN, OUTPUT);

}

void loop() {

  int POT_VAL;

  POT_VAL = analogRead(POT_PIN);
  POT_VAL = map(POT_VAL, 0, 1023, 0, 255);

  analogWrite(LED_PIN, POT_VAL);

}
