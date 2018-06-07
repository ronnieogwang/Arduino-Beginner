//controlling a led brightness with a potentiometer
const int POT=0;  //Pot on analog pin 0 
int led1 = 3;     //variable to define pin(PWM)
int led2 = 6;     //variable to define pin(PWM)
int val = 0;     //store vale form the pot
int valx = 0;

void setup() 
{  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  
}

void loop() 
{
  val = analogRead(POT);  
  valx = analogRead(POT);
  val = map(val,1,1024,1,255); // to match input with output
  valx = map(valx,1,1024,255,1); // to match input with output in inverse
  analogWrite(led1, val); 
  analogWrite(led2, valx);
 

}
