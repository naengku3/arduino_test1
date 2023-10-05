import processing.serial.*;
Serial p;
void setup(){
  p = new Serial(this,"COM4", 9600);
}
void draw(){
}
void keyPressed() {
  background(0);
  text(key, 10, 50);
  p.write(key);
}
