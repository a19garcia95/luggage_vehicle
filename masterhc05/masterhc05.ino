int xAxis, yAxis;
void setup() {
  Serial.begin(38400); // Bluetooth communication
}
void loop() {
  xAxis = analogRead(A0); // Joystick Right and Left
  yAxis = analogRead(A1); // Joystick Up and Down
  
  
  Serial.write(xAxis/4); // Range converter
  Serial.write(yAxis/4);
  delay(20);
}
