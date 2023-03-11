
int stateMotor = 32;
int trigSensor = 26;
int echoSensor = 27;
int durations;
int distance;

void setup() {
  pinMode(trigSensor, OUTPUT);
  pinMode(echoSensor, INPUT);
  pinMode(stateMotor, OUTPUT);
  Serial.begin(9600);
}

void loop() {
 digitalWrite(trigSensor, HIGH);
  delay(1);
  digitalWrite(trigSensor, LOW);
  durations = pulseIn(echoSensor, HIGH);
  distance = durations / 58.2;
  Serial.println(distance);
  delay(200);
  if(distance <=20 && distance >= 0){
    digitalWrite(stateMotor, !digitalRead(stateMotor));
  }
}
