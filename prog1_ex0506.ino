/*prog1_ex0506:シリルモニタからLED調光指示*/
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
  //受信したデータ（文字列）を整数に変換して、PINのデューティー比を設定
  analogWrite(LED_PIN,recv_msg.toInt());
}
}
