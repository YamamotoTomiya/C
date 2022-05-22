#define LED 13
#define BUTTON 7
int val=0;
void setup() {
  // put your setup code here, to run once:
pinMode(LED,OUTPUT);
pinMode(BUTTON,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
val=digitalRead(LED);
if(val==HIGH){
  digitalWrite(LED,HIGH);
  Serial.println(1);
}
else{
  digitalWrite(LED,LOW);
  Serial.println(0);
}
delay(300);
}
