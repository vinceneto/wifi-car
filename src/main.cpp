/**
 * @brief The main function
 */

#include <Arduino.h>
#include "wifi-ctrl.h"
#include "l9110s-ctrl.h"


void setup() 
{
    initWiFi();
    init_driver_motor();

    delay(2000);
}

void loop() 
{

}