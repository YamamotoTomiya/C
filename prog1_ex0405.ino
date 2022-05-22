/*prog1_ex0405: 乾電池電圧モニター*/

int v_batt_digital=0;
float v_batt_analog=0.0;

void setup()
{
  //put your setup code here,to run once;
  analogReference(DEFAULT);
  Serial.begin(9600);
}
void loop()
{// put your main code here, to run repeatedly;
  v_batt_digital=analogRead(A0);
  v_batt_analog=(float)map(v_batt_digital,0,1023,0,5000)/1000.0;
  Serial.println(v_batt_analog,3);
  delay(100);
}
