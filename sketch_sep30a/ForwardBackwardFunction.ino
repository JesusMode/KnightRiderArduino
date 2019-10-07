int c = 0;
boolean crissCross = false;

void crissCrossGO() {
  y = analogRead(A1);
  if (crissCross = true) {
    for (int x = 0; x < z; x++) {
      digitalWrite(x, HIGH);
      digitalWrite(z - x, HIGH);
      digitalWrite(x + 1, HIGH);
      digitalWrite(z + 1 - x, HIGH);
      delay(y);
      digitalWrite(x, LOW);
      digitalWrite(z - x, LOW);
      digitalWrite(x + 1, LOW);
      digitalWrite(z + 1 - x, LOW);
    } y = analogRead(A1);
    for (int x = z; x > -1; x -= 1) {
      digitalWrite(x, HIGH);
      digitalWrite(z - x, HIGH);
      digitalWrite(x - 1, HIGH);
      digitalWrite(z - 1 - x, HIGH);
      delay(y);
      digitalWrite(x, LOW);
      digitalWrite(z - x, LOW);
      digitalWrite(x - 1, LOW);
      digitalWrite(z - 1 - x, LOW);
    }
  }
  y = analogRead(A1);
}

void lightsForward() {
  y = analogRead(A1);
  for (int x = 0; x < z; x++) {
    digitalWrite(x, HIGH); \
    digitalWrite(x + 1, HIGH);
    delay(y);
    digitalWrite(x, LOW);
    digitalWrite(x + 1, LOW);
  } // End of for loop; going forward
  y = analogRead(A1);
}

void lightsBackward() {
  y = analogRead(A1);
  for (int x = z; x > -1; x -= 1) {
    digitalWrite(x, HIGH);
    digitalWrite(x - 1, HIGH);
    delay(y);
    digitalWrite(x, LOW);
    digitalWrite(x - 1, LOW);
  } // End of for loop; going backward
  c = c + 1;
  changeSpeed();
  y = analogRead(A1);
}

void changeSpeed() {
  if (c >= 1 && c <= 6) {
    y += 10;
    crissCross = false;
  }
  if (c >= 6 && c <= 11) {
    y -= 10;
  }
  if (c >= 12) {
    c = 0;
    crissCross = true;
  }
}
