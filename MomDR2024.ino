#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include "config.h"

const char *ssid = APSSID;
const char *password = APPSK;

ESP8266WebServer server(80);

void setup() {
  delay(1000);
  Serial.begin(115200);
  Serial.println();
  Serial.print("Configuring access point...");
  WiFi.softAP(ssid, password);

  IPAddress myIP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(myIP);

  routes();
  
  server.begin();
  Serial.println("HTTP server started");
}

void loop() {
  server.handleClient();
}
