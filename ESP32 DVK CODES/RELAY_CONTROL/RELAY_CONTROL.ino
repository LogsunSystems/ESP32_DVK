int relay_1 = 17;
int relay_2 = 16;
//int buzzer = 2;
int redPin = 15;
int greenPin = 14;
int bluePin = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(relay_1, OUTPUT);
  pinMode(relay_2, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
  // pinMode(buzzer, OUTPUT);
  // digitalWrite(buzzer, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(relay_1, HIGH);
  digitalWrite(relay_2, HIGH);
  delay(1000);
  digitalWrite(relay_1, LOW);
  digitalWrite(relay_2, LOW);
  delay(1000);
}
