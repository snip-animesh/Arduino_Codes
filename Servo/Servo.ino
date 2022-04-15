#include<Servo.h>
int i;
Servo myservo;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(7);

}

void loop() {
  // put your main code here, to run repeatedly:
  myservo.write(0);
  delay(500);
  myservo.write(130);
  delay(1000);
//  for (i=180;i<360;i=i+5){
//    myservo.write(i);
//    delay(200);
//    }
  

}
