/*
   LDR

   Use Digital pin 13 to pin 10 as output to
   turn On/OFF the LED every 1 sec.

*/
const int LED_PIN = 13;
const int LDR_PIN = A4;

void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  pinMode(LDR_PIN, INPUT);

}

void loop() {

  int LDR_STATUS = analogRead(LDR_PIN);
  if (LDR_STATUS <= 200) {
    digitalWrite(LED_PIN, HIGH);
    Serial.print("It's Dim, Turn ON the light : ");
    Serial.println(LDR_STATUS);
  } else {
    digitalWrite(LED_PIN, LOW);
    Serial.print("It's sunny, Turn OFF the light : ");
    Serial.println(LDR_STATUS);
  }
}
