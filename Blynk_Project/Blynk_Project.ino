#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "Enter your token";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "SSID";
char pass[] = "PASSWORD";

void setup()
{
  // Debug console
  Serial.begin(9600);
  digitalWrite(D3,HIGH);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}

