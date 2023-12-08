// Motor A connections, Right motor
int enA = 14;
int in1 = 27; //Forward
int in2 = 16; //Backward

// Motor B connections, Left motor
int enB = 26;
int in3 = 17; //Forward
int in4 = 25; //Backward

//IR sensor connections
int output1 = 12;
int output2 = 13;
int output3 = 5;
int output4 = 23;
int output5 = 19;

void setup() {
	// Set all the motor control pins to outputs
	pinMode(enA, OUTPUT);
	pinMode(enB, OUTPUT);
	pinMode(in1, OUTPUT);
	pinMode(in2, OUTPUT);
	pinMode(in3, OUTPUT);
	pinMode(in4, OUTPUT);
	
	// Turn off motors - Initial state
	digitalWrite(in1, LOW);
	digitalWrite(in2, LOW);
	digitalWrite(in3, LOW);
	digitalWrite(in4, LOW);

  digitalWrite(enA, HIGH);
  digitalWrite(enB, HIGH);
}

void loop() 
{
	irSensor();

  delay(50);
}

void irSensor()
{
  int sensorValue1 = digitalRead(output1); 
  int sensorValue2 = digitalRead(output2); 
  int sensorValue3 = digitalRead(output3); 
  int sensorValue4 = digitalRead(output4); 
  int sensorValue5 = digitalRead(output5);

  if(sensorValue1 == 1)
  {
    Serial.println("Hard left");
    hardLeft();
  }
  if(sensorValue2 == 1)
  {
    Serial.println("Left");
    left();
  }
  if(sensorValue3 == 1)
  {
    Serial.println("Forward");
    forward();
  }
  if(sensorValue4 == 1)
  {
    Serial.println("Right");
    right();
  }
  if(sensorValue5 == 1)
  {
    Serial.println("Hard right");
    hardRight();
  }
}

void forward()
{
  digitalWrite(in1, HIGH);
	digitalWrite(in2, LOW);
	digitalWrite(in3, HIGH);
	digitalWrite(in4, LOW);
}

void backward()
{
  digitalWrite(in1, LOW);
	digitalWrite(in2, HIGH);
	digitalWrite(in3, LOW);
	digitalWrite(in4, HIGH);
}

void left()
{
  digitalWrite(in1, HIGH);
	digitalWrite(in2, LOW);
	digitalWrite(in3, LOW);
	digitalWrite(in4, LOW);
}

void hardLeft()
{
  digitalWrite(in1, HIGH);
	digitalWrite(in2, LOW);
	digitalWrite(in3, LOW);
	digitalWrite(in4, HIGH);
}

void right()
{
  digitalWrite(in1, LOW);
	digitalWrite(in2, LOW);
	digitalWrite(in3, HIGH);
	digitalWrite(in4, LOW);
}

void hardRight()
{
  digitalWrite(in1, LOW);
	digitalWrite(in2, HIGH);
	digitalWrite(in3, HIGH);
	digitalWrite(in4, LOW);
}

