#include <SoftwareSerial.h>
#include "TinyGPS++.h"

TinyGPSPlus gps;
SoftwareSerial ss;

int rx = 19;
int tx = 18;

void setup()
{
}

void loop()
{
    while (ss.available() > 0) {
      gps.encode(ss.read);
    }

    Serial.print("LAT="); Serial.print(gps.location.lat(), 6);
    Serial.print("LNG="); Serial.println(gps.location.lng(), 6);
}
