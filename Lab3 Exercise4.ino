int PinG = 7;
int PinF = 6;
int PinE = 5;
int PinD = 4;
int PinC = 3;
int PinB = 2;
int PinA = 1;
int time = 1500;



void setup() {
  // put your setup code here, to run once:
  pinMode(PinG, OUTPUT);
  pinMode(PinF, OUTPUT);
  pinMode(PinA, OUTPUT);
  pinMode(PinB, OUTPUT);
  pinMode(PinD, OUTPUT);
  pinMode(PinC, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PinA, LOW);
  digitalWrite(PinB, LOW);
  digitalWrite(PinC, LOW);
  digitalWrite(PinD, LOW);
  digitalWrite(PinE, HIGH);
  digitalWrite(PinF, LOW);
  digitalWrite(PinG, LOW);
  delay(time);

  digitalWrite(PinA, LOW);
  digitalWrite(PinB, LOW);
  digitalWrite(PinC, LOW);
  digitalWrite(PinD, LOW);
  digitalWrite(PinE, LOW);
  digitalWrite(PinF, LOW);
  digitalWrite(PinG, LOW);
  delay(time);

  digitalWrite(PinA, LOW);
  digitalWrite(PinB, LOW);
  digitalWrite(PinC, LOW);
  digitalWrite(PinD, HIGH);
  digitalWrite(PinE, HIGH);
  digitalWrite(PinF, HIGH);
  digitalWrite(PinG, HIGH);
  delay(time);

  digitalWrite(PinA, LOW);
  digitalWrite(PinB, HIGH);
  digitalWrite(PinC, LOW);
  digitalWrite(PinD, LOW);
  digitalWrite(PinE, LOW);
  digitalWrite(PinF, LOW);
  digitalWrite(PinG, LOW);
  delay(time);

  digitalWrite(PinA, LOW);
  digitalWrite(PinB, HIGH);
  digitalWrite(PinC, LOW);
  digitalWrite(PinD, LOW);
  digitalWrite(PinE, HIGH);
  digitalWrite(PinF, LOW);
  digitalWrite(PinG, LOW);
  delay(time);

  digitalWrite(PinA, HIGH);
  digitalWrite(PinB, LOW);
  digitalWrite(PinC, LOW);
  digitalWrite(PinD, HIGH);
  digitalWrite(PinE, HIGH);
  digitalWrite(PinF, LOW);
  digitalWrite(PinG, LOW);
  delay(time);

  digitalWrite(PinA, LOW);
  digitalWrite(PinB, LOW);
  digitalWrite(PinC, LOW);
  digitalWrite(PinD, LOW);
  digitalWrite(PinE, HIGH);
  digitalWrite(PinF, HIGH);
  digitalWrite(PinG, LOW);
  delay(time);

  digitalWrite(PinA, LOW);
  digitalWrite(PinB, LOW);
  digitalWrite(PinC, HIGH);
  digitalWrite(PinD, LOW);
  digitalWrite(PinE, LOW);
  digitalWrite(PinF, HIGH);
  digitalWrite(PinG, LOW);
  delay(time);

  digitalWrite(PinA, HIGH);
  digitalWrite(PinB, HIGH);
  digitalWrite(PinC, HIGH);
  digitalWrite(PinD, HIGH);
  digitalWrite(PinE, LOW);
  digitalWrite(PinF, LOW);
  digitalWrite(PinG, HIGH);
  delay(time);

}