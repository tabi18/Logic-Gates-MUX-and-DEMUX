void setup() {
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(6,OUTPUT);

}

void loop() {
  if(digitalRead(5)){
      digitalWrite(6,digitalRead(3));
    }
    else{
      digitalWrite(6,digitalRead(4));
      }
  
}
