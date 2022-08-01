int rows[]={2};
int cols[]={16,15,18,17};

int laststate=0;
const char key[1][4]={{'1','2','3','4'}};

#include "tambahan.h"
void setup() {
 Serial.begin(9600); 
 for(int i=0;i<1;i++){

  pinMode(rows[i],OUTPUT);
  for(int i=0; i<4;i++){

    pinMode(cols[i], INPUT_PULLUP);
  }
 }
}
void loop() {
  baca();
}
//add in new tab
void baca(){
      for(int i =0; i<1; i++){
      digitalWrite(rows[i] ,LOW);
      for(int j = 0; j<4; j++){
        int x = digitalRead(cols[j]);
        if(!x){
          Serial.println(key[i][j]);
        }
      }
   }
//      digitalWrite(rows[i] ,HIGH);
}
//      digitalWrite(rows[i] ,HIGH);
//      int x = digitalRead(rows[i]);
//      int y = digitalRead(cols[i]);
//      Serial.print(x);
//      Serial.print(y);
//      Serial.print("\t");
//    }
////    Serial.println();
//}
//
//void baca2(){
//  Serial.print("sebelum");
//  digitalWrite(4, HIGH);
//  Serial.println(digitalRead(4));
//  Serial.print("sesudah");
//  digitalWrite(4, LOW);
//  Serial.println(digitalRead(4));
//  delay(1000);
//  Serial.print("sebelum");
//  digitalWrite(15, HIGH);
//  Serial.println(digitalRead(15));
//  Serial.print("sesudah");
//  digitalWrite(15, LOW);
//  Serial.println(digitalRead(15));
//  delay(1000);
//}
