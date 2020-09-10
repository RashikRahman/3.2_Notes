void setup() {
  //There are 14 digital pins and  6 analog pins in arduino.
  //This pin numbers must be declared to work with arduino and these pin numbers are declared in this section.
  pinMode(13,OUTPUT); //(pin number, status [OUTPUT or INPUT]
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(13,HIGH);  //(pin number, Mode=[HIGH=1, 5v or LOW=0, 0v])
  delay(1000);
  digitalWrite(13,LOW);  //(pin number, Mode=[HIGH=1, 5v or LOW=0, 0v])
  delay(1000);
  

}
