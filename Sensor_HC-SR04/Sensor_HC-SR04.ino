int trig=4;
int echo=3
int TM;     //time in micro.
int DC;    //distance in Cms.
void setup(){
    Serial,begin(9600);
    pinMode(4,OUTPUT);
    pinMode(3,INPUT);
}
void loop(){
    digitalWrite(trig,LOW);
    delayMicroseconds(2);
    digitalWrite(trig,HIGH);
    delayMicroseconds(10);
    digitalWrite(trig,LOW);
    
    TM=pulseIn(echo,HIGH);
    DC=TM/(29*2);
    Serial.println(DC);
    Delay(100);
}