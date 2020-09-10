int led=11;
void setup() {
  //  pinMode(led,OUTPUT);//(pin number, Value)
  Serial.begin(9600);
  Serial.print(78);
  Serial.println();
  Serial.print(1.45678899);
  Serial.println();
  Serial.print('A');
  Serial.println();
  Serial.print("Hello World");
  Serial.println();
  Serial.print(10,BIN);
  Serial.println();
  Serial.print(10,HEX);
  Serial.println();
  Serial.print(10,OCT);
  Serial.println();
}

void loop() {
  //  for(int fade_value=0; fade_value<=255;fade_value+=5)
    //  {
    //    analogWrite(led,fade_value);
    //    delay(1000);
    //  }
//  for(int fade_value1=255;fade_value1>=0;fade_value1-=5)
    //  {
    //    analogWrite(led,fade_value1);
    //    delay(1000);
    //  }
}
