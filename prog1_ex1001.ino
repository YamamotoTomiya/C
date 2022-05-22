#define LED_PIN 13
String recv_msg="";
long counter=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
//Serial.println("connected");
pinMode(LED_PIN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0)
{
  recv_msg=Serial.readStringUntil('\n');
  Serial.print("you requested:");
  Serial.println(recv_msg);
 
if (recv_msg=="on")
{
  digitalWrite(LED_PIN,HIGH);
}
else if(recv_msg=="off")
{
  digitalWrite(LED_PIN,LOW);
}
else
{
  Serial.println("指示が間違っているよ。onかoffを送ってね。");
}
}
Serial.print(counter++);
Serial.print(",");
Serial.print(counter/2);
Serial.print(",");
Serial.print(counter/3);
Serial.print(",");
Serial.print(counter/4);
Serial.print(",");
Serial.print(counter/5);
Serial.println();
if(counter>1023)
{
  counter=0;
}
delay(100);
}
