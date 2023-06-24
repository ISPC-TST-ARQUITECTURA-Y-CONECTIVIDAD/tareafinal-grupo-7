#include <Wire.h>
#include <U8g2lib.h>

#define OLED_ADDRESS 0x3C

U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);

void setup() {
  Wire.begin(21, 22);  // Inicializar la comunicación I2C con los pines GPIO21 (SCL) y GPIO22 (SDA)
  u8g2.begin();  // Inicializar la pantalla OLED
  u8g2.setFlipMode(1); // Girar la pantalla si es necesario (0 = no girar, 1 = girar)
  
  Serial.begin(115200);  // Inicializar el Monitor Serie
  while (!Serial);  // Esperar a que se establezca la conexión serial
}

void loop() {
  u8g2.clearBuffer();  // Limpiar el buffer de la pantalla

  u8g2.setFont(u8g2_font_ncenB10_tr);  // Establecer la fuente
  u8g2.drawStr(0, 15, "....ES DE 15....");  // Mostrar texto en la pantalla

  u8g2.sendBuffer();  // Enviar el contenido del buffer a la pantalla

  Serial.println("ABCDEFGHIJKLMN");  // Imprimir texto en el Monitor Serie

  delay(2000);  // Esperar 2 segundos

  u8g2.clearBuffer();  // Limpiar el buffer de la pantalla

  u8g2.setFont(u8g2_font_ncenB10_tr);  // Establecer la fuente
  u8g2.drawStr(0, 60, "----ES DE 60----");  // Mostrar texto en la pantalla

  u8g2.sendBuffer();  // Enviar el contenido del buffer a la pantalla

  Serial.println("ABCDEFGHIJKLMN");  // Imprimir texto en el Monitor Serie

  delay(2000);  // Esperar 2 segundos

}
