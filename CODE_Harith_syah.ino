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
