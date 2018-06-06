//set pin as output

int switchPin = 8;// define LED for pin 9
int ledPin = 3;
boolean lastBtn = LOW;// keeps track of btn in previous loop
int ledLevel  = 0; //current state of LED and we toggle it
boolean currentBtn = LOW;

void setup(){
  //initalize pin as output
  pinMode(ledPin, OUTPUT); //set pin as output
  pinMode(switchPin, INPUT); //set pin as input
 }

 boolean debounce(boolean last){
  boolean current = digitalRead(switchPin);
  if(last != current){
    delay(5);
    current = digitalRead(switchPin);
    }
    return current;
  }

 void loop(){
      currentBtn = debounce(lastBtn);
      if(lastBtn  == LOW  && currentBtn == HIGH){
        ledLevel = ledLevel + 45 ;
       }
        lastBtn = currentBtn;
      if(ledLevel > 255){ledLevel = 0;}
      analogWrite(ledPin,ledLevel);
  }
