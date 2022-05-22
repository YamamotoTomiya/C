#define AUDIO_PIN 12
#define TD 1//so
#define TE 2//fa #
#define TF 3//fa
#define TG 4
#define TA 5
#define TB 6
#define TX 7
int freq[]={784,740,698,784,392,440,494,0};
int melody[16][2]={
  {TD,250},{TE,250},{TD,250},{TX,1000},{TD,250},{TE,250},{TD,250},{TX,250},
  {TD,250},{TE,250},{TD,250},{TX,1000},{TD,250},{TE,250},{TD,250},{TX,250},
};
void setup() {
  // put your setup code here, to run once:
pinMode(AUDIO_PIN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for (int i=0;i<16;i++)
{
  tone(AUDIO_PIN,freq[melody[i][0]],melody[i][1]);
  delay(300);
}
}
