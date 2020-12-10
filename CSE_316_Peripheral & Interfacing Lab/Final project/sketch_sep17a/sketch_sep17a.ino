#include <LiquidCrystal.h>

#define selectorA A1
#define selectorB A2
#define selectorC A3
#define motorin1 3
#define motorin2 5
#define motorin3 6
#define motorin4 9

LiquidCrystal lcd(2, 4, 7, 8, 12, 13);
int nilai[6];

void setup()
{
  pinMode(selectorA,OUTPUT);
  pinMode(selectorB,OUTPUT);
  pinMode(selectorC,OUTPUT);
  pinMode(motorin1,OUTPUT);
  pinMode(motorin2,OUTPUT);
  pinMode(motorin3,OUTPUT);
  pinMode(motorin4,OUTPUT);
  lcd.begin(16,2);
  Serial.begin(9600);
} 

void loop()
{
    robot_move();
}

void selector(int c,int b,int a)
{
  digitalWrite (selectorA,a);
  digitalWrite (selectorB,b);
  digitalWrite (selectorC,c);
}
  
    
void sensor()
{
  selector(0,0,0);
  nilai[1]=analogRead(A0);
  
  if(nilai[1]>=512)
  {
    nilai[1]=1;
  }
  else if(nilai[1]<=512)
  {
    nilai[1]=0;
    }
    
  selector(0,0,1);
  nilai[2]=analogRead(A0);
  
  if(nilai[2]>=512)
  {
    nilai[2]=1;
  }
  else if(nilai[2]<=512)
  {
    nilai[2]=0;
    }
  selector(0,1,0);
  nilai[3]=analogRead(A0);
  
  if(nilai[3]>=512)
  {
    nilai[3]=1;
  }
  else if(nilai[3]<=512)
  {
    nilai[3]=0;
    }
  selector(0,1,1);
  nilai[4]=analogRead(A0);
  
  if(nilai[4]>=512)
  {
    nilai[4]=1;
  }
  else if(nilai[4]<=512)
  {
    nilai[4]=0;
    }
  selector(1,0,0);
  nilai[5]=analogRead(A0);
  
  if(nilai[5]>=512)
  {
    nilai[5]=1;
  }
  else if(nilai[5]<=512)
  {
    nilai[5]=0;
    }
  selector(1,0,1);
  nilai[6]=analogRead(A0);
  if(nilai[6]>=512)
  {
    nilai[6]=1;
  }
  else if(nilai[6]<=512)
  {
    nilai[6]=0;
    }
    
}
 


 void LCD_display()
{
  sensor();
  lcd.clear();
  lcd.setCursor(0,0); //0th Column; 0th row
  lcd.print("Sensor:");
  lcd.setCursor(8,0); //8th Column; 0th row
  lcd.print(nilai[1]);
  lcd.setCursor(9,0); //9th Column; 0th row
  lcd.print(nilai[2]);
  lcd.setCursor(10,0); //10th Column; 0th row
  lcd.print(nilai[3]);
  lcd.setCursor(11,0); //11th Column; 0th row
  lcd.print(nilai[4]);
  lcd.setCursor(12,0); //12th Column; 0th row
  lcd.print(nilai[5]);
  lcd.setCursor(13,0); //13th Column; 0th row
  lcd.print(nilai[6]);
  delay(100);
}
 




void motor (int kir, int kan)
{
  if (kir < 0){ // If less than 0 then move in reverse
  digitalWrite(motorin3, 1); // it is 1 to rotate the motor anticlockwise
  analogWrite(motorin4, kir+255); //speed of the motor
  }
  else if (kir>=0){ // If greater than equal to 0 then move straight
  digitalWrite(motorin3, 0);// it is 0 to rotate the motor clockwise
  analogWrite(motorin4, kir);//speed of the motor
  }

  if (kan < 0){  // If less than 0 then move in reverse
  digitalWrite(motorin1, 1);// it is 1 to rotate the motor anticlockwise
  analogWrite(motorin2, kan+255);//speed of the motor
  }
  else if (kan>=0){// If greater than equal to 0 then move straight
  digitalWrite(motorin1, 0);// it is 0 to rotate the motor clockwise
  analogWrite(motorin2, kan);//speed of the motor
  }
}


void Forward (){
  motor(255,255);
}
void Backward (){
  motor(-255,-255);
}
void Turn_left_slow(){
  motor(200,255);
}
void Turn_left_fast (){
  motor(100,255);
}
void Face_left (){
  motor(0,255);
}
void Turn_right_slow(){
  motor(255,200);
}
void Turn_right_fast (){
  motor(255,100); // right wheel speed is less compared to Turn_right_slow func cause it'll make the robot turn right faster
}
void Face_right (){
  motor(255,0);
}

void robot_move()
{
  sensor();
  LCD_display();

  if ((nilai[1]==0) && (nilai[2]== 0) && (nilai[3]==1) && (nilai[4]==1) && (nilai[5]==0) && (nilai[6]==0)){
    Forward(); 
    lcd.setCursor(0,1); //0th Column; 1th row
    lcd.print("Forward");
    delay(1000);
  }

  else if ((nilai[1]==0) && (nilai[2]== 1) && (nilai[3]==1) && (nilai[4]==0) && (nilai[5]==0) && (nilai[6]==0)){
    Turn_left_slow();
    lcd.setCursor(0,1); //0th Column; 1th row
    lcd.print("Turn left slow");
    delay(1000); 
  }
  else if ((nilai[1]==1) && (nilai[2]== 1) && (nilai[3]==0) && (nilai[4]==0) && (nilai[5]==0) && (nilai[6]==0)){
    Turn_left_fast(); 
    lcd.setCursor(0,1); //0th Column; 1th row
    lcd.print("Turn left fast");
    delay(1000);
  }
  else if ((nilai[1]==1) && (nilai[2]== 0) && (nilai[3]==0) && (nilai[4]==0) && (nilai[5]==0) && (nilai[6]==0)){
    Face_left(); 
    lcd.setCursor(0,1); //0th Column; 1th row
    lcd.print("Face left");
    delay(1000);
  }
  else if ((nilai[1]==0) && (nilai[2]== 0) && (nilai[3]==0) && (nilai[4]==1) && (nilai[5]==1) && (nilai[6]==0)){
    Turn_right_slow(); 
    lcd.setCursor(0,1); //0th Column; 1th row
    lcd.print("Turn right slow");
    delay(1000);
  }
  else if ((nilai[1]==0) && (nilai[2]== 0) && (nilai[3]==0) && (nilai[4]==0) && (nilai[5]==1) && (nilai[6]==1)){
    Turn_right_fast();
    lcd.setCursor(0,1); //0th Column; 1th row
    lcd.print("Turn right fast");
    delay(1000); 
  }
  else if ((nilai[1]==0) && (nilai[2]== 0) && (nilai[3]==0) && (nilai[4]==0) && (nilai[5]==0) && (nilai[6]==1)){
    Face_right();
    lcd.setCursor(0,1); //0th Column; 1th row
    lcd.print("Face right");
    delay(1000); 
  }
  else if ((nilai[1]==0) && (nilai[2]== 0) && (nilai[3]==0) && (nilai[4]==0) && (nilai[5]==0) && (nilai[6]==0)){
    Backward();
    lcd.setCursor(0,1); //0th Column; 1th row
    lcd.print("Backward"); 
    delay(1000);
  } 
}





  
