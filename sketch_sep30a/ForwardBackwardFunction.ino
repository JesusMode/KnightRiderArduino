int c = 0;

void lightsForward() {
  for (int x = 0; x < z; x++) {
    digitalWrite(x, HIGH); \
    digitalWrite(x + 1, HIGH);
    delay(y);
    digitalWrite(x, LOW);
    digitalWrite(x + 1, LOW);
  } // End of for loop; going forward
}

void lightsBackward() {

  for (int x = z; x > -1; x -= 1) {
    digitalWrite(x, HIGH);
    digitalWrite(x - 1, HIGH);
    delay(y);
    digitalWrite(x, LOW);
    digitalWrite(x - 1, LOW);
  } // End of for loop; going backward
  c = c + 1;
  changeSpeed();
}

void changeSpeed() {
  if (c >= 1 && c <= 6) {
    y += 10;
  }
  if (c >= 6 && c <= 11) {
    y -= 10;
  }
  if (c >= 12){
    c = 0;
  }
}
