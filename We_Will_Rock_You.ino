/*prog1_ex0102:LED点滅(外部)*/

void setup() {
  // put your setup code here, to run once:
  pinMode(7,OUTPUT);//7番ピンを「出力」に設定
  pinMode(4,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(7,HIGH); 
delay(372);   
digitalWrite(7,LOW);
digitalWrite(4,HIGH);
delay(372);             
digitalWrite(4,LOW);
delay(1);
digitalWrite(8,HIGH);
digitalWrite(7,HIGH);
digitalWrite(4,HIGH);
delay(372);
digitalWrite(8,LOW);
digitalWrite(7,LOW);
digitalWrite(4,LOW);
delay(372);

}
