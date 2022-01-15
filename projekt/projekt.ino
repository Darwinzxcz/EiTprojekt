#include <SimpleDHT.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// for DHT11, 

int pinDHT11 = 2;
SimpleDHT11 dht11(pinDHT11);
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.begin();
  lcd.backlight();
}


void loop() {
  // read without samples.
  byte stopnie = 0; //deklaruje wartość zmienną o naziwie stopnie
  byte wilgoc = 0;  //deklaruje wartość zmienną o naziwie wilgoc
    int err = SimpleDHTErrSuccess;
  if ((err = dht11.read(&stopnie, &wilgoc, NULL)) != SimpleDHTErrSuccess) {
    lcd.print("error");
    delay(1000);
    return;
  }
   
  lcd.setCursor(0, 0);
  lcd.print("Temperatura  "); //wyświetla na lcd tempertaura 
  lcd.print((int)stopnie);   //wyświetl stopnie 
  lcd.print("C ");
  lcd.setCursor(0, 1);
  lcd.print("Wilgotnosc   ");
  lcd.print((int)wilgoc);
  lcd.print("% ");
  delay(1000);
}
