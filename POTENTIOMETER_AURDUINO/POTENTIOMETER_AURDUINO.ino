void setup() {
  // put your setup code here, to run once:
pinMode(12,OUTPUT);
pinMode(9,INPUT);
pinMode(7,OUTPUT);
Serial.begin(9600);
pinMode(A0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(12,HIGH);
int sensorValue1 = analogRead(A0);
float voltage1 = sensorValue1 * (5.0/1023.0);
Serial.print("inner voltage: ");
Serial.println(voltage1);
delay(2000);
Serial.println();
}
