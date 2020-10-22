void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop() {
  
  int v = analogRead(A0);
  
  while(analogRead(A0)>100) {
    //    wait for release
  }
  
  if (v>165 && v<180){
    Serial.println(0);
  }
        
  else if (v>200 && v<210){
    Serial.println(1);
  }
    
  else if (v>220 && v<260){
    Serial.println(2);
  }
    
  else if (v>335 && v<345){
    Serial.println(3);
  }
    
  else if (v>505 && v<515){
    Serial.println(4);
  }
  else if (v>900){
    Serial.println(5);
  }
  else {
    Serial.println(-1);
  }
  delay(100);
}
