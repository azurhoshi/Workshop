#include <Arduino.h> 

/* BOARD INFO */
String DEVICE_NAME      = "AZUR-003"; 

/* WIFI INFO */ 
String WIFI_SSID        = "ampere";
String WIFI_PASSWORD    = "espertap";

/* MQTT INFO */ 
String MQTT_HOST        = "mqtt.cmmc.io";
String MQTT_USERNAME    = "";
String MQTT_PASSWORD    = "";
String MQTT_CLIENT_ID   = "";
String MQTT_PREFIX      = "CMMC/";

int    MQTT_PORT        = 1883;
int PUBLISH_EVERY       = 5L * 1000;
int MQTT_CONNECT_TIMEOUT= 10; 
