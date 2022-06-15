/*
   Running LED lights

   Use Digital pin 13 to pin 10 as output to
   turn On/OFF the LED every 1 sec.

*/
int LED_NUMBER[] = {10, 11, 12, 13};
int DEL1 = 100;
int DEL2 = 100;

void setup() {

  for (int i = 0; i <= 3; i++) {
    pinMode(LED_NUMBER[i], OUTPUT);
  }

}

void loop() {

  ASCEND();
  delay(DEL1);
  DESCEND();
  delay(DEL1);

}

void ASCEND() {
  for (int i = 0; i <= 3; i++) {
    digitalWrite(LED_NUMBER[i], HIGH);
    delay(DEL2);
  }
  for (int i = 0; i <= 3; i++) {
    digitalWrite(LED_NUMBER[i], LOW);
    delay(DEL2);
  }
}
void DESCEND() {
  for (int i = 3; i >= 0; i--) {
    digitalWrite(LED_NUMBER[i], HIGH);
    delay(DEL2);
  }
  for (int i = 3; i >= 0; i--) {
    digitalWrite(LED_NUMBER[i], LOW);
    delay(DEL2);
  }
}
