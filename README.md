Projek kamu untuk kesan bayi yang tertinggal dalam kereta adalah sangat penting untuk keselamatan. Kita boleh gabungkan sensor pergerakan (PIR sensor) dan sensor bunyi (microphone sensor / sound sensor). Bila ada pergerakan atau bunyi dalam kereta, sistem akan mengeluarkan bunyi amaran (guna buzzer).

💡 Komponen yang Diperlukan:
Arduino Uno

PIR Sensor (untuk kesan pergerakan bayi)

Sound Sensor (untuk kesan tangisan atau bunyi bayi)

Buzzer (untuk bunyi amaran)

LED (pilihan – untuk tunjuk status)

Power bank / sambungan 5V dari kereta

🔧 Litar Ringkas
Komponen	Sambungan ke Arduino
PIR Sensor OUT	pin 2
Sound Sensor OUT	pin 3
Buzzer +	pin 4
LED + (optional)	pin 5
Semua GND	GND
Semua VCC	5V

💻 Kod Arduino (Contoh)
cpp
Copy
Edit
// Pin sambungan
const int pirPin = 2;
const int soundPin = 3;
const int buzzerPin = 4;
const int ledPin = 5;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(soundPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int motionDetected = digitalRead(pirPin);
  int soundDetected = digitalRead(soundPin);

  if (motionDetected == HIGH || soundDetected == HIGH) {
    // Jika ada pergerakan atau bunyi
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(ledPin, HIGH);
    Serial.println("Amaran: Ada bayi dalam kereta!");
    delay(1000); // bunyi 1 saat
  } else {
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledPin, LOW);
  }

  delay(200); // delay supaya tak terlalu cepat ulang
}
✅ Cara Kerja Projek:
PIR sensor kesan pergerakan bayi.

Sound sensor kesan bunyi tangisan.

Kalau salah satu aktif, buzzer dan LED akan hidup sebagai amaran.

Mudah dipasang dalam kereta – letak di tempat bayi duduk (car seat).

