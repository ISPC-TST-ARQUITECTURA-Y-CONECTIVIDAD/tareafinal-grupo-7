#include <Wire.h>
#include "SSD1306Ascii.h"
#include "SSD1306AsciiWire.h"
#include <SoftwareSerial.h>
#include <TinyGPSPlus.h>

// 0X3C+SA0 - 0x3C or 0x3D
#define DISPLAYI2C_ADDRESS 0x3C

SSD1306AsciiWire oled;

TinyGPSPlus gps;
SoftwareSerial gpsSerial(7,6);//rx,tx

float lat = -1,lng = -1;
float speed=0;
float altitude=0;
uint8_t satellites=0;
float course=0;

uint8_t gpsHour = 255;
uint8_t gpsMinute = 255;
uint8_t gpsSecond = 255;

float voltage=12.0;

bool gpsaccurate=false;

bool dotSwitch=true;

//------------------------------------------------------------------------------
void setup() {
  Wire.begin();
  Wire.setClock(400000L);

  gpsSerial.begin(9600);

  oled.begin(&Adafruit128x64, DISPLAYI2C_ADDRESS);
  oled.clear();

  oled.setFont(System5x7);
  oled.set1X();
  oled.clear();
  oled.println("");
  oled.println("");
  oled.println("   GPS GRUPO 7 ");
  oled.println("");
  oled.println("");
  oled.println("  TRABAJO FINAL  ");
  delay(3500);
  oled.clear();


  oled.setCursor(48,1);
  oled.print("km/h");
}
//------------------------------------------------------------------------------
void loop() {
  readGPSData();
  //oled.clear();
  printDotSwitch();
  
  printSpeed();
  
  printSatellites();
  
  printAltitude();

  printClock();


/*
  char satellitestr[2];
  itoa(satellites, satellitestr, 10);
  oled.print("satellites ");
  oled.print(satellitestr);

  oled.println("");
  
  char availablestr[4];
  itoa(gpsSerial.available(), availablestr, 10);
  oled.print("available ");
  oled.print(availablestr);
*/
  delay(1000);
}

void printDotSwitch(){
  oled.setCursor(122,0);
  dotSwitch=!dotSwitch;
  if(dotSwitch){
    oled.print("+");
  }else{
    oled.print("-");
  }
}

void printSpeed(){

  if(gpsaccurate) {
    char speedstr[3];
    dtostrf(speed, 3, 0, speedstr);
    oled.clear(0,90,3,3); //clear the waiting text
    oled.setCursor(5,1);
    oled.setFont(Callibri15);
    oled.set2X();
    oled.print(speedstr);
    oled.setFont(System5x7);
    oled.set1X();

  }else{
    oled.clear(0,44,1,3);
    oled.setCursor(0,3);
    oled.println(" Esperando senal GPS");
  }
  
}

void printSatellites(){
  char satellitestr[2];
  itoa(satellites, satellitestr, 10);
  oled.clear(81,115,6,6);

  if(satellites>9){
    oled.setCursor(72,6);
  }else{
    oled.setCursor(58,6);
  }
  oled.print(satellitestr);
  oled.setCursor(65,6);
  oled.print("Satelites");
}

void printAltitude(){
  char altitudestr[4];
  sprintf (altitudestr, "%4d", (int)(altitude));
  oled.clear(82,112,5,5); // TODO

  if(gpsaccurate){
    oled.setCursor(82,5);
    oled.print(altitudestr);
    oled.setCursor(107,5);
    oled.print("m");
  }
}

void printClock(){
  oled.setCursor(5,6);

  if(gpsHour < 255) {
    char timestr[8];
    sprintf (timestr, "%02d:%02d:%02d", gpsHour, gpsMinute, gpsSecond);
    oled.print(timestr);
  }else{
    char timestr[8] = {0};
    oled.print("        ");
  }
}

void readGPSData(){
  while (gpsSerial.available() > 0){
    if (gps.encode(gpsSerial.read())){
      if(gps.speed.isUpdated()){
        speed = gps.speed.kmph();
      }
      if(gps.altitude.isUpdated()){
        altitude = gps.altitude.meters();
      }
      if(gps.satellites.isUpdated()){
        satellites = gps.satellites.value();
      }
      if(gps.course.isUpdated()){
        course = gps.course.deg();
      }

      if(gps.time.isValid()){     
        gpsHour=gps.time.hour();
        gpsMinute=gps.time.minute();
        gpsSecond=gps.time.second();
      }else{
        gpsHour=255;
        gpsMinute=255;
        gpsSecond=255;
      }

      if(gps.location.isValid()){
        gpsaccurate=true;
      }else{
        gpsaccurate=false;
      }
    }
  }
}
