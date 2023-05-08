void setup() {
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,OUTPUT);

}

void loop() {
  if(digitalRead(3)^digitalRead(4)){
    digitalWrite(5,LOW);
    }
    else{
      digitalWrite(5,HIGH);
      }
  
}
