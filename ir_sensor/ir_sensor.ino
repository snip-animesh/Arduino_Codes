int ir_pin = 7;
int obstacle;
void setup() {
  // put your setup code here, to run once:
  pinMode(ir_pin, INPUT);
  pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  obstacle = digitalRead(ir_pin);
  if (obstacle == LOW) {
    digitalWrite(13, 1);
  }
  if (obstacle == HIGH) {
    digitalWrite(13, 0);
  }
  delay(10);
}
