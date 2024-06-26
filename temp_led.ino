const int tempSensorPin=A0;
const int led1=7;
const int led2=8;
const int led3=4;
const float temperatureThreshold1=10.0;
const float temperatureThreshold2=8.0;
const float temperatureThreshold3=6.0;
void setup() {
Serial.begin(9600);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
digitalWrite(led1,LOW);
digitalWrite(led2,LOW);  
digitalWrite(led3,LOW);  

}

void loop() {
  int sensorvalue=analogRead(tempSensorPin);
  float temperature=sensorvalue*(3.0/1023.0)*10;
  Serial.print("Temperature:");
  Serial.print(temperature);
  Serial.print("°C");

  if(temperature>temperatureThreshold1)
  {  digitalWrite(led1,HIGH);
  }
  else
  {  digitalWrite(led1,LOW);}
  
  if(temperature>temperatureThreshold2)
  {  digitalWrite(led2,HIGH);
  }
  else
  {  digitalWrite(led2,LOW);}
  
  
  if(temperature>temperatureThreshold3)
  {  digitalWrite(led3,HIGH);
  }
  else
  {  digitalWrite(led3,LOW);}
  
  
}
