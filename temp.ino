const int tempSensorPin=A0;
const int buzzerPin=8;
const float temperatureThreshold=25.0;

void setup() {
Serial.begin(9600);
pinMode(buzzerPin,OUTPUT);
digitalWrite(buzzerPin,LOW);  

}

void loop() {
  int sensorvalue=analogRead(tempSensorPin);
  float temperature=sensorvalue*(3.0/1023.0)*10;
  Serial.print("Temperature:");
  Serial.print(temperature);
  Serial.print("°C");

  if(temperature>temperatureThreshold)
  {  digitalWrite(buzzerPin,HIGH);
  }
  else
  {  digitalWrite(buzzerPin,HIGH);}
  
}
