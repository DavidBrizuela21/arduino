const int flexPin = A0;  // Pin analógico para el sensor flex

void setup() {
  pinMode(flexPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int flexValue = analogRead(flexPin);
  Serial.println(flexValue);
  delay(500);  // Ajusta el retardo según sea necesario
}
