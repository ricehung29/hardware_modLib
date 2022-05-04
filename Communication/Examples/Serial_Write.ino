void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.write("CSWCSSREC\n");
  delay(100);
}
