int adc = 36;
int pwn = 13;

void setup() {
  Serial.begin(9600);
  pinMode(led[0],OUTPUT);
  pinMode(led[1],OUTPUT);
  pinMode(led[2],OUTPUT);
  pinMode(led[3],OUTPUT);
}

void loop() {
  int LDR = analogRead(adc);
  int maps= map(read, 0, 1023, 0, 4);
  Serial.println(maps);
  delay(50);
}

void ledtest(int light) {
  reset();
}
