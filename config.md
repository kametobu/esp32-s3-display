# Descrição

# PLACA DESENVOLVIMENTO ESP32 COM
DISPLAY 1,9 POL NFE
Placa de desenvolvimento com ESP32-S3 e
display de 1,9 polegadas para projetos IOT.
INFORMAÇÕES ADICIONAIS
Ideal para projetos de Internet das Coisas (IOT)
Suporta Wi-Fi e Bluetooth
Display colorido de 1,9 polegadas com
resolução de 170x320 pixels
Alta capacidade de processamento com
dual-core Xtensae LX6
Não tem TOUCH SCREEN

# COMPATIBILIDADE
Compatível com Arduino IDE
Suporta MicroPython
Compatível com plataformas de IOT como
Node-RED e Home Assistant
Funciona com sensores e módulos padrão de
3,3V

# ESPECIFICAÇÕES TÉCNICAS
Processador: Dual-core Xtensas LX6 de 32
bits, 80 MHz a 240 MHz
Memória: 520 KB de RAM, 448 KB de ROM, 16
MB de Flash
Conectividade: Wi-Fi 802.11 b/g/n, Bluetooth
v4.2 (BLE)
GPIOs: 20
Consumo de corrente: Média de 80mA
Temperatura de operação: -400C a +85'C

# COMO USAR O PRODUTO
Conecte a placa a um computador via cabo
USB.
Instale os drivers necessários para o ESP32-S3.
Baixe e instale o Arduino IDE ou outra IDE
compatível.
Configure a IDE para reconhecer a placa
ESP32-S3.
Escreva ou carregue o código desejado na IDE.
Compile e faça o upload do código para a
placa.
Monitore a execução do código e interaja com
o display conforme necessário.


# LVGL
- path: .pio/libdeps/esp32s3/lvgl/lv_conf.h
- - if 0 -> 1

# TFT_eSPI
- path: .pio/libdeps/esp32s3/lvgl/User_Setup.h
- - add in file:
- - - - #define ST7789_DRIVER
- - - - #define TFT_WIDTH 170
- - - - #define TFT_HEIGHT 320
- - - - #define TFT_MISO -1
- - - - #define TFT_MOSI 13
- - - - #define TFT_SCLK 12
- - - - #define TFT_CS 10
- - - - #define TFT_DC 11
- - - - #define TFT_RST 1
- - - - #define TFT_BL 14
- - - - #define TFT_BACKLIGHT_ON HIGH
- - - - #define LOAD_GLCD
- - - - #define LOAD_FONT2
- - - - #define LOAD_FONT4
- - - - #define LOAD_FONT6
- - - - #define LOAD_FONT7
- - - - #define LOAD_FONT8
- - - - #define LOAD_GFXFF
- - - - #define SMOOTH_FONT
- - - - #define SPI_FREQUENCY 40000000