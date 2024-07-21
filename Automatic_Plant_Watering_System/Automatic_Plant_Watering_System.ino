int water = 3; 
int water2 = 2;


void setup() {
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT); 
  pinMode(6,INPUT); 
  pinMode(5,INPUT);
 Serial.begin(9600);
}

void loop() { 


  water = digitalRead(6);  
  if(water == HIGH) 
  {
  digitalWrite(3,LOW); 
  }
  else
  {
  digitalWrite(3,HIGH); 
  }
  delay(300); 






  water = digitalRead(5);  
  if(water == HIGH) 
  {
  digitalWrite(2,LOW); 
  }
  else
  {
  digitalWrite(2,HIGH); 
  }
  delay(300); 
}
