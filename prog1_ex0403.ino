/*prog1_ex0402 可変抵抗器でLEDの明るさ調整 ver.2*/
#define LED_PIN 11        //LEDが刺さっているピン
#define DUTY_MIN 50       //デューティー比の最小値（０－２５５）
#define DUTY_MAX 200      //デューティー比の最大値（０－２５５）

int volt_r=0;             //可変抵抗器の両端電圧を保管する場所
float duty=0.0;           // デューティー比（０．０－１．０）
void setup() {
  // put your setup code here, to run once:
pinMode(LED_PIN,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
volt_r=analogRead(A0);                                       //可変抵抗器の電圧を読み取り
duty=(float)(DUTY_MAX-DUTY_MIN)*volt_r/1023.0+DUTY_MIN;      //電圧をDUTYに変換
analogWrite(LED_PIN,(int)duty);                              //可変抵抗器の電圧に応じてLEDの明るさを設定
Serial.println(duty);
delay(100);
}
