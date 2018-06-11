//sketch to trun servo thru 180 degrees and back
  #include <Servo.h>   //import servo class

  Servo servo;  // create servo object to control a servo
  int angle = 0;

  void setup(){
    servo.attach(9);
    servo.write(angle);
   
   }

// servo to rotate from 0 to 180 degrees
  void loop(){
    for (angle = 0; angle <= 180; angle += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo.write(angle);              // tell servo to go to position in variable 'pos'
    delay(10);                       // waits 15ms for the servo to reach the position
     }
//servo to rotate from 180 degrees to 0
     for (angle = 180; angle >= 0; angle -= 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo.write(angle);              // tell servo to go to position in variable 'pos'
    delay(10);                       // waits 15ms for the servo to reach the position
     }
   
   }
