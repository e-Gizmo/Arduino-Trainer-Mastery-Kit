/*
   Adding more LED for Blinking

   Use Digital pin 13 to pin 10 as output to
   turn On/OFF the LED every 1 sec.

*/
#define LED_1_PIN 13 // assign a variable name in D13
#define LED_2_PIN 12 // assign a variable name in D12
#define LED_3_PIN 11 // assign a variable name in D11
#define LED_4_PIN 10 // assign a variable name in D10

void setup() {

  pinMode(LED_1_PIN, OUTPUT); // Set D13 as Output
  pinMode(LED_2_PIN, OUTPUT); // Set D12 as Output
  pinMode(LED_3_PIN, OUTPUT); // Set D11 as Output
  pinMode(LED_4_PIN, OUTPUT); // Set D10 as Output

}

void loop() {

  digitalWrite(LED_1_PIN, HIGH); // Turn ON LED
  digitalWrite(LED_2_PIN, HIGH); // Turn ON LED
  digitalWrite(LED_3_PIN, HIGH); // Turn ON LED
  digitalWrite(LED_4_PIN, HIGH); // Turn ON LED
  delay(1000); // delay 1 sec = 1000 ms
  digitalWrite(LED_1_PIN, LOW); // Turn ON LED
  digitalWrite(LED_2_PIN, LOW); // Turn ON LED
  digitalWrite(LED_3_PIN, LOW); // Turn ON LED
  digitalWrite(LED_4_PIN, LOW); // Turn ON LED
  delay(1000);

}
