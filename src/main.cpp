#include <Arduino.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI(); // Instância do display

void setup()
{
  Serial.println("INICIANDO.....");
  Serial.begin(115200);
  tft.init();                // Inicializa o display
  tft.setRotation(1);        // Define a orientação do display
  tft.fillScreen(TFT_BLACK); // Limpa a tela com preto

  // Exibe texto na tela
  tft.setTextColor(TFT_WHITE, TFT_BLACK); // Cor do texto e do fundo
  tft.setTextSize(2);                     // Tamanho do texto
  tft.setCursor(10, 10);                  // Posição inicial
  tft.println("Teste ST7789!");
  Serial.println("Finalizado setup.....");
}

void loop()
{
  // Desenha um círculo vermelho em uma posição aleatória
  Serial.println("Rodand");
  tft.fillCircle(random(20, 150), random(20, 300), 10, TFT_RED);
  delay(500);
}
