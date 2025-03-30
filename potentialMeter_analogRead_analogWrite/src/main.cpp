#include <Arduino.h>

int led_Pin = 11;	// declare variable for led pin

void setup()
{
  
  Serial.begin(9600); 
}

void loop()
{
  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (5.0 / 1023.0);
  int brightness = sensorValue / 4;
  //int brightness = map(sensorValue, 0, 1023, 0, 255);
  
  analogWrite(led_Pin, brightness);
  
  Serial.println(ADC);
  delay(1);
}