void setup(){

  pinMode(13, OUTPUT);  

  pinMode(7, INPUT_PULLUP); 

}

void loop(){
  int sw=digitalRead(7);    
  
  if(sw==HIGH){         
    digitalWrite(13, LOW);   
  }

  else
  {
    digitalWrite(13, HIGH); 
  }
}
