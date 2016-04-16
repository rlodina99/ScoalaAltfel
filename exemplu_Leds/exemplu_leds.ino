
void setup() { 
pinMode(2, OUTPUT);
pinMode(3, OUTPUT); 
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
}

// the loop routine runs over and over again forever:
int delay1=80;
int delay2=80;
int idx=0;
void loop() {
  
  if(idx==7){
    for(int i=2;i<=9;i++){
      digitalWrite(i,HIGH);
    }
    delay(1000);
    idx=0;
    delay1=80;
    delay2=80;
    loop();
  }
  
  int x=0;
  while(x<7){
  for(int i=2;i<=9;i++){
    digitalWrite(i,HIGH);
    delay(delay1);
    digitalWrite(i,LOW);

  }
  x++;
  }
  delay1-=10;
  for(int i=9;i>=2;i--){
    digitalWrite(i,HIGH);
    delay(delay2);
    digitalWrite(i,LOW);

  }
  delay2+=10;
  idx++;

}