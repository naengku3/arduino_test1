void setup() {
    Serial.begin(9600);
}
void loop() {
  if(Serial.available()>0) {
    String m = Serial.readString(); 
    if(m.indexOf('5')== 0) tone(7, 523, 500);
  }
}