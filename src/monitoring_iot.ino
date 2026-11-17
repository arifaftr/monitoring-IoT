
#include <WiFi.h>
#include "DHT.h"

// Ganti dengan nama dan password Wi-Fi kamu
const char* ssid = "NAMA_WIFI";
const char* password = "PASSWORD_WIFI";

// Pengaturan DHT22
#define DHTPIN 4
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

// Pengaturan PIR
#define PIR_PIN 19

void setup() {
  Serial.begin(115200);

  // Memulai sensor
  dht.begin();
  pinMode(PIR_PIN, INPUT);

  // Menghubungkan Wi-Fi
  Serial.println("Memulai sistem monitoring IoT...");
  WiFi.begin(ssid, password);

  Serial.print("Menghubungkan ke Wi-Fi");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.println("Wi-Fi berhasil terhubung!");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  // Membaca data DHT22
  float suhu = dht.readTemperature();
  float kelembapan = dht.readHumidity();

  // Membaca data PIR
  int gerakan = digitalRead(PIR_PIN);

  Serial.println("\n===== MONITORING IoT =====");

  if (isnan(suhu) || isnan(kelembapan)) {
    Serial.println("DHT22 gagal membaca data!");
  } else {
    Serial.print("Suhu       : ");
    Serial.print(suhu);
    Serial.println(" °C");

    Serial.print("Kelembapan : ");
    Serial.print(kelembapan);
    Serial.println(" %");
  }

  Serial.print("Deteksi    : ");

  if (gerakan == HIGH) {
    Serial.println("GERAKAN TERDETEKSI");
  } else {
    Serial.println("TIDAK ADA GERAKAN");
  }

  Serial.println("==========================");

  delay(2000);
}
