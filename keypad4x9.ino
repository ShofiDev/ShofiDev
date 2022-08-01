int rows[]={2,3,4,5};
int cols[]={6,7,8,9,10,11,12,14};
int row[]={2};
int col[]={15,16,17,18};

const char keys[1][4]={{'1','2','3','4'}};
const char key[4][8]={{'1','2','3','A','q','w','e','r'},
                      {'4','5','6','B','a','s','d','f'},
                      {'7','8','9','C','z','x','c','v'},
                      {'*','0','#','D','g','h','j','k'}};

#include "tambahan.h"                      

void setup (){
 Serial.begin(9600); 
 for(int i =0; i<4;i++){
  pinMode(rows[i], OUTPUT);
  pinMode(row[i], OUTPUT);
 for(int i =0; i<4;i++){


//  digitalWrite(rows[i], LOW);
 }
 for(int i=0; i<8;i++){
   pinMode(cols[i], INPUT_PULLUP);
   pinMode(col[i], INPUT_PULLUP);
    for(int i=0; i<4;i++){

  
 }
}
 }
}
void loop (){
  baca();
}
// add in new tab
void baca(){
  for(int g =0; g<1; g++){
      digitalWrite(row[g] ,LOW);
      for(int h = 0; h<4; h++){
        int y = digitalRead(col[h]);
        if(!y){
          Serial.println(keys[g][h]);
          delay(500);
        }
      }
   }
      for(int i = 0; i<4; i++){
      digitalWrite(rows[i] ,LOW);
      for(int j = 0; j<8; j++){
        int x = digitalRead(cols[j]);
        if(!x){
          Serial.println(key[i][j]);
          delay (500);
        }
      }
      digitalWrite(rows[i] ,HIGH);

    }
    
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
