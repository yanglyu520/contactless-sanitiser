/*==========================================================================  
by "Yang Lyu"
==========================================================================*/

const int servo1 = 9;     
const int trigPin = 10;  
const int echoPin = 11;  

long duration;
int distance;

#include <Servo.h>

Servo myservo1;    // create servo object to control a servo

void setup() {
  pinMode(trigPin, OUTPUT);    
  pinMode(echoPin, INPUT);    
  myservo1.attach(servo1);     // attaches the servo on pin 9 
  myservo1.write(0);         
  Serial.begin(9600);      
}

void loop() {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    
    // Sets the trigPin on HIGH state for 10 micro seconds
    
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    
    // Reads the echoPin
    duration = pulseIn(echoPin, HIGH);
    
    // Calculating the distance
    distance= duration*0.034/2;
    
    // Prints the distance on the Serial Monitor
    Serial.print("Distance: ");
    Serial.println(distance);
    
    if(distance<10)
    { //Check distance is less than 10cm 
       myservo1.write(00);  
       delay(100);
       myservo1.write(90);
       delay(100);
       myservo1.write(135);
       delay(100);
       myservo1.write(120); 
       delay(1000);
       myservo1.write(00); 
       delay(2500);   
    }                 
}
