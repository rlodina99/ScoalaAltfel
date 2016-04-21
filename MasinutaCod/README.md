#Cod pentru masina care ocoleste obstacole


``` C++

const byte  M1_A =  11;
const byte  M1_B =  12;

const byte M2_A =  10;
const byte M2_B =  9;

const byte triggerPort = 3;
const byte echoPort = 2;


void setup() {

    Serial.begin(9600);

    pinMode(M1_A, OUTPUT);
    pinMode(M1_B, OUTPUT);

    pinMode(M2_A, OUTPUT);
    pinMode(M2_B, OUTPUT);


    pinMode(triggerPort, OUTPUT);
    pinMode(echoPort, INPUT);

}

void forward(){
    digitalWrite(M1_A, HIGH);
    digitalWrite(M1_B, LOW);

    digitalWrite(M2_A, HIGH);
    digitalWrite(M2_B, LOW);
}

void stop(){
    digitalWrite(M1_A, LOW);
    digitalWrite(M1_B, LOW);

    digitalWrite(M2_A, LOW);
    digitalWrite(M2_B, LOW);
}


void back(){
    digitalWrite(M1_A, LOW);
    digitalWrite(M1_B, HIGH);

    digitalWrite(M2_A, LOW);
    digitalWrite(M2_B, HIGH);
}


void left(){
    digitalWrite(M1_A, LOW);
    digitalWrite(M1_B, LOW);

    digitalWrite(M2_A, HIGH);
    delay(300);
    digitalWrite(M2_B, LOW);

    delay(200);
    stop();
}

long getDistance(){
    digitalWrite(triggerPort, LOW);
    digitalWrite(triggerPort, HIGH);
    delayMicroseconds(10);
    digitalWrite(triggerPort, LOW);

    long duration = pulseIn(echoPort, HIGH);
    long distance = 0.017 * duration;

    Serial.print("distanta: ");
    Serial.print(distance);
    Serial.println(" cm");

    return distance;
}
void loop() {
  forward();
  if (getDistance()<15){
    stop();
    delay(500);
    int x=0;
    do{
        x++;
       left();
       delay(500);
       if(x>3){
            back();
            delay(1500);
            break;
       }
    }while(getDistance()<25);
  }
}

```