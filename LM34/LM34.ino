/*
   LDR

   Use Digital pin 13 to pin 10 as output to
   turn On/OFF the LED every 1 sec.

*/

int LM34_PIN = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {

  int RAW_VOTLS = analogRead(LM34_PIN);
  float MIL_VOLTS = (RAW_VOTLS / 1024.0) * 5000;
  float FAHRENHEIT = MIL_VOLTS / 10;
  Serial.println(" degrees Fahrenheit, ");
  float CELSIUS = (FAHRENHEIT - 32) * (5.0 / 9.0);

  Serial.print(CELSIUS);
  Serial.println(" degrees Celsius");
  delay(1000);
}
