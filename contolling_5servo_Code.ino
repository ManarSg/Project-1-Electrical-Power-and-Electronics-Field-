#include <Servo.h> 
#define potPin A0 
int angle = 0; 
int reading = 0; 
Servo servo1; // create a new object of the servo class
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;



void setup() {
servo1.attach(9);
servo2.attach(10);
servo3.attach(11);
servo4.attach(12);
servo5.attach(13);
}


void loop() {
  reading = analogRead(potPin);
  angle = map(reading, 0, 1023, 0, 360);
  servo1.write(0);
  
  
  if (angle <90){
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  servo5.write(0);
  delay(1000);
 }
  
  else if (angle >=90 && angle < 180){
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  servo5.write(90);
  delay(1000);
 }
  
  else if(angle >=180 && angle < 270){
  servo1.write(180);
  servo2.write(180);
  servo3.write(180);
  servo4.write(180);
  servo5.write(180);
    delay(1000); 
  }
  
  else if(angle >=270 && angle < 360){
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  servo5.write(90);
    delay(1000); 
  }
  
   else if( angle == 360){
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  servo5.write(0);
    delay(1000); 
  }
  
}
