#include<LiquidCrystal.h>

LiquidCrystal lcd(5,6,7,8,9,10);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);

}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0,0);
  lcd.print("Animesh");
  lcd.setCursor(0,1);
  lcd.print("1801077");
  delay(1000);
  lcd.clear();
  delay(500);

}
