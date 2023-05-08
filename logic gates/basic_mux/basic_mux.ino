void setup() {
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);

}

void loop() {
  if(digitalRead(4)){
      digitalWrite(6,digitalRead(3));
    }
    else{
      digitalWrite(7,digitalRead(3));
      }
  
}
