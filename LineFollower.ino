//Analog Line Sensor Module with 3 sensors
const int sensor1 = A0;
const int sensor2 = A3;
const int sensor3 = A5;
int s1=0;
int s2=0;
int s3=0;

//DC motor Left and Right
const int LeftMotor1      = 8;  
const int LeftMotor2      = 10; 
const int RightMotor1      = 12;  
const int RightMotor2      = 13; 

void setup() {
 pinMode(LeftMotor1,OUTPUT);
 pinMode(LeftMotor2,OUTPUT);
 pinMode(RightMotor1,OUTPUT);
 pinMode(RightMotor2,OUTPUT);
 pinMode(sensor1,INPUT);
 pinMode(sensor2,INPUT);
 pinMode(sensor3,INPUT);
 }

void loop() {

 //Go Forward 
 if (analogRead(sensor2)>= 500 & analogRead(sensor1)<= 500 & analogRead(sensor3)<= 500)
 {  digitalWrite (LeftMotor1,HIGH);
    digitalWrite(LeftMotor2,LOW);                       
    digitalWrite (RightMotor1,HIGH);
    digitalWrite(RightMotor2,LOW);
 }

 //Turn Right
 if (analogRead(sensor1)>= 500 & analogRead(sensor2)<= 500 & analogRead(sensor3)<= 500)
 {  digitalWrite (LeftMotor1,HIGH);
    digitalWrite(LeftMotor2,LOW);                       
    digitalWrite (RightMotor1,LOW);
    digitalWrite(RightMotor2,HIGH);
 }

 //Turn Left
 if (analogRead(sensor3)>= 500 & analogRead(sensor1)<= 500 & analogRead(sensor2)<= 500)
 {  digitalWrite (LeftMotor1,LOW);
    digitalWrite(LeftMotor2,HIGH);                       
    digitalWrite (RightMotor1,HIGH);
    digitalWrite(RightMotor2,LOW);
 }

//Stop
 if (analogRead(sensor3)<= 500 & analogRead(sensor1)<= 500 & analogRead(sensor2)<= 500)
 {  digitalWrite (LeftMotor1,LOW);
    digitalWrite(LeftMotor2,LOW);                       
    digitalWrite (RightMotor1,LOW);
    digitalWrite(RightMotor2,LOW);
 }
 
 
 }
