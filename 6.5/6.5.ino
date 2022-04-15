int buttonPin=2,buttonState=0;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin,INPUT);

}

void loop() {
  buttonState=digitalRead(buttonPin);
  Serial.print(buttonState);
  // put your main code here, to run repeatedly:

}
