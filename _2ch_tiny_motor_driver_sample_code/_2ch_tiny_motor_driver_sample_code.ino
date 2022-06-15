/*
e-Gizmo 2CH Tiny Motor Driver

This is a sample code for 2-channel
Motor Driver.

Codes by
e-Gizmo Mechatronix Central
February 13,2016
http://www.e-gizmo.com

*/
void setup()
{
  pinMode(8, OUTPUT);//M1DIR
  pinMode(9, OUTPUT);//M1RUN
  pinMode(10, OUTPUT);//M2RUN
  pinMode(11, OUTPUT);//M2DIR
}
void loop()
{
  //Forward
 digitalWrite(8, 0); 
 analogWrite(9, 128);
 analogWrite(10, 128);
 digitalWrite(11, 0);
 delay(1000);
 //Stop
 digitalWrite(8, 0); 
 analogWrite(9, 0);
 analogWrite(10, 0);
 digitalWrite(11, 0);
 delay(1000);
  //Backward
 digitalWrite(8, 1); 
 analogWrite(9, 128);
 analogWrite(10, 128);
 digitalWrite(11, 1);
 delay(1000);
 //Turn Left
digitalWrite(8, 0); 
 analogWrite(9, 0);
 analogWrite(10, 128);
 digitalWrite(11, 1);
 delay(1000);
 //Turn Right
 digitalWrite(8, 1); 
 analogWrite(9, 128);
 analogWrite(10, 0);
 digitalWrite(11, 0);
 delay(1000);
 
}
