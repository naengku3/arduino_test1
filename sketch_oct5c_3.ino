void setup(){
  pinMode(7, INPUT_PULLUP); 
  Serial.begin(9600);
}

void loop(){

  int a = digitalRead(7);
  Serial.println(a);
  delay(500);
}
