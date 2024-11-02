void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensorValue = analogRead(A0);
if(sensorValue>800)
{

digitalWrite(7,HIGH);
digitalWrite(8,HIGH);


}
if(sensorValue>=500 && sensorValue<800)
{

digitalWrite(7,HIGH);
digitalWrite(8,LOW);


}
if(sensorValue<400)
{

digitalWrite(7,LOW);
digitalWrite(8,HIGH);


}
Serial.println(sensorValue);
delay(500);
}
