#if defined(ESP8266)
#include <ESP8266WiFi.h>
#elif defined(ESP32)
#include <WiFi.h>
#endif

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 
#define SCREEN_HEIGHT 64 

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);


void setup() {
  // put your setup code here, to run once:
  // Serial.begin(115200);
  // Serial.println("Hola, ESP32!");
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
}

void loop() {
  // put your main code here, to run repeatedly:
  display.clearDisplay();
  display.setTextSize(1);             
  display.setTextColor(WHITE);        
  display.setCursor(0,20);             
  display.println("Hola, Mundo!");
  display.setCursor(0,30);             
  display.println("Bienvenidos!");
  display.display();
  delay(2000);
}
