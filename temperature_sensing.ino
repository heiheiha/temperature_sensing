int valueTemp;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
valueTemp=analogRead(A0);
valueTemp=valueTemp*125/126;
Serial.println(valueTemp);
delay(500);
}
