int pow(unsigned int base, unsigned int exponent);
void clearLeds(void);
void cycleThroughLeds(int value);
void printArrayOfBinaryNumbers(int *numbers, int array_count, int delay_time);

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  int numbers[] = { 1, 128, 2, 64, 4, 32, 8, 16 };
  printArrayOfBinaryNumbers(numbers, 8, 200);
}

void fibonachiNubers(int limit, int delay_time) {
  int previous = 0;
  int current = 1;
  int fibonachi = 0;

  while(current < limit) {
    fibonachi = current + previous;
    previous = current;
    current = fibonachi;
    digitToLightBinaryRepresentation(fibonachi);
    delay(delay_time);
    clearLeds();
  }
}

void digitToLightBinaryRepresentation(unsigned int digit) {
  for(int i = 0; i < 8; i++) {
    int power_of_2 = pow(2, i);
    if((digit & power_of_2) == power_of_2) {
       digitalWrite(i + 2, HIGH);
    }
  }
}

int pow(int base, int exponent) {
  int result = 1;
  for(int i=0; i < exponent; i+=1) {
    result *= base;
  };

  return result;
}

void clearLeds(void) {
  cycleThroughLeds(LOW, 0);
}

void cycleThroughLeds(int value, int delay_time) {
  for(int i = 2; i <= 9; i++) {
    digitalWrite(i, value); 
    delay(delay_time);
  }
}

void printArrayOfBinaryNumbers(int *numbers, int array_count, int delay_time) {
  for(int i = 0; i < array_count; i++) {
    digitToLightBinaryRepresentation(numbers[i]);
    delay(delay_time);
  }
}


