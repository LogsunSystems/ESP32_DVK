int SW_1 = 35;
int SW_2 = 34;
int SW_3 = 33;
int SW_4 = 32;
int SW_5 = 39;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(SW_1, INPUT_PULLUP);
  pinMode(SW_2, INPUT_PULLUP);
  pinMode(SW_3, INPUT_PULLUP);
  pinMode(SW_4, INPUT_PULLUP);
  pinMode(SW_5, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int switch_1 = digitalRead(SW_1);
  int switch_2 = digitalRead(SW_2);
  int switch_3 = digitalRead(SW_3);
  int switch_4 = digitalRead(SW_4);
  int switch_5 = digitalRead(SW_5);

  if (switch_1 == 0)
  {
    delay(500);
    Serial.println("Switch_1 is pressed");
  }
  if (switch_2 == 0)
  {
    delay(500);
    Serial.println("Switch_2 is pressed");
  }
  if (switch_3 == 0)
  {
    delay(500);
    Serial.println("Switch_3 is pressed");
  }
  if (switch_4 == 0)
  {
    delay(500);
    Serial.println("Switch_4 is pressed");
  }
  if (switch_5 == 0)
  {
    delay(500);
    Serial.println("Switch_5 is pressed");
  }
}
