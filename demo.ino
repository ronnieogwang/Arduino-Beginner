//my first program

int ledPin = 13;

void setup(){
  //initalize pin as output
  pinMode(ledPin, OUTPUT);
  
 }

 void loop(){
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
  
  }
