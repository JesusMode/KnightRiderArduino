float y = 62.5; // Delay of light switch
int z = 10; // Pin Counter

void setup() {
  for (int x = 0; x < 14; x++) {
    pinMode(x, OUTPUT);
  }
} // 8 lights total, end of setup

void loop() {
  lightsForward();
  lightsBackward();
} // End of void loop()
