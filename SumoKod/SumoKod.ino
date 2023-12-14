// Motor A connections, Right motor
int enA = 13;
int in1 = 14; //Forward
int in2 = 27; //Backward

// Motor B connections, Left motor
int enB = 12;
int in3 = 16; //Forward
int in4 = 17; //Backward


void setup() 
{
  // put your setup code here, to run once:
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
  // put your main code here, to run repeatedly:

 spin();
}

void spin()
{

}
