#define LED_PIN 11

String recv_msg="";
int led_state=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(LED_PIN,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

if(Serial.available()>0)
{
  recv_msg=Serial.readStringUntil('\n');
  Serial.print("I received:");
  Serial.println(recv_msg);
  if(recv_msg=="on")
  {
    led_state=1;
  }
  else if (recv_msg=="off")
  {
    led_state=0;
  }
  else
  {
    Serial.println("指示が間違ってるよ。onかoffを送ってね。");
  }
}
if(led_state==1)
{
  for(int i=0;i<255;i++)
  {
    analogWrite(LED_PIN,i);
    delay(10);
  }
}
else
{
  analogWrite(LED_PIN,0);
}
}
