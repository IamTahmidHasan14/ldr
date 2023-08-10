//LDR = light dependent resistors
void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(A0,INPUT);
}

void loop() {
  int LDR_Value = analogRead(A0);
  if(LDR_Value <= 17){
    digitalWrite(13,HIGH);
    Serial.print("Turn ON");
    Serial.println(LDR_Value);    
  }
  else{
    digitalWrite(13,LOW);
    Serial.print("Turn OFF");
    Serial.println(LDR_Value);  
    delay(500);
  }
  //float voltage = sensorValue * (5.0 / 1023.0);
  //Serial.println(voltage);
}
