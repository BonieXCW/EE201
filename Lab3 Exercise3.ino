int PinG = 13;
int PinF = 12;
int PinA = 11;
int PinB = 10;
int PinE = 7;
int PinD = 6;
int PinC = 5;
int PinDP = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(PinG, OUTPUT);
  pinMode(PinF, OUTPUT);
  pinMode(PinA, OUTPUT);
  pinMode(PinB, OUTPUT);
  pinMode(PinD, OUTPUT);
  pinMode(PinC, OUTPUT);
  pinMode(PinDP, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PinG, HIGH);
  digitalWrite(PinA, HIGH);
  digitalWrite(PinB, HIGH);
  digitalWrite(PinF, HIGH);
  digitalWrite(PinC, HIGH);
  digitalWrite(PinD, HIGH);
  delay(1000);
  digitalWrite(PinG, LOW);
  digitalWrite(PinA, LOW);
  digitalWrite(PinB, LOW);
  digitalWrite(PinF, LOW);
  digitalWrite(PinC, LOW);
  digitalWrite(PinD, LOW);
  delay(1000);
}
