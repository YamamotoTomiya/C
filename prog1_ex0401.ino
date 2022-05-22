/*prog1_ex0402 可変抵抗器でLEDの明るさ調整 ver.2*/
#define LED_PIN 11
#define DUTY_MIN 50
#define DUTY_MAX 200

int volt_r=0;
float duty=0.0;
void setup() {
  // put your setup code here, to run once:
pinMode(LED_PIN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
volt_r=analogRead(A0);
duty=(float)(DUTY_MAX-DUTY_MIN)*volt_r/1023.0+DUTY_MIN;
analogWrite(LED_PIN,(int)duty);
delay(100);
}
