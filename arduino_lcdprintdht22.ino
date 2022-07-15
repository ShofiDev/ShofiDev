#include <DHT.h>
#include <LiquidCrystal_I2C.h>
int READER =2; // PIN GPIO14 ( D5 )
LiquidCrystal_I2C lcd(0x27 ,16 , 2);
DHT dht(READER, DHT22); // KONFIGURASI DHT
  
void setup() {
  Serial.begin(115200); // SERIAL BAUD
  pinMode(READER, INPUT);
  dht.begin();
  lcd.begin();
  lcd.backlight();
}

void loop() {
  float suhu = dht.readTemperature();
  float kelembapan = dht.readHumidity();
  Serial.println("Kelembapan: "); 
  Serial.println(kelembapan);
  Serial.println("Temperatur Suhu: ");
  Serial.println(suhu);
  delay(100);
  lcd.setCursor(0,0);
  lcd.print("kelembapan: ");
  lcd.setCursor(11,0);
  lcd.print(kelembapan);
  lcd.setCursor(0,1);
  lcd.print("suhu: ");
  lcd.setCursor(6,6);
  lcd.print(suhu);
  
}
