## $\textcolor{orange}{Hardware:}$

Para la implementacion es necesario contar con los siguientes elementos:

- ESP32 – 1
- NEO-6M GPS  – 1
- SSD1206 0.96 inch OLED display
- Jumpers de conexion M/M 
- Prototoboard
- App Blynk

## $\textcolor{orange}{ESP32\ :}$

![image](https://github.com/ISPC-TST-ARQUITECTURA-Y-CONECTIVIDAD/tareafinal-grupo-7/assets/46485082/1d508469-7037-4e32-be27-a9b08d579210)

El ESP32 es un microcontrolador de bajo costo y bajo consumo de energía que ha ganado popularidad en el campo de la electrónica y el desarrollo de proyectos IoT (Internet de las cosas). Aquí están algunas de las características técnicas clave del ESP32:

- [ ] Procesador:
      El ESP32 cuenta con un procesador Tensilica Xtensa LX6 dual-core, que tiene una frecuencia de reloj de hasta 240 MHz.
- [ ] Memoria:
       Tiene 520 KB de SRAM (memoria de acceso aleatorio) y 448 KB de ROM (memoria de solo lectura). Además, se pueden agregar chips de memoria externa para almacenamiento adicional.
- [ ] Wi-Fi:
      El ESP32 admite conectividad Wi-Fi 802.11 b/g/n, lo que le permite conectarse a redes inalámbricas y utilizar protocolos como TCP/IP para la comunicación en red.
- [ ] Bluetooth:
      Además del Wi-Fi, el ESP32 también tiene soporte para Bluetooth 4.2 y Bluetooth Low Energy (BLE), lo que le permite interactuar con dispositivos y periféricos compatibles con Bluetooth.
- [ ] Puertos y periféricos:
      El ESP32 cuenta con una amplia variedad de interfaces y periféricos, que incluyen UART, SPI, I2C, I2S, PWM, DAC, ADC, GPIO, entre otros. Esto proporciona flexibilidad en la conexión con otros dispositivos y sensores.
- [ ] Seguridad:
      El ESP32 ofrece funciones de seguridad, como el cifrado de datos mediante AES, hash de mensajes mediante SHA, generación de números aleatorios y autenticación segura.
- [ ] Bajo consumo de energía:
      El ESP32 está diseñado para ser altamente eficiente en términos de consumo de energía, lo que lo hace adecuado para aplicaciones que requieren una larga duración de la batería.
- [ ] Sistema operativo:
      Puede ejecutar el sistema operativo en tiempo real FreeRTOS, lo que permite una programación multitarea y una gestión eficiente de los recursos del sistema.
- [ ] Entorno de desarrollo:
      El ESP32 es compatible con diferentes entornos de desarrollo, como el Arduino IDE, PlatformIO y el framework de desarrollo de Espressif, que proporciona bibliotecas y herramientas para facilitar el desarrollo de aplicaciones.

Estas son solo algunas de las características técnicas del ESP32. Este microcontrolador es muy versátil y se utiliza en una amplia gama de proyectos, desde aplicaciones IoT hasta dispositivos portátiles y sistemas embebidos.



## $\textcolor{orange}{PinOut\ ESP32:}$

![image](https://github.com/ISPC-TST-ARQUITECTURA-Y-CONECTIVIDAD/tareafinal-grupo-7/assets/46485082/493b507b-d568-4ca0-bac7-ba7af67bad54)


## $\textcolor{orange}{NEO-6M\ GPS:}$

![image](https://github.com/ISPC-TST-ARQUITECTURA-Y-CONECTIVIDAD/tareafinal-grupo-7/assets/46485082/b9ec99f9-bdda-4cc6-bcb6-82e269ac4372)

El módulo GPS NEO-6M es un dispositivo GPS (Sistema de Posicionamiento Global) compacto y fácil de usar que proporciona información precisa de la ubicación y el tiempo. Aquí están algunas de las características técnicas del módulo GPS NEO-6M:

1. Chip GPS: El NEO-6M utiliza el chip u-blox NEO-6M, que es capaz de recibir señales GPS de satélites para determinar la ubicación geográfica con precisión.

2. Canales GPS: El módulo NEO-6M es capaz de rastrear hasta 22 canales GPS simultáneamente, lo que permite una mejor recepción de señales y una mayor precisión de posicionamiento.

3. Sensibilidad: El módulo NEO-6M tiene una alta sensibilidad de recepción, lo que le permite adquirir señales GPS en entornos desafiantes, como áreas urbanas densamente pobladas o bajo cubierta.

4. Precisión: Proporciona información de ubicación con una precisión de hasta 2.5 metros en condiciones ideales al aire libre.

5. Velocidad de actualización: El módulo NEO-6M tiene una velocidad de actualización predeterminada de 1 Hz, lo que significa que proporciona datos de ubicación una vez por segundo. Esta velocidad de actualización se puede ajustar mediante comandos específicos.

6. Interfaz: El módulo NEO-6M se comunica con otros dispositivos utilizando una interfaz de comunicación serial UART (Universal Asynchronous Receiver-Transmitter).

7. Bajo consumo de energía: El NEO-6M está diseñado para tener un bajo consumo de energía, lo que lo hace adecuado para aplicaciones portátiles o que funcionen con baterías.

8. Antena GPS integrada: El módulo NEO-6M incluye una antena GPS integrada, lo que simplifica su instalación y uso.

9. Comandos AT: El módulo NEO-6M utiliza comandos AT (Hayes command set) para configurar y controlar el funcionamiento del GPS. Estos comandos se envían a través de la interfaz UART.

Es importante tener en cuenta que el módulo GPS NEO-6M requiere una conexión adecuada a satélites GPS para proporcionar datos precisos de ubicación. Además, puede requerir una configuración inicial y una correcta interpretación de los datos para obtener resultados óptimos en el uso del módulo.

![image](https://github.com/ISPC-TST-ARQUITECTURA-Y-CONECTIVIDAD/tareafinal-grupo-7/assets/46485082/df5e523f-6b7a-4a7d-82cc-0ba05e31c5f1)



## $\textcolor{orange}{SSD1206\ 0.96\ inch\ OLED\ display:}$


![image](https://github.com/ISPC-TST-ARQUITECTURA-Y-CONECTIVIDAD/tareafinal-grupo-7/assets/46485082/60ce3887-5f1e-4f44-be47-6e880ff925d4)

El módulo SSD1306 es un dispositivo de visualización OLED (Organic Light Emitting Diode) de 0.96 pulgadas que se utiliza comúnmente en proyectos electrónicos para mostrar información de manera clara y legible. Aquí están algunas de las características técnicas del módulo SSD1306:

1. Tecnología OLED: El módulo utiliza una pantalla OLED, que ofrece una excelente calidad de imagen y contraste. Cada píxel de la pantalla emite su propia luz, lo que permite obtener negros profundos y colores vivos.

2. Tamaño de pantalla: El módulo tiene una pantalla de 0.96 pulgadas, que ofrece suficiente espacio para mostrar texto, gráficos y otros elementos visuales de manera legible.

3. Resolución: El módulo SSD1306 tiene una resolución de 128x64 píxeles, lo que proporciona una buena cantidad de detalle en la visualización.

4. Controlador: El módulo utiliza el controlador SSD1306, que gestiona la comunicación y el control de la pantalla OLED.

5. Interfaz: El módulo se comunica con otros dispositivos utilizando una interfaz de comunicación serial, como I2C (Inter-Integrated Circuit) o SPI (Serial Peripheral Interface).

6. Retroiluminación: A diferencia de las pantallas LCD, las pantallas OLED no requieren retroiluminación adicional, ya que cada píxel emite su propia luz. Esto resulta en un menor consumo de energía y un mayor contraste.

7. Ángulo de visión amplio: La pantalla OLED del módulo SSD1306 ofrece un amplio ángulo de visión, lo que significa que la información en la pantalla es claramente visible desde diferentes direcciones.

8. Bajo consumo de energía: Debido a su naturaleza OLED, el módulo SSD1306 consume menos energía en comparación con las pantallas LCD, lo que es beneficioso para proyectos alimentados por baterías.

9. Bibliotecas y soporte: Existen bibliotecas y librerías disponibles para programar y controlar el módulo SSD1306 en diferentes plataformas y entornos de desarrollo, como Arduino, Raspberry Pi y microcontroladores.

El módulo SSD1306 0.96-inch OLED Display es una opción popular para proyectos electrónicos que requieren una pantalla pequeña y de bajo consumo con buena calidad de imagen. Su tamaño compacto y su facilidad de uso lo hacen adecuado para una amplia gama de aplicaciones, como dispositivos portátiles, relojes, medidores y muchos otros proyectos que requieran una interfaz visual.


## $\textcolor{orange}{Varios:}$


Un protoboard, también conocido como placa de pruebas o breadboard, es una herramienta comúnmente utilizada en electrónica para crear y prototipar circuitos electrónicos de forma rápida y sin necesidad de soldar los componentes. Consiste en una base de plástico que contiene una matriz de agujeros interconectados eléctricamente.

La matriz de agujeros en el protoboard está dispuesta en filas y columnas. Cada fila de agujeros está conectada eléctricamente de forma horizontal, mientras que las columnas están conectadas verticalmente. Esto permite que los componentes electrónicos se inserten en los agujeros y se interconecten entre sí mediante cables o jumpers.

Los jumpers son pequeños cables conductores con terminales en ambos extremos que se utilizan para establecer conexiones eléctricas en el protoboard. Estos jumpers se insertan en los agujeros del protoboard y permiten la conexión entre los diferentes componentes, como resistencias, transistores, diodos, entre otros.

La ventaja del protoboard y los jumpers es que permiten realizar cambios y modificaciones rápidas en los circuitos sin necesidad de soldar los componentes. Esto facilita el proceso de diseño y prueba de prototipos, ya que se pueden reorganizar los componentes y las conexiones de manera flexible y rápida.

El protoboard y los jumpers son ampliamente utilizados por estudiantes, aficionados y profesionales de la electrónica para crear y experimentar con circuitos antes de realizar implementaciones más permanentes. Además, son herramientas ideales para aprender los conceptos básicos de circuitos electrónicos y realizar pruebas y depuraciones de manera efectiva.

![image](https://github.com/ISPC-TST-ARQUITECTURA-Y-CONECTIVIDAD/tarea7-grupo-7/assets/46485082/0955a03a-db81-4c7f-8938-6a222c2aed72)


