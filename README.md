# Arduino Buzzer-LDR Alarm Sistemi

Bu proje, **Arduino**, **LDR (ışık sensörü)** ve **buzzer** kullanarak bir alarm sistemi simüle eder.  
Proje, ortamın aydınlık veya karanlık olmasına göre buzzerın davranışını değiştirir.

## Proje Açıklaması

- **Aydınlık ortamda**:  
  - İlk 5 saniye boyunca buzzer aralıklı olarak çalar.  
  - 5 saniyeden sonra buzzer daha sık çalmaya başlar.
- **Karanlık ortamda**:  
  - Buzzer susar, hiçbir ses çıkmaz.

Bu sayede örneğin sabah uyanmak isteyen biri için ışıkla tetiklenen bir alarm sistemi oluşturulabilir.

## Kullanılan Malzemeler

- Arduino Uno
- Buzzer
- LDR (Photoresistor)
- 10k Ohm direnç
- Bağlantı kabloları
- Breadboard


## Devre Şeması
> LDR bir ucu 5V, diğer ucu direnç üzerinden GND’ye bağlanır. Ortadaki bağlantı noktası Arduino analog pin A0’a gider. Buzzer dijital pin 8’e bağlanmıştır.
