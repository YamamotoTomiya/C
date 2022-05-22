/*prog1_ex0203:ボタンを1回押したらLED点灯継続*/
#define LED_PIN 13
#define BUTTON_PIN 8

int button_state=0; //ボタンが押されているかを記録するための変数
int led_state=0;//LEDの点灯状態を記録するための変数（0：消灯、1:点灯）
void setup() {
  // put your setup code here, to run once:
pinMode(LED_PIN,OUTPUT);
pinMode(BUTTON_PIN,INPUT);//ボタンがつながっているピンを入力に設定
}


void loop() {
  // put your main code here, to run repeatedly:
button_state=digitalRead(BUTTON_PIN);//ボタンがつながっているピンの電圧レベルをチェック
/*LED点灯状態の判定*/
if(button_state==HIGH)//ボタンが押された
{
  led_state=1 - led_state;//LED点灯状態を変更
}
/*LED点灯・消灯処理*/
if(led_state==1)//LED点灯状態がONなら
{
  digitalWrite(LED_PIN,HIGH);//ON
}
else
{
  digitalWrite(LED_PIN,LOW);
}
}
