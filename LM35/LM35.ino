/*
   LM35

   Use Digital pin 13 to pin 10 as output to
   turn On/OFF the LED every 1 sec.

*/

float TEMP;
int TEMP_PIN = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {

  TEMP = analogRead(TEMP_PIN);
  TEMP = (TEMP * 0.488);
  Serial.print(TEMP);
  Serial.println();
  delay(1000);

}
