#include<Ultrasonic.h>
Ultrasonic ultrasonic(12,13);
int distance;


void setup()
{
  Serial.begin(9600);
  
 }
void loop()
{distance=ultrasonic.read();
Serial.print("distance in cm:");
Serial.println(distance);
delay(1000);

}
