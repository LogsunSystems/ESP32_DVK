
 
 
 /*
  Experiment:- IR Sensor interfacing with Arduino Uno
  Compony:- Logsun Systems Pune
  Date:-19-09-2018
  Programmer:- Yogesh Gunjal
  Connection:- 1)IR Output Pin :- Arduino Digital Pin :- 7
              (Connect relimate Connector to PIR/IR and J4 connector)
*/
const int ledPin = 13;
int inputPin = 7;
int last_data = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(inputPin, INPUT);
  
}

void loop()
{
  int data = digitalRead(inputPin);
if(data != last_data)
{
  if (data == HIGH)
  {
    digitalWrite(ledPin, HIGH);
    Serial.println("IR Detected");
    delay(500);
   }
  else
  {
  digitalWrite(ledPin, LOW);
  Serial.println("IR Not Detected");
  delay(500);
  }
}
last_data = data;
}
