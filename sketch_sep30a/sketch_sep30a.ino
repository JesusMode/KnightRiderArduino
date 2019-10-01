float y = 62.5; // Delay of light switch

void setup() {
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
} // 8 lights total, end of setup

void loop() {
  for (int x = 0; x < 8; x++) {
    digitalWrite(x, HIGH);\
    digitalWrite(x+1, HIGH);
    delay(y);
    digitalWrite(x, LOW);
    digitalWrite(x+1, LOW);
  } // End of for loop; going forward
  for (int x = 7; x > -1; x -= 1) {
    digitalWrite(x, HIGH);
    digitalWrite(x-1, HIGH);
    delay(y);
    digitalWrite(x, LOW);
    digitalWrite(x-1, LOW);
  } // End of for loop; going backward
} // End of void loop()
