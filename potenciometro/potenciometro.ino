
int led = 9;
int pot = A0;
int val;

void setup() {
  pinMode(led, OUTPUT);  
}

void loop() {
  val = analogRead(pot);
  analogWrite(led, val);
}
