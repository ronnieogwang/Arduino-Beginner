//sketch to control servo with two buttons moving in opposite direction

#include <Servo.h>  // add servo library
#define sw1_pin 5   //define switch pins
#define sw2_pin 6
Servo myservo;  // create servo object to control a servo


volatile boolean sw1 = false;
volatile boolean sw2 = false;

uint8_t sw1ButtonState = 0;
uint8_t sw2ButtonState = 0;

uint8_t lastsw1ButtonState = 0;
uint8_t lastsw2ButtonState = 0;


void setup() {
  Serial.begin(9600);
  pinMode(sw1_pin, INPUT_PULLUP);
  pinMode(sw2_pin, INPUT_PULLUP);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
 
     checkIfSw1ButtonIsPressed();
     checkIfSw2ButtonIsPressed();

     if( sw1){
      Serial.println("sw1");
       sw1 = false;
       myservo.write(20);
       delay(15);
     }
     else if( sw2){
      Serial.println("sw2");
       sw2 = false;
       myservo.write(170);
       delay(15);
     }

                             // waits for the servo to get there
}

void checkIfSw1ButtonIsPressed()
{
    sw1ButtonState   = digitalRead(sw1_pin);
  
    if (sw1ButtonState != lastsw1ButtonState)
  {
    if ( sw1ButtonState == 0)
    {
      sw1=true;
    }
    delay(50);
  }
   lastsw1ButtonState = sw1ButtonState;
 }

void checkIfSw2ButtonIsPressed()
{
    sw2ButtonState   = digitalRead(sw2_pin);
  
    if (sw2ButtonState != lastsw2ButtonState)
  {
    if ( sw2ButtonState == 0)
    {
      sw2=true;
    }
    delay(50);
  }
   lastsw2ButtonState = sw2ButtonState;
 }
