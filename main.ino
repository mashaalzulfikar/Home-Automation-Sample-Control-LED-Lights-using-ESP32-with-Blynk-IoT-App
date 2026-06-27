// ESP32 Home Automation with Blynk IoT

//Include the library files
#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

// Enter your Auth token
char auth[] = "REPLACE_WITH_YOUR_TOKEN";

//Enter your WIFI SSID and password
char ssid[] = "REPLACE_WITH_YOUR_SSID";
char pass[] = "REPLACE_WITH_YOUR_PASSWORD";

void setup() {
  // Debug console
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop() {
  Blynk.run();
}
