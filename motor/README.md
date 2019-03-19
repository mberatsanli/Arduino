# Motor Kütüphanesi v1.0.1
> Analog pinler için uyumlu değildir!

### Kütüphaneyi Dahil Etmek
	#include "motor.h";
Lütfen include etmediyseniz `#include "Arduino.h"` adlı kütüphaneyide include ediniz.

### Başlatma
	motor.setup();
koduyla pinlere güç yollarsınız, motor kullanıma hazır olur.

### Pinler
Ön tanımlı olarak atanan pinler `4, 5, 6, 7` olarak ayarlanmıştır

### Özel Pin Ataması
  Pin atamasını `motor.setup();` kısmından önce yapanız! Aksi taktirde ön tanımlı pinler kullanılır.

	int benimPinler[] = {10, 11, 12, 13};
	motor.pinAta(benimPinler);


### Motor Testi
  Motor testi olayında tüm hareketler 0.050 saniye aralıkla denenir.

	motor.test();


### Motor Hareketleri
	motor.ileri();
	motor.geri();
	motor.sol();
	motor.sag();
	motor.dur();

### Örnek Kod (ornek.ino)
	#include "Arduino.h"
	#include "motor.h"

	int benimPinler[] = {10, 11, 12, 13}; 

	void setup() {
  		motor.pinAta(benimPinler);
  		motor.setup();
	}

	void loop() {
  		motor.test();
	}
