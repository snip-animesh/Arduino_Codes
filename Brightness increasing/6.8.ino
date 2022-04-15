int Led=11,button=9,buttonState=0,brightness=0,brightnessUp=20;
void setup() {
  pinMode(Led,OUTPUT);
  pinMode(button,INPUT);
}

void loop() {
  analogWrite(Led,brightness);
  buttonState=digitalRead(button);
  if(buttonState==1){
    brightness=brightness+brightnessUp;
  }
  if(brightness>=5000){
    brightness=0;
  }
  delay(300);
}
