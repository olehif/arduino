#include <VGAX.h>

VGAX vga;
int i = 0;
int j = 0;
void setup() {
  vga.begin();
  vga.clear(0);
}
void loop() {
//  vga.clear(0);
  for(int c = 0; c < 4; c++) {
    vga.putpixel4(i, j+c, 255);
  };
  i++;
  if((i % 30) == 0) {
    j += 4;
  }
  delay(10000);
}
