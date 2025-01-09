#include <Arduino.h>
#include <TFT_eSPI.h>
#include <SPI.h>
#include <WiFi.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>

const char* ssid = "Redmi Note 10";
const char* password = "";

TFT_eSPI tft = TFT_eSPI(); // Instância do display

const String url = "https://v2.jokeapi.dev/joke/Programming";

String getJoke() {
  HTTPClient http;
  http.useHTTP10(true);
  http.begin(url);
  http.GET();
  String result = http.getString();

  DynamicJsonDocument doc(2048);
  DeserializationError error = deserializeJson(doc, result);

  // Test if parsing succeeds.
  if (error) {
    Serial.print("deserializeJson() failed: ");
    Serial.println(error.c_str());
    return "<error>";
  }

  String type = doc["type"].as<String>();
  String joke = doc["joke"].as<String>();
  String setup = doc["setup"].as<String>();
  String delivery = doc["delivery"].as<String>();
  http.end();
  return type.equals("single") ? joke : setup + "  " + delivery;
}

void nextJoke() {
  tft.setTextColor(TFT_GREEN);
  tft.println("\nLoading joke...");

  String joke = getJoke();
  tft.setTextColor(TFT_GREEN);
  tft.println(joke);
}


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

  nextJoke();
}


void loop()
{
  delay(1000);
}
