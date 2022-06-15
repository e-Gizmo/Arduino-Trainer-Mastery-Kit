/*
   Simple LED Blinking

   Use Digital pin 13 as output to
   turn On/OFF the LED every 1 sec.

*/
#define LED 13 // assign a variable name in D13

void setup() {

  pinMode(LED, OUTPUT); // Set D13 as Output

}

void loop() {

  digitalWrite(LED, HIGH); // Turn ON LED
  delay(1000); // delay 1 sec = 1000 ms
  digitalWrite(LED, LOW); //Turn OFF LED
  delay(1000);

}
