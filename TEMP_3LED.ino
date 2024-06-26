int temppin=A0;
int led1=12;
int led2=11;
int led3=10;

void setup() {
 Serial.begin(9600);
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
 pinMode(led3,OUTPUT); 
}

void loop() {
  int sensorval=analogRead(temppin);
  float temp=sensorval*(3.0/1023.0)*10;
   Serial.print("temperature:");
   Serial.print(temp);
   Serial.println("°c");
   if(temp>=10.0){
    digitalWrite(led1,HIGH);
    delay(5000);
    digitalWrite(led1,LOW);
   }
   
   else if(temp<10.0&&temp>5.0)
    {digitalWrite(led2,HIGH);
    delay(5000);
    digitalWrite(led2,LOW);
      
    }
    else
    {digitalWrite(led3,HIGH);
    delay(5000);
    digitalWrite(led3,LOW);
      
    }
    delay(500);

}
