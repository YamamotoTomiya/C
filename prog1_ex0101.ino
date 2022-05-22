/*prog1_ex0101:LED点滅(オンボード)*/

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);  //13番ピンを「出力」に設定
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13,HIGH);      //13番ピンに電圧5Vを入力
delay(500);                 //500ms待つ
digitalWrite(13,LOW);       //13番ピンに電圧0ｖを出力
delay(500);                 //500ms待つ
}
