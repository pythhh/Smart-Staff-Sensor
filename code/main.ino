long distance,duration;

void setup() {
  Serial.begin (9600);
  pinMode(D1, OUTPUT);
  pinMode(D2, INPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, INPUT);
  pinMode(D0, OUTPUT);
 
}

void loop() {
  SonarSensor(D1,D2);
  long sensor1 = distance;
  SonarSensor(D3,D4);
  long sensor2 = distance;
  
  Serial.print("Distance UP:");
  Serial.println(sensor2);
  Serial.print("Distance DOWN:");
  Serial.println(sensor1);
  
  if(sensor1 < 50 || sensor2 < 150){
    digitalWrite(D0, HIGH);
    delay(2);
    digitalWrite(D0, LOW);
    delay(2);
  }
  else{
    digitalWrite(D0, LOW);
  }
  delay(500);
  
}
void SonarSensor(int trigPinSensor, int echoPinSensor){
  digitalWrite(trigPinSensor, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPinSensor, HIGH);
  delayMicroseconds(10);
  
  digitalWrite(trigPinSensor, LOW);

  duration = pulseIn(echoPinSensor,HIGH);
  distance =(duration/2)/29.1;
}
