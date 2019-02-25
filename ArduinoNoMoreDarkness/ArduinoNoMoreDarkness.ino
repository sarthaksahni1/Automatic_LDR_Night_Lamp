/*
Connections:
LDR --> One leg to Vcc and the other to both analog pin 0 and to the GND via 100K resistor
Relay --> Connect one pin of the coil to digital pin 2 and the other to GND.
*/


int sensorPin = A0;   // select the input pin for ldr
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  pinMode(2, OUTPUT); //pin connected to the relay
  Serial.begin(9600); //sets serial port for communication
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);    
  Serial.println(sensorValue); //prints the values coming from the sensor on the screen
  
  if(sensorValue < 700) //setting a threshold value
  digitalWrite(2,HIGH); //turn relay ON
  
  else digitalWrite(2,LOW); //turn relay OFF
  
  delay(100);                  
}
