void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void ledControl(int duration) {
  digitalWrite(13, HIGH);
  delay(duration);
  digitalWrite(13, LOW);
  delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
  ledControl(1000);

  ledControl(100);

  ledControl(1000);
}