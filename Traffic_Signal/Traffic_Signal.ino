int Led1=11,Led2=10,Led3=9,buttonState=0,button=8;

void setup() {
  pinMode(Led1,OUTPUT);
  pinMode(Led2,OUTPUT);
  pinMode(Led3,OUTPUT);
  pinMode(Led1,OUTPUT);
  pinMode(button,INPUT);
}

void loop() {
  buttonState=digitalRead(button);
  if(buttonState==HIGH){
    
    digitalWrite(Led1,HIGH);
    delay(3000);
    digitalWrite(Led1,LOW);
    digitalWrite(Led2,HIGH);
    delay(3000);
    digitalWrite(Led2,LOW);
    digitalWrite(Led3,HIGH);
    delay(3000);
    digitalWrite(Led3,LOW);    
  }

}
