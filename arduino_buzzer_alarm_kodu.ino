int threshold = 500; // Işık seviyesi eşiği
int buzzerPin = 9; // Buzzer'ın bağlandığı pin

void setup() {
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int lightLevel = analogRead(A0); // A0 pininden ışık seviyesi oku
  Serial.println(lightLevel); // Işık seviyesini seri porttan kontrol etmek için yazdır
  
  if (lightLevel > threshold) {
    // Aydınlık ortamda kaldığı süre boyunca buzzer ilk 5 saniye belirli aralıklarla ötsün
    for (int i = 0; i < 5; i++) {
      tone(buzzerPin, 1000); // Buzzer'ı 1000 Hz frekansında çal
      delay(500);
      noTone(buzzerPin); // Buzzer'ı durdur
      delay(500);
    }
    
    // Eğer maruz kalınan aydınlık süresi 5 saniyeden uzundaysa, 5. saniyeden sonra buzzer daha sık çalsın
    while (lightLevel > threshold) {
      tone(buzzerPin, 2000); // Buzzer'ı 2000 Hz frekansında çal
      delay(100);
      noTone(buzzerPin); // Buzzer'ı durdur
      delay(100);
      lightLevel = analogRead(A0); // Yeniden ışık seviyesini oku
    }
  } else {
    noTone(buzzerPin); // Karanlık ortamda buzzer susmalı
  }
}