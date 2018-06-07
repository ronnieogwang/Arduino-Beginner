int led = 9;
int btn = 4;
void setup() {
  pinMode (led, OUTPUT);
  pinMode(btn, INPUT);
  
}

void loop() {
 if(digitalRead(btn) == HIGH){
 digitalWrite (led, 1);
 }
 else{
 digitalWrite (led, 0);
 }

   
    
}
