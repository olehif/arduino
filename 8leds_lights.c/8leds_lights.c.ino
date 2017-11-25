/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogReadSerial
*/
void cycleThroughLeds(int value);

// the setup routine runs once when you press reset:
int i = 100;
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
    cycleThroughLeds(HIGH);
    cycleThroughLeds(LOW);
}

void cycleThroughLeds(int value) {
  for(i = 2; i <= 9; i++) {
    digitalWrite(i, value); 
    delay(50);
  }
}

