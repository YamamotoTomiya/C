/*prog1_ex0203:ボタンを1回押したらLED点灯継続*/
#define LED_PIN 13
#define BUTTON_PIN 8


int button_state=0;//ボタンが押されているか記録するための変数
int button_state_old=0; //button_stateの1つ前の値を記録するための変数
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
if((button_state==HIGH) && (button_state_old==LOW))//ボタンが押された
{
if(led_state==1)//LED点灯状態を変更
{led_state=0;
}
else
{led_state=1;
}
  delay(10);//ちょっと待つ
}
 button_state_old = button_state; //ボタン状態の記録を更新
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
