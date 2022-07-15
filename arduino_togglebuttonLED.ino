unsigned int laststate = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(12,OUTPUT);
pinMode(button1,INPUT);
Serial.begin (115200);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(digitalRead(button1));
if (digitalRead(button1) == 0){
  if(laststate == 0){
    laststate = 1;
    digitalWrite (12,HIGH);
    debounce();
    
  }
  else if (laststate == 1){
    laststate=0;
    digitalWrite(12,LOW);
    debounce();
  }
}


}
void debounce(){
  while (digitalRead(button1) == 0){
    delay (100);
  }
}
