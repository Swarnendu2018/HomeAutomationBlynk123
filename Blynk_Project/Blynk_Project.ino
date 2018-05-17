#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "c8b7f1c412ac4e128e1915373a13de62";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Swar";
char pass[] = "12345678";

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

