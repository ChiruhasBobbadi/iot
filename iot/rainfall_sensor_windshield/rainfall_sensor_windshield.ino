
#include<Servo.h>
#define servoPin D2
#define waterPin D4

Servo mad;
String data;
int angle;
int water;
void setup() {
  // put your setup code here, to run once:
  mad.attach(servoPin);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  
while(!Serial.available())
delay(10);

if(Serial.available()>0)
{
  while(digitalRead(waterPin)==0){
    Serial.println("its raining");
      mad.write(0);
        delay(500);
        mad.write(180);
          delay(500);
  }
 
}

  
  
 

 

}
