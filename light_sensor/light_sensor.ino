void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int lightLevel = analogRead(A0);
  Serial.print(lightLevel);
  Serial.print("\n");
  digitalWrite(7, HIGH);
  delay(lightLevel);
  digitalWrite(7, LOW);
  delay(lightLevel);
}
