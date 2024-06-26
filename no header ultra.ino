// C++ code
//
int trigpin=9;
  int echopin=8;
  long duration;
  long distance;
  
void setup() {
  Serial.begin(9600);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  
}

void loop() {
 digitalWrite(trigpin,LOW);
 delayMicroseconds(2);
 digitalWrite(trigpin,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigpin,LOW);
 duration=pulseIn(echopin,HIGH);

 distance=duration*0.034/2;

 Serial.print("Distance:");
 Serial.print(distance);
 Serial.println("cm");

 delay(500);
}