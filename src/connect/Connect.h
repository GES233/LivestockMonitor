/**
 * file name:  Connect.h
 * author:     GES233
 * version:    0.0.1
 * discription:
 * Build connection with host or other devices.
*/

#ifndef __CONNECT_H__
#define __CONNECT_H__

#include <WiFi.h>
#include <BluetoothSerial.h>
#include <ArduinoJson.h>

#include "setting/Configure.h" // WiFi or Bluetooth.

char ssid[] = "None";
char pswd[] = "password";
char server[] = "192.168.0.99"; // Using IP Address or domain.

// Connection status:
// If all are false -> tried to connected one:
// priorities: setting -> stronger one.
const int NOT_CONNECTED  = 0;
const int WIFI_CONNECTED = 1;
const int BT_CONNECTED   = 2;
const int ALL_CONNECTED  = 3;

//typedef struct {
//    NOT_CONNECTED,
//    WIFI_CONNECTED,
//    BT_CONNECTED,
//    ALL_CONNECTED
//} CONNTECTION_STATUS;

class WiFiConnect {} SensorWithWiFi;

class Bluetooth {} SensorWithBluetooth;

#endif