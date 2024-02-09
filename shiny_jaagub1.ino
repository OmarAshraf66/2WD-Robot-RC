
int in1=3;
int in2=5;
int in3=6;
int in4=9;
int ena1=10;
int ena2=11;

void setup() {
  
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(6,OUTPUT);
   pinMode(ena1,OUTPUT);
  pinMode(ena2,OUTPUT);
 Serial.begin(9600);
  

}

void loop() {
   if (Serial.available()){

char reading=Serial.read();
if  (reading=='f'){
  
digitalWrite(in1,1);
  digitalWrite(in2,0);
  analogWrite(ena1,120);
  digitalWrite(in3,1);
  digitalWrite(in4,0);
  analogWrite(ena2,120);
 
  
  
  
}
   
  
 else if  (reading=='b'){
  
digitalWrite(in1,0);
  digitalWrite(in2,1);
  analogWrite(ena1,120);
  digitalWrite(in3,0);
  digitalWrite(in4,1);
  analogWrite(ena2,120);
}
   
   
 else if  (reading=='r'){
  
digitalWrite(in1,0);
  digitalWrite(in2,0);
  analogWrite(ena1,120);
  digitalWrite(in3,1);
  digitalWrite(in4,0);
  analogWrite(ena2,120);
}
   

    else if  (reading=='l'){
  
digitalWrite(in1,1);
  digitalWrite(in2,0);
  analogWrite(ena1,120);
  digitalWrite(in3,0);
  digitalWrite(in4,0);
  analogWrite(ena2,120);
}
      else if  (reading=='s'){
  
digitalWrite(in1,0);
  digitalWrite(in2,0);
  analogWrite(ena1,120);
  digitalWrite(in3,0);
  digitalWrite(in4,0);
  analogWrite(ena2,120);
}
   }
}