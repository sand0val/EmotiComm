// defines pins numbers
const int trigPin = 5;
const int echoPin = 4;
// defines variables
long duration;
int distance;
void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
Serial.begin(9600); // Starts the serial communication
}
void loop() {
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);

// Calculating the distance
distance= duration*0.034/2;

// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);

//Begin filtering through data and seeing what is reasonable
if (distance > 200)
{
delayMicroseconds(0.1);
}
else if (distance >= 50 && distance < 200)
{
Serial.print("Distance: ");
Serial.println(distance);
}
else
{
Serial.print("Distance: ");
Serial.println(distance);
}
}
