int led[] ={17,2,15,12};



void setup() {
  for (int i = 0; i <=3; i++) {
    pinMode(led[i], OUTPUT);
  }
}

void loop() {
  up();
  down();
}

void up() {
  int i = 0;
  do {
    digitalWrite(led[i], LOW);
    delay(50);
    digitalWrite(led[i], HIGH);
    i++;
  } while (i < 4);
}

void down() {
  int i = 4;
  do {
    digitalWrite(led[i], LOW);
    delay(50);
    digitalWrite(led[i], HIGH);
    i--;
  } while (i > 0);
;}