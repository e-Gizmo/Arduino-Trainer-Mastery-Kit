/*
   Adding more LED for Blinking

   Use Digital pin 13 to pin 10 as output to
   turn On/OFF the LED every 1 sec.

*/
#define LED_1_PIN 8 // assign a variable name in D8
#define LED_2_PIN 9 // assign a variable name in D9
#define LED_3_PIN 10 // assign a variable name in D10
#define LED_4_PIN 11 // assign a variable name in D11
#define LED_5_PIN 12 // assign a variable name in D12

void setup() {

  pinMode(LED_1_PIN, OUTPUT); // Set D8 as Output
  pinMode(LED_2_PIN, OUTPUT); // Set D9 as Output
  pinMode(LED_3_PIN, OUTPUT); // Set D10 as Output
  pinMode(LED_4_PIN, OUTPUT); // Set D11 as Output
  pinMode(LED_5_PIN, OUTPUT); // Set D12 as Output

}

void loop() {

  // Turn ON ALL LED
  digitalWrite(LED_1_PIN, HIGH);
  digitalWrite(LED_2_PIN, HIGH);
  digitalWrite(LED_3_PIN, HIGH);
  digitalWrite(LED_4_PIN, HIGH);
  digitalWrite(LED_5_PIN, HIGH);
  delay(1000);
  // Turn Off ALL LED
  digitalWrite(LED_1_PIN, LOW);
  digitalWrite(LED_2_PIN, LOW);
  digitalWrite(LED_3_PIN, LOW);
  digitalWrite(LED_4_PIN, LOW);
  digitalWrite(LED_5_PIN, LOW);
  delay(1000);

}
