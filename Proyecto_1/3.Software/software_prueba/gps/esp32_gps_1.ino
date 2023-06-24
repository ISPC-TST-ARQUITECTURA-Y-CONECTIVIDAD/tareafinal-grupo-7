#include <TinyGPS++.h>
#include <SoftwareSerial.h>

// Pines GPIO utilizados para la comunicación con el módulo GPS
const int gpsRxPin = 3;
const int gpsTxPin = 1;

SoftwareSerial gpsSerial(gpsRxPin, gpsTxPin);
TinyGPSPlus gps;

void setup() {
  Serial.begin(9600);
  gpsSerial.begin(9600);
}

void loop() {
  while (gpsSerial.available() > 0) {
    if (gps.encode(gpsSerial.read())) {
      if (gps.location.isUpdated()) {
        Serial.print("Latitud: ");
        Serial.println(gps.location.lat(), 5);// Mostrar latitud con 5 decimales
        Serial.print("Longitud: ");
        Serial.println(gps.location.lng(), 5);// Mostrar latitud con 5 decimales
        delay(1000);
      }
    }
  }
}
