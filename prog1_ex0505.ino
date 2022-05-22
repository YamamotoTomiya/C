/*prog1_ex0505:シリアルモニタからLED点灯指示 ver.2*/
#define LED_PIN 11
String recv_msg="";//受信データがここに格納される
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(LED_PIN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0)//シリアル通信ボードに何バイトかのデータが届いていたら
{
  //受信したデータの最初の1バイトを読み取る
  recv_msg=Serial.readStringUntil('\n');//改行コードが来るまで文字列を溜め込む
  //受信したデータを出力する
  Serial.print("I received:");
  Serial.println(recv_msg);
  if(recv_msg=="on")
  {
    digitalWrite(LED_PIN,HIGH);
  }
  else if (recv_msg=="off")
  {
    digitalWrite(LED_PIN,LOW);
  }
  else
  {
    Serial.println("指示が間違ってるよ。onかoffを送ってね。");
  }
}
}
