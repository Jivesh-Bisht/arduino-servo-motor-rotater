// Add th control pin at 3 or else change the code according the control pin is in the board number


// Include the Servo library 
#include <Servo.h> 

// Change the Servo pin if needed
int servoPin = 3; 

// if there are more than 1 servos to controll then create more servos  
// eg:- Servo Servo1,Servo2,Servo3 etc..
Servo Servo1; 
void setup() { 
   Servo1.attach(servoPin); 
}
void loop(){ 
//this code will trun the servo motor 0 degress and wait 1 seconds or 1000ms
   Servo1.write(0); 
   delay(1000); 
   
//this code will trun the servo motor 90 degress and wait 1 seconds or 1000ms
   Servo1.write(90); 
   delay(1000); 
   
//this code will trun the servo motor 180 degress and wait 1 seconds or 1000ms
   Servo1.write(180); 
   delay(1000); 
}
