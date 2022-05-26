/**
 * file name:  Configure.cpp
 * author:     GES233
 * version:    0.0.1
 * discription:
 * Configure the sensor and save the environment of program.
*/
#include "Configure.h"
//#include <EEPROM.h>

struct SensorConfigure {};

void Settings::dumpConfigure() {
    // Extract the information with Server.
}

void Settings::loadConfigure() {
    // Using other device to cover the source data(e.g. id of pig).
}

void Settings::updateSwine() {}

void Settings::initializeConfigure() {
    // Web settings.
    // 1. from code
    // 2. from UART(yaml -> Object -> Code)
}
