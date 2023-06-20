#include <TinyGPS++.h>
#include <SoftwareSerial.h>
#include <WiFi.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>

// Configuración de la red Wi-Fi
const char* ssid = "TP-Link_2CF6";
const char* password = "48302241";

// Pines GPIO utilizados para la comunicación con el módulo GPS
const int gpsRxPin = 3;
const int gpsTxPin = 1;

SoftwareSerial gpsSerial(gpsRxPin, gpsTxPin);
TinyGPSPlus gps;

// Configuración del servidor web
const char* serverUrl = "http://tu_servidor_web.com/guardar_ubicacion.php";

void setup() {
  Serial.begin(115200);
  gpsSerial.begin(9600);

  // Conectar a la red Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Conectando a la red Wi-Fi...");
  }
  Serial.println("Conexión Wi-Fi establecida.");
}

void loop() {
  while (gpsSerial.available() > 0) {
    if (gps.encode(gpsSerial.read())) {
      if (gps.location.isUpdated()) {
        // Obtener las coordenadas de latitud y longitud
        float latitud = gps.location.lat();
        float longitud = gps.location.lng();

        // Mostrar la latitud y longitud en el Monitor Serie
        Serial.print("Latitud: ");
        Serial.println(latitud, 6);
        Serial.print("Longitud: ");
        Serial.println(longitud, 6);
        Serial.println();

        // Opcional: Enviar los datos al servidor web
        // ...
      }
    }
  }
}
