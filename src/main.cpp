#include <Arduino.h>
#include "l9110s-ctrl.h"

/**
 * @brief The main function
 */

//motor A
const byte motorA_1A = 16;  //pinos de controle do motor A +
const byte motorA_1B = 17;  //pinos de controle do motor A -

//motor B
const byte motorB_1A = 18;  //pinos de controle do motor B +
const byte motorB_1B = 19;  //pinos de controle do motor B -

void setup() {
  pinMode(motorA_1A, OUTPUT);   // motor A +
  pinMode(motorA_1B, OUTPUT);   // motor A -
  pinMode(motorB_1A, OUTPUT);   // motor B +
  pinMode(motorB_1B, OUTPUT);   // motor B -

  delay(2000);
}

void loop() 
{

}