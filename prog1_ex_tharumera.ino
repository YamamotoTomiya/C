#define AUDIO_PIN 12
#define TC 0
#define TD 1
#define TE 2
#define TF 3
#define TG 4
#define TA 5
#define TB 6
#define TX 7
int freq[]={262,294,330,349,392,440,494,0};
int melody[13][2]={
  {TC,200},{TD,200},{TE,1000},{TD,200},{TC,200},{TX,1000},{TC,200},{TD,200},{TE,200},
  {TD,200},{TC,200},{TD,600},{TX,1000}
};
String scale[]={"ド","レ","ミ","ファ","ソ","ラ","シ","休符"};
void setup() {
  // put your setup code here, to run once:
pinMode(AUDIO_PIN,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
for (int i=0;i<13;i++)
{
  tone(AUDIO_PIN,freq[melody[i][0]],melody[i][1]);
   Serial.println(scale[melody[i][0]]);
  delay(300);
}
}
