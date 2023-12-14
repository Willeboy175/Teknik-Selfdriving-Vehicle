// Motor A connections, Right motor
int enA = 14;
int in1 = 27; //Forward
int in2 = 16; //Backward

// Motor B connections, Left motor
int enB = 26;
int in3 = 17; //Forward
int in4 = 25; //Backward

#include <HCSR04.h>

UltraSonicDistanceSensor distanceSensor(12, 13);  // Initialize sensor that uses digital pins 13 and 12.

int updateSpeed = 100; //Sets how fast sensor updates in milliseconds.
int updateRange = 30; //At what distance sensor should trigger. 

void setup() {
  Serial.begin(9600);  // We initialize serial connection so that we could print values from sensor.
  
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

void loop() {
  // Every set miliseconds, do a measurement using the sensor and print the distance in centimeters.
  Serial.println(distanceSensor.measureDistanceCm());
  float sensorValue = distanceSensor.measureDistanceCm();

  if(sensorValue <= updateRange){
    forward();
  }
  else{
    hardRight();
  }

  delay(updateSpeed);

	
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

