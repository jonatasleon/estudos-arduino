#define red 9
#define green 10
#define blue 11

int pins[3];
int i = 0;
int val = 0;
int interval = 100;
int cur, prev = 0;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);

  pins[0] = red;
  pins[1] = green;
  pins[2] = blue;

  Serial.begin(9600);
}

void loop() {
  cur = millis();
  if(cur >= prev + interval) {
    if(val == 255) {
      analogWrite(pins[i], 0);
      i = (i + 1 > 2) ? 0 : i + 1;
      val = 0;   
    }
    analogWrite(pins[i], val+=5);
    Serial.println(pins[i]);
    Serial.println(val);
    Serial.println(i);
    prev = cur;
  }
}


