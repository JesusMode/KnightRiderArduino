int y; // Delay of light switch
int z = 10; // Pin Counter

void setup() {
  for (int x = 0; x < 14; x++) {
    pinMode(x, OUTPUT);
    
  } // Initializes all the pins as OUTPUT. End of FOR loop

} // 10 lights total, end of setup

void loop() {
  y = analogRead(A1);
  map(y, 0, 1023, 40, 500);
  crissCrossGO();
  lightsForward();
  lightsBackward();

}
