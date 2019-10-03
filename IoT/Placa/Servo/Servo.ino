#include <Servo.h>
#include <BearSSLHelpers.h>
#include <CertStoreBearSSL.h>
#include <ESP8266WiFi.h>
#include <ESP8266WiFiAP.h>
#include <ESP8266WiFiGeneric.h>
#include <ESP8266WiFiMulti.h>
#include <ESP8266WiFiScan.h>
#include <ESP8266WiFiSTA.h>
#include <ESP8266WiFiType.h>
#include <WiFiClient.h>
#include <WiFiClientSecure.h>
#include <WiFiClientSecureAxTLS.h>
#include <WiFiClientSecureBearSSL.h>
#include <WiFiServer.h>
#include <WiFiServerSecure.h>
#include <WiFiServerSecureAxTLS.h>
#include <WiFiServerSecureBearSSL.h>
#include <WiFiUdp.h>


#define FIREBASE_HOST "verano-iot.firebaseio.com"
#define FIREBASE_AUTH "iAm4k4rtufInG0AAKFqhqp2Kj4fVMQihoQxVJaoo"
#define WIFI_SSID "INFINITUM8669_2.4"
#define WIFI_PASSWORD "Y4EcK4d5tb"

#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>
Servo mov;
void setup() {
  
Serial.begin(9600);
mov.attach(16);
// connect to wifi.
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("connecting");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
}
Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());
  
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
}



void loop() {
 if (Firebase.getString("ON") == "1"){
    mov.write(0);
    
    
  }else{
 mov.write(90);
   // delay(500);
  }

 }
