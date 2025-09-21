#include <Arduino.h>
#line 1 "C:\\Users\\henok\\Desktop\\traffic_light_code\\traffic_light_code.ino"
const unsigned int ngl = 4;
const unsigned int nyl = 3;
const unsigned int nrl = 2;
const unsigned int wgl = 7;
const unsigned int wyl = 6;
const unsigned int wrl = 5;
const unsigned int sgl = 13;
const unsigned int syl = 12;
const unsigned int srl = 11;
const unsigned int egl = 10;
const unsigned int eyl = 9;
const unsigned int erl = 8;

void traffic_light_tune(int green, int yellow, int red);
void blinking_yellow(int yellow);
#line 16 "C:\\Users\\henok\\Desktop\\traffic_light_code\\traffic_light_code.ino"
void setup();
#line 33 "C:\\Users\\henok\\Desktop\\traffic_light_code\\traffic_light_code.ino"
void loop();
#line 16 "C:\\Users\\henok\\Desktop\\traffic_light_code\\traffic_light_code.ino"
void setup() {
  pinMode(ngl,OUTPUT);
  pinMode(nyl,OUTPUT);
  pinMode(nrl,OUTPUT);
  pinMode(wgl,OUTPUT);
  pinMode(wyl,OUTPUT);
  pinMode(wrl,OUTPUT);
  pinMode(sgl,OUTPUT);
  pinMode(syl,OUTPUT);
  pinMode(srl,OUTPUT);
  pinMode(egl,OUTPUT);
  pinMode(eyl,OUTPUT);
  pinMode(erl,OUTPUT);


}

void loop() {
  if (digitalRead(wrl) == 0 and digitalRead(erl) == 0 and digitalRead(srl) == 0 ){
    digitalWrite(wrl,HIGH);
    digitalWrite(srl,HIGH);
    digitalWrite(erl,HIGH);
  }
  traffic_light_tune(ngl,nyl,nrl); 
  traffic_light_tune(sgl,syl,srl);
  traffic_light_tune(egl,eyl,erl);
  traffic_light_tune(wgl,wyl,wrl);
         
}
void traffic_light_tune(int green, int yellow, int red){
  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
  delay(3000);
  digitalWrite(green,LOW);
  for (int i=0;i<=3;i++){
    digitalWrite(yellow,HIGH);
    delay(100);
    digitalWrite(yellow,LOW);
    delay(100);
  }
  digitalWrite(red,HIGH);
}

  



