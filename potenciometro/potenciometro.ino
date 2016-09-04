
#define treze 13

#define led 9
#define pot A0

int val;

int interval = 100;
int cur, prev = 0;
int valLed = LOW;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(treze, OUTPUT);
}

void loop() {
  
  val = analogRead(pot);
  val = map(val, 0, 1023, 0, 255);
  analogWrite(led, val);
  
  cur = millis();
  if(cur >= prev + interval) {
      valLed = (valLed == HIGH) ? LOW : HIGH;
      digitalWrite(treze, valLed);
      prev = cur;
  }
}
