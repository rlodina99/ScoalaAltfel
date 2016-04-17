
#define R 3
#define G 5
#define B 6


void setup() {
  // put your setup code here, to run once:
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT); 
  pinMode(B, OUTPUT);

  
}

void negru(){
  analogWrite(R,0);
  analogWrite(G,0);
  analogWrite(B,0);
}

void alb(){
  analogWrite(R,255);
  analogWrite(G,255);
  analogWrite(B,255);
  
}

void galben(){
  analogWrite(R,255);
  analogWrite(G,255);
  analogWrite(B,0);
}

void albastru(){
  analogWrite(R,0);
  analogWrite(G,0);
  analogWrite(B,255);
}

void verde(){
  analogWrite(R,0);
  analogWrite(G,255);
  analogWrite(B,0);
}
void rosu(){
  analogWrite(R,255);
  analogWrite(G,0);
  analogWrite(B,0);
}
void roz(){
  analogWrite(R,255);
  analogWrite(G,0);
  analogWrite(B,255);
}

void turcoaz(){
  analogWrite(R,51);
  analogWrite(G,255);
  analogWrite(B,255);
}


void loop() {
  // put your main code here, to run repeatedly:
  
  negru();
  delay(500);
  alb();
  delay(500);
  galben();
  delay(500);
  verde();
  delay(500);
  albastru();
  delay(500);
  rosu();
  delay(500);
  roz();
  delay(500);
  turcoaz();
  delay(500);
}
