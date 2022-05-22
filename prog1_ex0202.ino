/*prog1_ex0201:LED明るさ制御*/

#define LED_PIN1 11
#define LED_PIN2 10
void setup() {
  // put your setup code here, to run once:
 pinMode(LED_PIN1,OUTPUT);
 pinMode(LED_PIN2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(LED_PIN1,255);
delay(500);
analogWrite(LED_PIN2,255);
delay(500);
analogWrite(LED_PIN1,200);
delay(500);
analogWrite(LED_PIN2,200);
delay(500);
analogWrite(LED_PIN1,50);
delay(500);
analogWrite(LED_PIN2,50);
delay(500);
analogWrite(LED_PIN1,10);
delay(500);
analogWrite(LED_PIN2,10);
delay(500);
analogWrite(LED_PIN1,10);
delay(500);
}
