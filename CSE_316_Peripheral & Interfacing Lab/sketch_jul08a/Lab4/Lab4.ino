void Transfer(int x);
void Not(int x);

void AND(int x, int y);
void OR(int x, int y);

void setup() {
  // put your setup code here, to run once:
  //setup for task 2
  pinMode(1, INPUT); //set the input pin
  pinMode(2, INPUT); //set the switch or control pin for transfer, not operation
  pinMode(13, OUTPUT); //set the output pin

  //setup for task 3
  pinMode(4, INPUT); //1st input pin
  pinMode(5, INPUT); //2nd input pin
  pinMode(6, INPUT); //set control pin for AND, OR operation
  pinMode(12, OUTPUT); //output pin for these operation.

}

void loop() {
  //  //task 2
  //  int value = digitalRead(1);
  //  int control = digitalRead(2);
  //  if (control == HIGH)
  //    Transfer(value);
  //  else
  //    Not(value);
  
  //task3
  int value1 = digitalRead(4);
  int value2 = digitalRead(5);
  int control2 = digitalRead(6);

  if (control2 == HIGH)
    AND(value1, value2);
  else
    OR(value1, value2);
}


void AND(int x, int y) {
  if (x == HIGH && y == HIGH)
    digitalWrite(12, HIGH);
  else
    digitalWrite(12, LOW);
}

void OR(int x, int y) {
  if (x == LOW && y == LOW)
    digitalWrite(12, LOW);
  else
    digitalWrite(12, HIGH);
}


void Transfer(int x) {
  if (x == HIGH)
    digitalWrite(13, HIGH);
  else
    digitalWrite(13, LOW);
}

void Not(int x) {
  if (x == HIGH)
    digitalWrite(13, LOW);
  else
    digitalWrite(13, HIGH);
}
