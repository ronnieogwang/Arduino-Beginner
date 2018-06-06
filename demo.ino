int redled = 8;
int yellowled = 10;
int greenled = 12;



void setup() {
   pinMode (redled, OUTPUT);
  pinMode (yellowled, OUTPUT);
  pinMode (greenled, OUTPUT);

}

void loop() {
  digitalWrite(redled, 1);
  delay (300);
  digitalWrite(redled, 0);
  digitalWrite(yellowled, 1);
  delay (300);
  digitalWrite(yellowled, 0);
  digitalWrite(greenled, 1);
    delay (300);
  digitalWrite(greenled, 0);
    digitalWrite(yellowled, 1);
  delay (300);
  digitalWrite(yellowled, 0);



}
