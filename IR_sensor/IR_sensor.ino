
int output1 = 13;
int output2 = 12;
int output3 = 14;
int output4 = 27;
int output5 = 16;


// the setup routine runs once when you press reset:
void setup()
{
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop()
{
  int sensorValue1 = digitalRead(output1); 
  int sensorValue2 = digitalRead(output2); 
  int sensorValue3 = digitalRead(output3); 
  int sensorValue4 = digitalRead(output4); 
  int sensorValue5 = digitalRead(output5);

  if(sensorValue1 == 1)
  {
    Serial.println("Hard left");
  }
  if(sensorValue2 == 1)
  {
    Serial.println("Left");
  }
  if(sensorValue3 == 1)
  {
    Serial.println("Forward");
  }
  if(sensorValue4 == 1)
  {
    Serial.println("Right");
  }
  if(sensorValue5 == 1)
  {
    Serial.println("Hard right");
  }

  delay(100);
}

