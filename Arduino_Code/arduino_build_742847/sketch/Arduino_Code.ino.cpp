#include <Arduino.h>
#line 1 "C:\\Users\\bader\\OneDrive\\Documents\\EE\\Summer Training\\Tasks\\Arduino Uno _ 2-DC Motors\\Arduino_Code\\Arduino_Code.ino"

//Motor A
int EnA = 9 ; // we choosed Pin9 because it support (PWM)to enable us to controol the speed of the motor if wanted
int Inp1 = 8 ;
int Inp2 = 7 ;

//Motor B 
int EnB = 6 ; // we choosed Pin6 because it support (PWM)to enable us to controol the speed of the motor if wanted
int Inp3 = 5 ;
int Inp4 = 4 ;




#line 15 "C:\\Users\\bader\\OneDrive\\Documents\\EE\\Summer Training\\Tasks\\Arduino Uno _ 2-DC Motors\\Arduino_Code\\Arduino_Code.ino"
void setup();
#line 30 "C:\\Users\\bader\\OneDrive\\Documents\\EE\\Summer Training\\Tasks\\Arduino Uno _ 2-DC Motors\\Arduino_Code\\Arduino_Code.ino"
void loop();
#line 15 "C:\\Users\\bader\\OneDrive\\Documents\\EE\\Summer Training\\Tasks\\Arduino Uno _ 2-DC Motors\\Arduino_Code\\Arduino_Code.ino"
void setup() {
  // setting all used pins for the motors as outputs
  pinMode(EnA, OUTPUT);
  pinMode(Inp1, OUTPUT);
  pinMode(Inp2, OUTPUT);
  pinMode(EnB, OUTPUT);
  pinMode(Inp3, OUTPUT);
  pinMode(Inp4, OUTPUT);
}





  
void loop() {
   // Turn on both Motors A & B

  digitalWrite(EnA, HIGH);
  digitalWrite(EnB, HIGH);

  
  // Turn Both motors A & B On on Clockwise Direction for 3 Seconds
  
  // Motor A
  digitalWrite(Inp1, HIGH);
  digitalWrite(Inp2, LOW);

  
  // Motor B
  digitalWrite(Inp3, HIGH);
  digitalWrite(Inp4, LOW);

   delay(3000);

  // Changing both Motors A & B directions to  Counterclockwise for 3 seconds

  // Motor A
  digitalWrite(Inp2, HIGH);
  digitalWrite(Inp1, LOW);

  
  // Motor B
  digitalWrite(Inp4, HIGH);
  digitalWrite(Inp3, LOW);

   delay(3000);

   // Motor A Clockwise ~ Motor B Counterclockwise for 3 seconds

   
  // Motor A
  digitalWrite(Inp1, HIGH);
  digitalWrite(Inp2, LOW);

  
  // Motor B
  digitalWrite(Inp4, HIGH);
  digitalWrite(Inp3, LOW);

   delay(3000);

  // Motor B Clockwise ~ Motor A Counterclockwise for 3 seconds

  // Motor A
  digitalWrite(Inp2, HIGH);
  digitalWrite(Inp1, LOW);

  
  // Motor B
  digitalWrite(Inp3, HIGH);
  digitalWrite(Inp4, LOW);

   delay(3000);


   // Turn off both Motors A & B for 2 seconds

   
  digitalWrite(EnA, LOW);
  digitalWrite(EnB, LOW);
  
   delay(2000);
}

