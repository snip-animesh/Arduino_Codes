int buttonPin=2,LedPin=13,buttonState=0;

void setup() {
  pinMode(LedPin,OUTPUT);
  pinMode(buttonPin,INPUT);
  // put your setup code here, to run once:

}

void loop() {
  buttonState=digitalRead(buttonPin);
  if(buttonState==1){
    digitalWrite(LedPin,HIGH);
  }
  else{
    digitalWrite(LedPin,LOW);
  }

}
