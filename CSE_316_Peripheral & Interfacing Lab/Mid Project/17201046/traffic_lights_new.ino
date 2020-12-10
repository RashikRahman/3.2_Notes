// https://www.youtube.com/channel/UCaXI2PcsTlH5g0et67kdD6g  //
// Traffic Lights //
// By MOHD SOHAIL //

int led1=2;      // Conncet a resistor of 220 ohms with GND terminal 
int led2=3;
int led3=4;
int led4=5;
int led5=6;
int led6=7;
int led7=8;
int green=11;     // connect 220 ohm resistor with LEDs 
int yellow=12;
int red=13;

void setup() {
 pinMode(led1, OUTPUT);
 pinMode(led2, OUTPUT);
 pinMode(led3, OUTPUT);
 pinMode(led4, OUTPUT);
 pinMode(led5, OUTPUT);
 pinMode(led6, OUTPUT);
 pinMode(led7, OUTPUT);
 pinMode(green, OUTPUT);
 pinMode(yellow, OUTPUT);
 pinMode(red, OUTPUT);
 

}

void loop() {
 //9 
 digitalWrite(led1,1);
 digitalWrite(led2,1);
 digitalWrite(led3,1);
 digitalWrite(led4,1);
 digitalWrite(led5,0);
 digitalWrite(led6,1);
 digitalWrite(led7,1);
 digitalWrite(green,0);
 digitalWrite(yellow,0);
 digitalWrite(red,1);
 delay(1000);

 //8
 digitalWrite(led1,1);
 digitalWrite(led2,1);
 digitalWrite(led3,1);
 digitalWrite(led4,1);
 digitalWrite(led5,1);
 digitalWrite(led6,1);
 digitalWrite(led7,1);
 digitalWrite(green,0);
 digitalWrite(yellow,0);
 digitalWrite(red,1);
 delay(1000);

 //7
 digitalWrite(led1,1);
 digitalWrite(led2,1);
 digitalWrite(led3,1);
 digitalWrite(led4,0);
 digitalWrite(led5,0);
 digitalWrite(led6,0);
 digitalWrite(led7,0);
 digitalWrite(green,0);
 digitalWrite(yellow,0);
 digitalWrite(red,1);
 delay(1000);

 //6
  digitalWrite(led1,1);
 digitalWrite(led2,0);
 digitalWrite(led3,1);
 digitalWrite(led4,1);
 digitalWrite(led5,1);
 digitalWrite(led6,1);
 digitalWrite(led7,1);
 digitalWrite(green,0);
 digitalWrite(yellow,0);
 digitalWrite(red,1);
 delay(1000);

 //5
  digitalWrite(led1,1);
 digitalWrite(led2,0);
 digitalWrite(led3,1);
 digitalWrite(led4,1);
 digitalWrite(led5,0);
 digitalWrite(led6,1);
 digitalWrite(led7,1);
 digitalWrite(green,0);
 digitalWrite(yellow,0);
 digitalWrite(red,1);
 delay(1000);

 //4
  digitalWrite(led1,0);
 digitalWrite(led2,1);
 digitalWrite(led3,1);
 digitalWrite(led4,0);
 digitalWrite(led5,0);
 digitalWrite(led6,1);
 digitalWrite(led7,1);
 digitalWrite(green,0);
 digitalWrite(yellow,0);
 digitalWrite(red,1);
 delay(1000);

 //3
  digitalWrite(led1,1);
 digitalWrite(led2,1);
 digitalWrite(led3,1);
 digitalWrite(led4,1);
 digitalWrite(led5,0);
 digitalWrite(led6,0);
 digitalWrite(led7,1);
 digitalWrite(green,0);
 digitalWrite(yellow,0);
 digitalWrite(red,1);
 delay(1000);

 //2
  digitalWrite(led1,1);
 digitalWrite(led2,1);
 digitalWrite(led3,0);
 digitalWrite(led4,1);
 digitalWrite(led5,1);
 digitalWrite(led6,0);
 digitalWrite(led7,1);
 digitalWrite(green,0);
 digitalWrite(yellow,0);
 digitalWrite(red,1);
 delay(1000);

 //1
  digitalWrite(led1,0);
 digitalWrite(led2,1);
 digitalWrite(led3,1);
 digitalWrite(led4,0);
 digitalWrite(led5,0);
 digitalWrite(led6,0);
 digitalWrite(led7,0);
 digitalWrite(green,0);
 digitalWrite(yellow,0);
 digitalWrite(red,1);
 delay(1000);
 
 //0
  digitalWrite(led1,1);
 digitalWrite(led2,1);
 digitalWrite(led3,1);
 digitalWrite(led4,1);
 digitalWrite(led5,1);
 digitalWrite(led6,1);
 digitalWrite(led7,0);
 digitalWrite(green,0);
 digitalWrite(yellow,0);
 digitalWrite(red,1);
 delay(1000);

//  //4
//  digitalWrite(led1,0);
// digitalWrite(led2,1);
// digitalWrite(led3,1);
// digitalWrite(led4,0);
// digitalWrite(led5,0);
// digitalWrite(led6,1);
// digitalWrite(led7,1);
// digitalWrite(green,0);
// digitalWrite(yellow,1);
// digitalWrite(red,0);
// delay(1000);
//
// //3
//  digitalWrite(led1,1);
// digitalWrite(led2,1);
// digitalWrite(led3,1);
// digitalWrite(led4,1);
// digitalWrite(led5,0);
// digitalWrite(led6,0);
// digitalWrite(led7,1);
// digitalWrite(green,0);
// digitalWrite(yellow,1);
// digitalWrite(red,0);
// delay(1000);
//
// //2
//  digitalWrite(led1,1);
// digitalWrite(led2,1);
// digitalWrite(led3,0);
// digitalWrite(led4,1);
// digitalWrite(led5,1);
// digitalWrite(led6,0);
// digitalWrite(led7,1);
// digitalWrite(green,0);
// digitalWrite(yellow,1);
// digitalWrite(red,0);
// delay(1000);

 //1
  digitalWrite(led1,0);
 digitalWrite(led2,1);
 digitalWrite(led3,1);
 digitalWrite(led4,0);
 digitalWrite(led5,0);
 digitalWrite(led6,0);
 digitalWrite(led7,0);
 digitalWrite(green,0);
 digitalWrite(yellow,1);
 digitalWrite(red,0);
 delay(1000);
 
 //0
  digitalWrite(led1,1);
 digitalWrite(led2,1);
 digitalWrite(led3,1);
 digitalWrite(led4,1);
 digitalWrite(led5,1);
 digitalWrite(led6,1);
 digitalWrite(led7,0);
 digitalWrite(green,0);
 digitalWrite(yellow,1);
 digitalWrite(red,0);
 delay(1000);

 //9 
 digitalWrite(led1,1);
 digitalWrite(led2,1);
 digitalWrite(led3,1);
 digitalWrite(led4,1);
 digitalWrite(led5,0);
 digitalWrite(led6,1);
 digitalWrite(led7,1);
 digitalWrite(green,1);
 digitalWrite(yellow,0);
 digitalWrite(red,0);
 delay(1000);

 //8
 digitalWrite(led1,1);
 digitalWrite(led2,1);
 digitalWrite(led3,1);
 digitalWrite(led4,1);
 digitalWrite(led5,1);
 digitalWrite(led6,1);
 digitalWrite(led7,1);
 digitalWrite(green,1);
 digitalWrite(yellow,0);
 digitalWrite(red,0);
 delay(1000);

 //7
 digitalWrite(led1,1);
 digitalWrite(led2,1);
 digitalWrite(led3,1);
 digitalWrite(led4,0);
 digitalWrite(led5,0);
 digitalWrite(led6,0);
 digitalWrite(led7,0);
 digitalWrite(green,1);
 digitalWrite(yellow,0);
 digitalWrite(red,0);
 delay(1000);

 //6
  digitalWrite(led1,1);
 digitalWrite(led2,0);
 digitalWrite(led3,1);
 digitalWrite(led4,1);
 digitalWrite(led5,1);
 digitalWrite(led6,1);
 digitalWrite(led7,1);
 digitalWrite(green,1);
 digitalWrite(yellow,0);
 digitalWrite(red,0);
 delay(1000);

 //5
  digitalWrite(led1,1);
 digitalWrite(led2,0);
 digitalWrite(led3,1);
 digitalWrite(led4,1);
 digitalWrite(led5,0);
 digitalWrite(led6,1);
 digitalWrite(led7,1);
 digitalWrite(green,1);
 digitalWrite(yellow,0);
 digitalWrite(red,0);
 delay(1000);

 //4
  digitalWrite(led1,0);
 digitalWrite(led2,1);
 digitalWrite(led3,1);
 digitalWrite(led4,0);
 digitalWrite(led5,0);
 digitalWrite(led6,1);
 digitalWrite(led7,1);
 digitalWrite(green,1);
 digitalWrite(yellow,0);
 digitalWrite(red,0);
 delay(1000);

 //3
  digitalWrite(led1,1);
 digitalWrite(led2,1);
 digitalWrite(led3,1);
 digitalWrite(led4,1);
 digitalWrite(led5,0);
 digitalWrite(led6,0);
 digitalWrite(led7,1);
 digitalWrite(green,1);
 digitalWrite(yellow,0);
 digitalWrite(red,0);
 delay(1000);

 //2
  digitalWrite(led1,1);
 digitalWrite(led2,1);
 digitalWrite(led3,0);
 digitalWrite(led4,1);
 digitalWrite(led5,1);
 digitalWrite(led6,0);
 digitalWrite(led7,1);
 digitalWrite(green,1);
 digitalWrite(yellow,0);
 digitalWrite(red,0);
 delay(1000);

 //1
  digitalWrite(led1,0);
 digitalWrite(led2,1);
 digitalWrite(led3,1);
 digitalWrite(led4,0);
 digitalWrite(led5,0);
 digitalWrite(led6,0);
 digitalWrite(led7,0);
 digitalWrite(green,1);
 digitalWrite(yellow,0);
 digitalWrite(red,0);
 delay(1000);
 
 //0
  digitalWrite(led1,1);
 digitalWrite(led2,1);
 digitalWrite(led3,1);
 digitalWrite(led4,1);
 digitalWrite(led5,1);
 digitalWrite(led6,1);
 digitalWrite(led7,0);
 digitalWrite(green,1);
 digitalWrite(yellow,0);
 digitalWrite(red,0);
 delay(1000);

 
}
