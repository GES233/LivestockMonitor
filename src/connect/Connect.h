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
typedef enum {
    NOT_CONNECTED,  // 0,
    WIFI_CONNECTED, // 1,
    BT_CONNECTED,   // 2,
    ALL_CONNECTED   // 3
} CONNECT_STATUS;

class WiFiConnect {} SensorWithWiFi;

class Bluetooth {} SensorWithBluetooth;

#endif