#define b_n A0
#define b_s A1
int vrt1=0;
int vrt2=0;
void setup() {
  // put your setup code here, to run once:
pinMode(b_n,INPUT);
pinMode(b_s,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
vrt1=digitalRead(b_n);
vrt2=digitalRead(b_s);
if(vrt1>0){
  Serial.println("1");}
else if(vrt2>0){
  Serial.println("2");}
delay(500);

}
