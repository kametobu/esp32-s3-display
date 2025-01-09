#include <Arduino.h>
#include <TFT_eSPI.h>
#include <SPI.h>
#include <WiFi.h>

const char* ssid = "Redmi Note 10";
const char* password = "";

TFT_eSPI tft = TFT_eSPI(); // Instância do display

void setup()
{
  tft.init();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);
  tft.setTextSize(50);
  WiFi.begin(ssid, password);
  tft.setTextSize(2);
  tft.print("Connecting to WiFi");

  while (WiFi.status() != WL_CONNECTED) {
    delay(100);
    tft.print(".");
  }

  tft.print("\nOK! IP=");
  tft.println(WiFi.localIP());
}


void loop()
{
  delay(1000);
}
