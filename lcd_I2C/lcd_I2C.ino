#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() {
  lcd.begin();
}
void loop() {
  lcd.setCursor(0, 0);
  lcd.print("animesh");
  delay(2000);
  lcd.clear();
  delay(1000);

}
