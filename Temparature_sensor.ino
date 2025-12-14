int tempPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(tempPin);
  float temp = value * 0.488;

  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println(" C");
  delay(1000);
}

