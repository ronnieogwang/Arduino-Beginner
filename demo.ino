//set pin as output

int switchPin = 8;// define LED for pin 9
int ledPin = 13;

void setup(){
  //initalize pin as output
  pinMode(ledPin, OUTPUT); //set pin as output
  pinMode(switchPin, INPUT); //set pin as input
 }

 void loop(){
    if(digitalRead(switchPin) == HIGH){
      digitalWrite(ledPin, HIGH);
     }
     else
     {
        digitalWrite(ledPin, LOW);
      }  
  }
