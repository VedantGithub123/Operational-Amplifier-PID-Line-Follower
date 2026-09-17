const int lSpeed = A2;
const int rSpeed = A3;

const int lOut = 10;
const int rOut = 9;

void setup() {
  Serial.begin(9600);

  pinMode(lSpeed, INPUT);
  pinMode(rSpeed, INPUT);

  pinMode(lOut, OUTPUT);
  pinMode(rOut, OUTPUT);
}

void loop() {
  analogWrite(lOut, analogRead(lSpeed)/4/3);
  analogWrite(rOut, analogRead(rSpeed)/4/3);
}