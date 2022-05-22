/*prog1_ex0203:ボタンを押している間LED点灯*/
#define LED_PIN 13
#define BUTTON_PIN 8

int button_state=0; //ボタンが押されているかを示す変数
void setup() {
  // put your setup code here, to run once:
pinMode(LED_PIN,OUTPUT);
pinMode(BUTTON_PIN,INPUT);ボタンがつながっているピンを入力に設定
}


void loop() {
  // put your main code here, to run repeatedly:
button_state=digitalRead(BUTTON_PIN);//ボタンがつながっているピンの電圧レベルをチェック
if(button_state==HIGH)
{
  digitalWrite(LED_PIN,HIGH);//電圧レベルがHIGHのとき
}
else
{
  digitalWrite(LED_PIN,LOW);電圧レベルがLOWのとき
}
}
