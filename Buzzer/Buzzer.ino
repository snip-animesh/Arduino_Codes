int buzzerPin=12;
void setup() {
  pinMode (12,OUTPUT );
}

void loop() {
  digitalWrite (12,HIGH);
  tone (12,240,500);
  tone (12,270,500);
  tone (12,300,500);
  tone (12,320,500);
  tone (12,360,500);
  tone (12,400,500);
  tone (12,450,500);
  //delay(1000);
  digitalWrite(12,LOW);
  delay(1000);
}
