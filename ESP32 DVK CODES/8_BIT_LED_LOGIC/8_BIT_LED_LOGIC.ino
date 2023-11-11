int SW_1 = 17;
int SW_2 = 16;
int SW_3 = 15;
int SW_4 = 14;
int SW_5 = 13;
int SW_6 = 12;
int SW_7 = 1;
int SW_8 = 3;

int LEd_1 = 22;
int LEd_2 = 21;
int LEd_3 = 25;
int LEd_4 = 26;
int LEd_5 = 27;
int LEd_6 = 4;
int LEd_7 = 0;
int LEd_8 = 2;

void setup() {
  // put your setup code here, to run once:
  //Serial.begin(9600);
  pinMode(SW_1, INPUT);
  pinMode(SW_2, INPUT);
  pinMode(SW_3, INPUT);
  pinMode(SW_4, INPUT);
  pinMode(SW_5, INPUT);
  pinMode(SW_6, INPUT);
  pinMode(SW_7, INPUT);
  pinMode(SW_8, INPUT);

  pinMode(LEd_1, OUTPUT);
  pinMode(LEd_2, OUTPUT);
  pinMode(LEd_3, OUTPUT);
  pinMode(LEd_4, OUTPUT);
  pinMode(LEd_5, OUTPUT);
  pinMode(LEd_6, OUTPUT);
  pinMode(LEd_7, OUTPUT);
  pinMode(LEd_8, OUTPUT);
  digitalWrite(LEd_8, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  int switch_1 = digitalRead(SW_1);
  int switch_2 = digitalRead(SW_2);
  int switch_3 = digitalRead(SW_3);
  int switch_4 = digitalRead(SW_4);
  int switch_5 = digitalRead(SW_5);
  int switch_6 = digitalRead(SW_6);
  int switch_7 = digitalRead(SW_7);
  int switch_8 = digitalRead(SW_8);

  delay(100);
  if (switch_1 == 1)
  {
    digitalWrite(LEd_1, HIGH);
  }
  else
  {
    digitalWrite(LEd_1, LOW);
  }
  if (switch_2 == 1)
  {
    digitalWrite(LEd_2, HIGH);
  }
  else
  {
    digitalWrite(LEd_2, LOW);
  }
  if (switch_3 == 1)
  {
    digitalWrite(LEd_3, HIGH);
  }
  else
  {
    digitalWrite(LEd_3, LOW);
  }
  if (switch_4 == 1)
  {
    digitalWrite(LEd_4, HIGH);
  }
  else
  {
    digitalWrite(LEd_4, LOW);
  }
  if (switch_5 == 1)
  {
    digitalWrite(LEd_5, HIGH);
  }
  else
  {
    digitalWrite(LEd_5, LOW);
  }
  if (switch_6 == 1)
  {
    digitalWrite(LEd_6, HIGH);
  }
  else
  {
    digitalWrite(LEd_6, LOW);
  }
  if (switch_7 == 1)
  {
    digitalWrite(LEd_7, HIGH);
  }
  else
  {
    digitalWrite(LEd_7, LOW);
  }
  if (switch_8 == 1)
  {
    digitalWrite(LEd_8, HIGH);
  }
  else
  {
    digitalWrite(LEd_8, LOW);
  }
}
