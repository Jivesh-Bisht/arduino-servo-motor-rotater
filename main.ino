// Add the control pin at 9 or else change the code according the control pin is in the board number


// Include the Servo library 
#include <Servo.h>

Servo servo1, servo2;  // create servo object to control a servo
int ButtonPin = 2;
int counter = 0;
bool pressed = false;
int pos = 0;    // variable to store the servo position

void setup() {
  Serial.begin(115200);
  pinMode(ButtonPin, INPUT_PULLUP);
  servo1.attach(9);  // attaches the servo on pin 9 to the servo object
  servo2.attach(11); // attaches the servo on pin 11 to the servo object
}

void loop() {
  
  bool currentState = digitalRead(ButtonPin);
  
  
  if (currentState==pressed){
    Serial.println("Button pressed");  
    counter++;
    delay(500);
  }

  
  // switch case for handling close  and open gate when the button is pressed
  switch(counter){
    case 1:
      for (pos = 0 ; pos <= 90 ; pos ++ ){
       servo1.write(pos);
       servo2.write(pos);
       delay(15);
       }
      Serial.println("Gate opened");
      break;
     case 2:
      for (pos = 90 ; pos >= 0 ; pos -= 1 ){
      servo1.write(pos);
      servo2.write(pos);
      delay(15);
      }
      Serial.println("Gate closed");  
      break;
     default:
      counter = 0;
      servo1.write(0);
      servo2.write(0);
      break;
      
   
  }
  
  
  
  
  
}


// bruh imagine this code not working 
