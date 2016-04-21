int ledDelay = 50; // delay by 50ms


void setup() {
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);

}

void loop() {
tone(8,780,400);
delay(100);
tone(8,525,400);

digitalWrite(6, HIGH); 
digitalWrite(7, HIGH); 
delay(ledDelay);

digitalWrite(6, LOW); 
digitalWrite(7, LOW); 
delay(ledDelay); 

digitalWrite(6, HIGH); 
digitalWrite(7, HIGH); 
delay(ledDelay);

digitalWrite(6, LOW);
digitalWrite(7, LOW); 
delay(ledDelay); 

digitalWrite(6, HIGH); 
digitalWrite(7, HIGH); 
delay(ledDelay);

digitalWrite(6, LOW);
digitalWrite(7, LOW); 
delay(ledDelay); 



tone(8,780,400);
delay(100);
tone(8,525,400);

digitalWrite(4, HIGH); 
digitalWrite(5, HIGH); 
delay(ledDelay);

digitalWrite(4, LOW); 
digitalWrite(5, LOW); 
delay(ledDelay);

digitalWrite(4, HIGH); 
digitalWrite(5, HIGH); 
delay(ledDelay); 

digitalWrite(4, LOW);
digitalWrite(5, LOW);
delay(ledDelay); 

digitalWrite(4, HIGH); 
digitalWrite(5, HIGH); 
delay(ledDelay);

digitalWrite(4, LOW);
digitalWrite(5, LOW);
delay(ledDelay); 
tone(8,780,400);
delay(100);
tone(8,525,400);


}
