void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, INPUT);
  digitalWrite(4, HIGH);
  digitalWrite(2, LOW);
}

void loop() {
  // put your main code here, to run repeatedly
    analogWrite(3, 50);
}
