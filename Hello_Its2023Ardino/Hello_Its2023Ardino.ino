void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(7,INPUT);
pinMode(12,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(12,HIGH);
if (digitalRead(7)== LOW) {
  Serial.print("It's 2023 \n");
} else {
 (digitalRead(7)== HIGH);
  Serial.print("Hello World!\n");
}


}
