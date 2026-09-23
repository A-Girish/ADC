#include <Arduino.h>

  uint8_t LDR = 34;


void setup() {

  Serial.begin(115200);
  pinMode(LDR, INPUT);

}

void loop() {

  int LDR_Value = analogRead(LDR);
  float volt = LDR_Value * (3.3 / 4095.0); // Convert ADC value to voltage
  
  Serial.println(LDR_Value);  
  Serial.println(volt);
  delay(1000);


}
