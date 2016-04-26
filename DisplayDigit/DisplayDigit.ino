
void setup() {
  // put your setup code here, to run once:
  
 pinMode(2,OUTPUT);//e
 pinMode(3,OUTPUT);//d
 pinMode(4,OUTPUT);//c
 pinMode(5,OUTPUT);//g
 pinMode(6,OUTPUT);//b
 pinMode(7,OUTPUT);//f
 pinMode(8,OUTPUT);//a
 pinMode(11, INPUT);
 pinMode(12, INPUT);
}
int cifra(int x){

  if(x==0){
    digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  }
  else if(x==1){
    digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  }
  else if(x==2){
    digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
    
  }
  else if(x==3){
    digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
    
  }
  else if(x==4){
    digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  }
  else if(x==5){
    digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  }
  else if(x==6){
    digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  }
  else if(x==7){
    digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  }
  else if(x==8){
    digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  }
  else if(x==9){
    digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  }

  

  
}
int button1 = 0;
int button2 = 0;
int x=0;
int aux1=HIGH;
int aux2=HIGH;
void loop() {
  // put your main code here, to run repeatedly:

  
  cifra(x);
  
  button1=digitalRead(11);
  button2=digitalRead(12);
  aux1=button1;
  aux2=button2;
  delay(50);
  if (button1 == LOW) {
    x++;
    if(x>9)
      x=9;
    }
  if (button2 == LOW) {
    x--;
      if(x<0)
        x=0;
    }
  while(aux1==LOW || aux2==LOW){
    aux1=digitalRead(11);
    aux2=digitalRead(12);
  }
  
}
