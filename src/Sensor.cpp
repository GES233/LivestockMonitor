/*
 * file name:  Sensor.cpp
 * author:     GES233
 * version:    0.0.1
 * discription:
 * This project is based on ESP32 WROOM platform, and
 * it is used to running a program that can monitoring
 * animal physiological status uninterruptly and return
 * a result immediately(real-time).
 * This is a prototype to verify the feasibility and
 * measure the costly, please DO NOT UPGRATE IT TO
 * THE PRODUCTIVE ENVIRONMENT.
 * licence:    WTFPL
 **/

#include <Arduino.h>
//#include "setting/Configure.h"
//#include "connect/Connect.h"
//#include "emg/FetchEMGSingal.h"

const int LED = 2;

void setup(){
    /**
     * If you known Arduino before, I think you may understand this.
     *
     * In this project, this function will do several works:
     * - Configure setting such as `ID` of terget , `type` of sensor, etc.
     * - Initialize pin and network setting and connect with host firstly.
     * - Return infomation that it is ready to use.
    */

    /* Start UART. */
    while (!Serial){ // if not connected AND not configurate before.
        /* LED will Blink */
        pinMode(LED, OUTPUT);
        digitalWrite(LED, LOW);
        delay(150);
        digitalWrite(LED, HIGH);
        delay(350);
    };
    Serial.begin(115200); 
    Serial.println("Opened.");

    /* Initialize network firstly. */

    /* Registrate and configurate setting. */

    /* Initialize the pin to connected with the sensor. */

    /* Initialize date and get time. */

    /* Loading paramaters of the sensor. */

    /* Loading some data(e.g. the type of swine) manually. */
    //while (true) {};

    /* Start service. */
    Serial.println("All preperation had done, the service will runing...");
    Serial.end();
};

void loop(){
    /**
     * work flow:
     * Fetch/Collect -> Migrate (-> execute algorithm)
     * -> Update -> waiting for [shake_hand] -> [Reserve]
    */
};
