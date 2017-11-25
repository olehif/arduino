#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>

unsigned long int time = 0;
Adafruit_PCD8544 display = Adafruit_PCD8544(3, 4, 5, 6, 7);
void setup() {
  Serial.begin(9600);
  display.begin();              // Инициализация дисплея
  display.clearDisplay();
  display.setContrast(60);      // Устанавливаем контраст
}

void loop() {
  time++;
  if(time > 100) {
  for(int i = 0; i < 10; i++) {
    for(int j = 0; j < 84; j++) {
      if((j % 3) == 0) {
      display.drawPixel(i, j, BLACK);
      }
    }
  }
  display.display();
  }
  if(time > 100) {
    Serial.print(analogRead(A0));
    Serial.print("\n");
    time = 0;
  }
}
