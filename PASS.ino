
const int sw1=12;
const int sw2=11;
const int sw3=10;
const int sw4=9;
const int red=5;
const int green=4;

void setup() {
  pinMode(sw1,INPUT);
   pinMode(sw2,INPUT);
    pinMode(sw3,INPUT);
     pinMode(red,OUTPUT);
      pinMode(green,OUTPUT);

}

void loop() {
 if
 (digitalRead(sw1==HIGH)&&(sw3==HIGH))
 { 
  digitalWrite(green,HIGH);
 digitalWrite(red,LOW);

}
else
{digitalWrite(green,LOW);
 digitalWrite(red,HIGH);
}
}
