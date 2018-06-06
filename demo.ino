//set pin as output

const int LED = 9;// define LED for pin 9

void setup(){
  //initalize pin as output
  pinMode(LED, OUTPUT); //set pin as output
 }

 void loop(){
  for (int i=0; i<=255; i++)
  {
    analogWrite(LED, i);
    delay(10);
   }
   for (int i=255; i>=0; i--)
  {
    analogWrite(LED, i);
    delay(10);
   }
  }
