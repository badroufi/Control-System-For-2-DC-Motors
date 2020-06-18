# 1 "C:\\Users\\bader\\OneDrive\\Documents\\EE\\Summer Training\\Tasks\\Arduino Uno _ 2-DC Motors\\Arduino_Code\\Arduino_Code.ino"

//Motor A
int EnA = 9 ; // we choosed Pin9 because it support (PWM)to enable us to controol the speed of the motor if wanted
int Inp1 = 8 ;
int Inp2 = 7 ;

//Motor B 
int EnB = 6 ; // we choosed Pin6 because it support (PWM)to enable us to controol the speed of the motor if wanted
int Inp3 = 5 ;
int Inp4 = 4 ;




void setup() {
  // setting all used pins for the motors as outputs
  pinMode(EnA, 0x1);
  pinMode(Inp1, 0x1);
  pinMode(Inp2, 0x1);
  pinMode(EnB, 0x1);
  pinMode(Inp3, 0x1);
  pinMode(Inp4, 0x1);
}






void loop() {
   // Turn on both Motors A & B

  digitalWrite(EnA, 0x1);
  digitalWrite(EnB, 0x1);


  // Turn Both motors A & B On on Clockwise Direction for 3 Seconds

  // Motor A
  digitalWrite(Inp1, 0x1);
  digitalWrite(Inp2, 0x0);


  // Motor B
  digitalWrite(Inp3, 0x1);
  digitalWrite(Inp4, 0x0);

   delay(3000);

  // Changing both Motors A & B directions to  Counterclockwise for 3 seconds

  // Motor A
  digitalWrite(Inp2, 0x1);
  digitalWrite(Inp1, 0x0);


  // Motor B
  digitalWrite(Inp4, 0x1);
  digitalWrite(Inp3, 0x0);

   delay(3000);

   // Motor A Clockwise ~ Motor B Counterclockwise for 3 seconds


  // Motor A
  digitalWrite(Inp1, 0x1);
  digitalWrite(Inp2, 0x0);


  // Motor B
  digitalWrite(Inp4, 0x1);
  digitalWrite(Inp3, 0x0);

   delay(3000);

  // Motor B Clockwise ~ Motor A Counterclockwise for 3 seconds

  // Motor A
  digitalWrite(Inp2, 0x1);
  digitalWrite(Inp1, 0x0);


  // Motor B
  digitalWrite(Inp3, 0x1);
  digitalWrite(Inp4, 0x0);

   delay(3000);


   // Turn off both Motors A & B for 2 seconds


  digitalWrite(EnA, 0x0);
  digitalWrite(EnB, 0x0);

   delay(2000);
}
