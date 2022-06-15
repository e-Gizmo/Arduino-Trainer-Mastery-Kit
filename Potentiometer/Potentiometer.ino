/*
   :atch and Switch Button

   Use Digital pin 13 to pin 10 as output to
   turn On/OFF the LED every 1 sec.

*/
int LED_PIN1 = 10;
int LED_PIN2 = 11;

int SWITCHPIN1 = A1;
int SWITCHPIN2 = A2;

int SWITCH_STATE1 = 0;
int SWITCH_STATE2 = 0;

int LED_STATE = 0;

void setup() {

  pinMode(LED_PIN1, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);

  pinMode(SWITCHPIN1, INPUT);
  pinMode(SWITCHPIN2, INPUT);

  digitalWrite(LED_PIN1, LOW);
}

void loop() {

  SWITCH_STATE1 = digitalRead(SWITCHPIN1);
  SWITCH_STATE2 = digitalRead(SWITCHPIN2);

  if (SWITCH_STATE1 == 0) {
    while (digitalRead(SWITCHPIN1) == 0);
    switch (LED_STATE) {
      case 0:
        digitalWrite(LED_PIN1, HIGH);
        LED_STATE = 1;
        break;
      case 1:
        digitalWrite(LED_PIN1, LOW);
        LED_STATE = 0;
        break;
    }
  }
  if (SWITCH_STATE2 == 0) {
    digitalWrite(LED_PIN2, HIGH);
  }
  if (SWITCH_STATE2 == 1) {
    digitalWrite(LED_PIN2, LOW);
  }
}
