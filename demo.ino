//controlling a led brightness with a potentiometer
const int POT=0;  //Pot on analog pin 0 
int led = 3;     //variable to define pin(PWM)
int val = 0;     //store vale form the pot

void setup() 
{  
  pinMode(led, OUTPUT);
  
}

void loop() 
{
  val = analogRead(POT);  
  val = map(val,1,1024,1,255); // to match input with output
  analogWrite(led, val); 
 

}
