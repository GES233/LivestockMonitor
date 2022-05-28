/**
 * file name:  Configure.cpp
 * author:     GES233
 * version:    0.0.1
 * discription:
 * Configure the sensor and save the environment of program.
*/
#include "Configure.h"
#include <ArduinoJson.h>
#include <SD.h>

const char *filepath = "/setting.json";

void Settings::dumpConfigure(FinalHead &SensorHead) {
    /**
     * Extract the information with Server, the method
     * which read the private element.
    **/
}

void Settings::loadConfigure() {
    // Using other device to cover the source data(e.g. id of pig).
}

void Settings::updateSwine() {}

void Settings::initializeConfigure(const char *filepath, Config &SensorConfigure) {
    /**
     * Load all settings expect terget, this object will
     * located as some constants when running.
    **/

    // load from configure file.
    File file = SD.open(filepath);
    
    // Initialize the JSON object.
    StaticJsonDocument<1024> doc;

    DeserializationError error = deserializeJson(doc, file);
    if (error) {
        Serial.println(F("Loading setting failed, will using default."));
    };

    // JSON -> Object.

    // End.
    file.close();
}
