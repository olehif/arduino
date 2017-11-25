bool light8state = false;
bool light9state = false;
unsigned long int light8stateTimer = 0;
unsigned long int light9stateTimer = 0;
void setup() {
  
}

void loop() {
  light8stateTimer++;
  light9stateTimer++;

  if(light8stateTimer > 80000) {
    light8stateTimer = 0;
    light8state = !light8state;
    digitalWrite(8, light8state);
  }

  if(light9stateTimer > 17000) {
    light9stateTimer = 0;
    light9state = !light9state;
    digitalWrite(9, light9state);
  }
}
