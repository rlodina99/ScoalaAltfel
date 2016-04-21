#Cod pentru bratul robotic programabil din (serial monitor)


``` C++

#include <Servo.h>
//#include <cstdlib>
//b180,D300,u130,D300,c120,k0,D500,u180,D1000,k20,D500,u130,c150,D300,k-20,D1000
Servo baza;
Servo cleste;
Servo umar;
Servo cot;


void setup() {
  // put your setup code here, to run once:
  baza.attach(7);  //0-180
  cleste.attach(6);//0(deschis)-20(inchis)
  umar.attach(5);//100(ridicat)-180(jos)
  cot.attach(4);//180(ridiat)-80(coborat)
  Serial.begin(9600);

  umar.write(100);
  cleste.write(20);
  cot.write(150);
  baza.write(90);
}
char cmd[500];
int idx=0;

void loop() {
  
  while (Serial.available() > 0) {
    // get the new byte:
   cmd[idx] = (char)Serial.read();
 
    // add it to the inputString:
   
    if (cmd[idx] == '\n') {
      
      cmd[idx]='\0';
      Serial.print("cmd=");
      Serial.println(cmd);
      
      for(int i=0;i<strlen(cmd);i++){
        char lit=cmd[i];
        int grade=-50;
        char sirGrade[4];
        int sirGrd=0;
        int ramane=0;
        
        for(int j=i+1;j<strlen(cmd);j++){
          if(cmd[j]==',')
            break;
          else{
            sirGrade[sirGrd]=cmd[j];
            sirGrd++;
          }
          ramane=j+1; 
        }
        grade=atoi(sirGrade);
        if(lit=='H'){
          umar.write(100);
          cleste.write(20);
          cot.write(150);
          baza.write(90);
        }
        if(lit=='D'){
          delay(grade);
          Serial.write("Delay ");
          Serial.print(grade);
        }
        if(lit=='b'){
          if(grade<0) grade=0;
          if(grade>180) grade=180;
          baza.write(grade);
          Serial.write("Baza ");
          Serial.print(grade);
        }
        if(lit=='u'){
          if(grade<100) grade=100;
          if(grade>180) grade=180;
          umar.write(grade);
          Serial.write("Umar ");
          Serial.print(grade);
        }
        if(lit=='c'){
          if(grade>180) grade=180;
          if(grade<80) grade=80;
          cot.write(grade);
          Serial.write("Cot ");
          Serial.print(grade);
        }
        if(lit=='k'){
          if (grade<0) grade=0;
          if (grade>20) grade=20;
          cleste.write(grade);
          Serial.write("Cleste ");
          Serial.print(grade);
        }
        Serial.println();
       i=ramane;
       delay(100); 
      }

      idx=-1;
    }
     idx++;
     break;
  }

  delay(100);
}

``` 