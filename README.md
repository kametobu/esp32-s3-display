Aqui está o conteúdo ajustado do arquivo `config.md` para melhor compatibilidade e leitura:

**Placa de Desenvolvimento ESP32-S3**

### Descrição

* Placa de desenvolvimento com ESP32-S3 e display de 1,9 polegadas
* Ideal para projetos IOT (Internet das Coisas)
* Suporta Wi-Fi e Bluetooth

### Especificações Técnicas

| Característica | Detalhe |
| --- | --- |
| Processador | Dual-core Xtensas LX6 de 32 bits, 80 MHz a 240 MHz |
| Memória RAM | 520 KB |
| Memória ROM | 448 KB |
| Memória Flash | 16 MB |
| Conectividade | Wi-Fi 802.11 b/g/n, Bluetooth v4.2 (BLE) |
| GPIOs | 20 |

### Especificações de Consumo e Temperatura

* Consumo de corrente: Média de 80mA
* Temperatura de operação: -40°C a +85'C

### Como Usar o Produto

1. Conecte a placa a um computador via cabo USB.
2. Instale os drivers necessários para o ESP32-S3.
3. Baixe e instale o Arduino IDE ou outra IDE compatível.
4. Configure a IDE para reconhecer a placa ESP32-S3.
5. Escreva ou carregue o código desejado na IDE.
6. Compile e faça o upload do código para a placa.
7. Monitore a execução do código e interaja com o display conforme necessário.

### Configurações Adicionais

#### LVGL
- path: .pio/libdeps/esp32s3/lvgl/lv_conf.h
- if 0 -> 1

#### TFT_eSPI
- path: .pio/libdeps/esp32s3/lvgl/User_Setup.h
- add in file:
- #define ST7789_DRIVER
- #define TFT_WIDTH 170
- #define TFT_HEIGHT 320
- #define TFT_MISO -1
- #define TFT_MOSI 13
- #define TFT_SCLK 12
- #define TFT_CS 10
- #define TFT_DC 11
- #define TFT_RST 1
- #define TFT_BL 14
- #define TFT_BACKLIGHT_ON HIGH
- #define LOAD_GLCD
- #define LOAD_FONT2
- #define LOAD_FONT4
- #define LOAD_FONT6
- #define LOAD_FONT7
- #define LOAD_FONT8
- #define LOAD_GFXFF
- #define SMOOTH_FONT
- #define SPI_FREQUENCY 40000000