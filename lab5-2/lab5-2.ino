int adc = 36;
int pwn = 13;
void setup() {
  Serial.begin(9600);

}

void loop() {

  Serial.println(analogRead(adc));
  analogWrite(pwn,50);
  delay(200);
}
