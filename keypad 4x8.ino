int rows[]={2,3,4,5};
int cols[]={6,7,8,9,10,11,12,14};

int laststate=0;
const char key[4][8]={{'1','2','3','A','q','w','e','r'},
                      {'4','5','6','B','a','s','d','f'},
                      {'7','8','9','C','z','x','c','v'},
                      {'*','0','#','D','g','h','j','k'}};

#include "tambahan.h"                      

void setup (){
 Serial.begin(9600); 
 for(int i =0; i<4;i++){
  pinMode(rows[i], OUTPUT);
 for(int i =0; i<4;i++){


//  digitalWrite(rows[i], LOW);
 }
 Serial.println(key[0][2]);
 for(int i=0; i<8;i++){
   pinMode(cols[i], INPUT_PULLUP);
    for(int i=0; i<4;i++){

  
 }
}
 }
}
void loop (){
  baca();
}
//in new tab
void baca(){
      for(int i = 0; i<4; i++){
      digitalWrite(rows[i] ,LOW);
      for(int j = 0; j<8; j++){
        int x = digitalRead(cols[j]);
        if(!x){
          Serial.println(key[i][j]);
        }
      }
      digitalWrite(rows[i] ,HIGH);
//      int x = digitalRead(rows[i]);
//      int y = digitalRead(cols[i]);
//      Serial.print(x);
//      Serial.print(y);
//      Serial.print("\t");
    }
    Serial.println();
}

void baca2(){
  Serial.print("sebelum");
  digitalWrite(4, HIGH);
  Serial.println(digitalRead(4));
  Serial.print("sesudah");
  digitalWrite(4, LOW);
  Serial.println(digitalRead(4));
  delay(1000);
}
