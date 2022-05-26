/**
 * file name:  Connect.h
 * author:     GES233
 * version:    0.0.1
 * discription:
 * Connect with other.
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

// If all are false -> tried to connected one:
// priorities: setting -> stronger one.
boolean wifi_connected = false;
boolean bt_connected = false;

class WiFiConnect {} SensorWithWiFi;

class Bluetooth {} SensorWithBluetooth;

#endif