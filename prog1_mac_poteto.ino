#define TRIG_PIN 10
#define ECHO_PIN 13
#define AUDIO_PIN 12

int HL_time=0;
int freq[]={784,740,330,349,392,494,524,0};
int data=0;

float distance=0.0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(TRIG_PIN,OUTPUT);
pinMode(ECHO_PIN,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(TRIG_PIN,LOW);
delayMicroseconds(1);
digitalWrite(TRIG_PIN,HIGH);
delayMicroseconds(11);
digitalWrite(TRIG_PIN,LOW);
HL_time=pulseIn(ECHO_PIN,HIGH);
distance=340.0*HL_time/2/1000;
Serial.print(HL_time);
Serial.print("us,");
Serial.print(distance);
Serial.println("mm");
delay(100);
if (distance<=30){
  tone(AUDIO_PIN,freq[0]);
  delay(500);
}
else if(30<distance&&distance<=60){
  tone(AUDIO_PIN,freq[1]);
  delay(500);
}
else if(60<distance&&distance<=90){
  tone(AUDIO_PIN,freq[0]);
  delay(500);
}else if(90<distance&&distance<=120){
  tone(AUDIO_PIN,freq[0]);
  delay(500);
}else if(120<distance&&distance<=150){
  tone(AUDIO_PIN,freq[1]);
  delay(500);
}else if(150<distance&&distance<=180){
  tone(AUDIO_PIN,freq[0]);
  delay(500);
}else if(180<distance&&distance<=210){
  tone(AUDIO_PIN,freq[0]);
  delay(500);
}else if(210<distance&&distance<=240){
  tone(AUDIO_PIN,freq[1]);
  delay(500);
}
else{
  tone(AUDIO_PIN,freq[8]);
  delay(500);
}
}
