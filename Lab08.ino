#include <Ultrasonic.h>

Ultrasonic ultrasonic(8,9);
int distance,ledState;
const byte intPin=6;
volatile boolean state=LOW;
void setup() { 
  pinMode(intPin, INPUT_PULLUP);
  Serial.begin(9600);
  attachInterrupt(6, int0, FALLING); //assign int0
}
void loop(){
}
void int0(){ 
  distance = ultrasonic.read(); 
  Serial.print("Distance in CM: ");
  Serial.println(distance);
}
