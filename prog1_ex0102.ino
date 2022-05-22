/*prog1_ex0102:LED点滅(外部)*/

void setup() {
  // put your setup code here, to run once:
  pinMode(7,OUTPUT);//7番ピンを「出力」に設定
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(7,HIGH);       //7番ピンに電圧5ｖを出力
delay(500);                 //500ｍｓ待つ
digitalWrite(7,LOW);        //7番ピンに電圧0ｖを出力
delay(500);                 //500ms待つ

}
