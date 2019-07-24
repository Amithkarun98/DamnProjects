#include <Servo.h>
Servo a;
Servo b;
Servo c;
int value0;
int value1;
int value2;
void setup()
{
  pinMode(A0,INPUT);
  pinMode(3,OUTPUT);
  a.attach(3);
  
  pinMode(A1,INPUT);
  pinMode(5,OUTPUT);
  b.attach(5);
  
  pinMode(A2,INPUT);
  pinMode(6,OUTPUT);
  c.attach(6);
}
void loop()
{       
  value0= analogRead(A0);
  value0 = map(value0, 0, 1023, 0, 180);
  a.write(value0);
  value1= analogRead(A1);
  value1 = map(value1, 0, 1023, 0, 180);
  b.write(value1);
  delay(20);
  value2 = analogRead(A2);
  value2 = map(value2, 0, 1023, 90, 180);
  c.write(value2);
}
