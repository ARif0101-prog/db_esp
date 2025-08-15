#include <WiFi.h>
#include <ESP32Ping.h>
 
const char* ssid = "Mut1@ra";
const char* password =  "Muti@ra_mut1";
IPAddress ip (192, 168, 0, 250);
 
void setup() {
  Serial.begin(115200);
 
  WiFi.begin(ssid, password);
   
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println("Connecting to WiFi...");
  }
 
  bool success = Ping.ping(ip, 3);
 
  if(!success){
    Serial.println("Ping failed");
    return;
  }
 
  Serial.println("Ping succesful.");
 
 
}
 
void loop() { }
