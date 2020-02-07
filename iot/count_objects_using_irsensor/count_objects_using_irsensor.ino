 // counting number of objects 
int cnt=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(D0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:



if(digitalRead(D0)==0)
{
  cnt++;
  Serial.println(cnt);

  while(digitalRead(D0)==0)
  delay(10);
  
}




}
