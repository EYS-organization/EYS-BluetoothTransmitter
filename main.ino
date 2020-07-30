#include <SoftwareSerial.h>

SoftwareSerial SerialPortHC(2, 3);


void setup() {
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
  SerialPortHC.begin(9600);
  Serial.println("start prg");
}

void loop() {
  if (SerialPortHC.available()){
    char c = SerialPortHC.read();
    SerialPortHC.print('Sending');
    Serial.print(c);
    }
  if (Serial.available()) {
    char c = Serial.read();
    SerialPortHC.write(c);
    } 
}
