void lightsForward(){
    for (int x = 0; x < z; x++) {
    digitalWrite(x, HIGH); \
    digitalWrite(x + 1, HIGH);
    delay(y);
    digitalWrite(x, LOW);
    digitalWrite(x + 1, LOW);
  } // End of for loop; going forward
}

void lightsBackward(){
    for (int x = z; x > -1; x -= 1) {
    digitalWrite(x, HIGH);
    digitalWrite(x - 1, HIGH);
    delay(y);
    digitalWrite(x, LOW);
    digitalWrite(x - 1, LOW);
  } // End of for loop; going backward
}
