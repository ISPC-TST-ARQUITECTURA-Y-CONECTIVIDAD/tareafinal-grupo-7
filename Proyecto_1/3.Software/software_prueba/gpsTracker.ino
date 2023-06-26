#include <Arduino.h>

void setup() {
  Serial.begin(9600);
}

void loop() {
  float latitude = random(-90, 90) + random(0, 10000) / 10000.0;
  float longitude = random(-180, 180) + random(0, 10000) / 10000.0;

  Serial.print("Latitud: ");
  Serial.println(latitude, 6);
  Serial.print("Longitud: ");
  Serial.println(longitude, 6);

  delay(1000);
}
