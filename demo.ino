//declare btn variables
int redled = 5;
int greenled = 6;
int yellowled = 7;
int btn = 3;

//state variables
int state = 0; //int to hold current stste
int last = 0; //int to hold last state
int btnState =0; //itneger to hold btn state

void setup() {
  //direction of pins i.e inputs or outputs
  pinMode (redled, OUTPUT);
  pinMode (greenled, OUTPUT);
  pinMode (yellowled, OUTPUT);
  pinMode(btn, INPUT);

  //initial states set to off
  digitalWrite(redled, 0);
  digitalWrite (greenled, 0);
  digitalWrite (yellowled, 0);
  
}

void loop() {
    //debouncing routine
    btnState = digitalRead(btn);  //read state of the button
    if(btnState == 1){            //if it has been pressed
      delay(50);                  //delay to remove oscillations
      btnState = digitalRead(btn); //read state of the button again
      if(btnState == 0){           // if it is zero consider one state
          state = last + 1;
       }     
     }
     else{                        //if it has not been pressed
      delay(100);                  //delay to remove oscillations
     }

     switch(state){
        case 1:
           digitalWrite(redled, 1);
           digitalWrite(greenled, 0);
           digitalWrite(yellowled, 0);
           last = state;
           break;
        case 2:
           digitalWrite(redled, 0);
           digitalWrite(greenled, 1);
           digitalWrite(yellowled, 0);
           last = state;
           break;
         case 3:
           digitalWrite(redled, 0);
           digitalWrite(greenled, 0);
           digitalWrite(yellowled, 1);
           last = state;
           break;
         default:          //if state >3
           digitalWrite(redled, 0);
           digitalWrite(greenled, 0);
           digitalWrite(yellowled, 0);
           last = 0;
           break;
     }
    
}
