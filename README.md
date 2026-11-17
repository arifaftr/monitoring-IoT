# 🌡️ Sistem Monitoring Suhu, Kelembapan, dan Deteksi Gerakan Berbasis IoT

## 📌 Deskripsi Proyek

Proyek ini merupakan implementasi Internet of Things (IoT) menggunakan mikrokontroler ESP32 DevKit V1 dengan menggabungkan dua sensor, yaitu DHT22 dan PIR HC-SR501.

Sistem ini dirancang untuk melakukan monitoring kondisi lingkungan dengan membaca suhu dan kelembapan udara serta mendeteksi adanya gerakan di sekitar sensor.

ESP32 digunakan sebagai pusat pengendali yang membaca data dari kedua sensor, memproses data, dan menghubungkan perangkat ke jaringan Wi-Fi. Hasil pembacaan ditampilkan melalui Serial Monitor Arduino IDE.

## 🎯 Tujuan

1. Menerapkan konsep Internet of Things menggunakan ESP32.
2. Mengintegrasikan dua sensor dalam satu sistem.
3. Membaca suhu dan kelembapan menggunakan DHT22.
4. Mendeteksi gerakan menggunakan PIR HC-SR501.
5. Mengimplementasikan koneksi Wi-Fi pada ESP32.
6. Menampilkan hasil pembacaan sensor melalui Serial Monitor.

## 🛠️ Komponen yang Digunakan

| No. | Komponen | Jumlah |
|---|---|---|
| 1 | ESP32 DevKit V1 | 1 |
| 2 | Sensor DHT22 | 1 |
| 3 | Sensor PIR HC-SR501 | 1 |
| 4 | Breadboard | 1 |
| 5 | Kabel jumper | Secukupnya |
| 6 | Kabel USB | 1 |

## 💻 Software dan Library

- Arduino IDE 2.3.10
- DHT Sensor Library by Adafruit
- Adafruit Unified Sensor
- WiFi.h (library bawaan ESP32)

## 🔌 Konfigurasi Pin

| Komponen | Pin Sensor | Pin ESP32 |
|---|---|---|
| DHT22 | + (VCC) | 3V3 |
| DHT22 | OUT (DATA) | GPIO 4 |
| DHT22 | - (GND) | GND |
| PIR | VCC | VIN/5V |
| PIR | OUT | GPIO 19 |
| PIR | GND | GND |

Catatan: Sambungan PIR menggunakan suplai 5V sesuai spesifikasi modul, dengan keluaran OUT maksimal 3,3V untuk keamanan GPIO ESP32.

## ⚙️ Cara Kerja Sistem

1. ESP32 dinyalakan melalui kabel USB.
2. Sistem melakukan inisialisasi sensor DHT22 dan PIR.
3. ESP32 menghubungkan perangkat ke jaringan Wi-Fi.
4. DHT22 membaca suhu dan kelembapan udara.
5. PIR mendeteksi adanya gerakan berdasarkan perubahan radiasi inframerah.
6. ESP32 memproses data dari kedua sensor.
7. Hasil pembacaan ditampilkan melalui Serial Monitor.
8. Proses pembacaan diulang setiap dua detik.
9. 
---

**Proyek Internet of Things – ESP32 DevKit V1**

Dibuat untuk memenuhi tugas responsi mata kuliah Internet of Things.
