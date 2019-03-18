# MZ-80 Kütüphanesi Kullanımı
> Analog pinler için uyumlu değildir!

### Kütüphaneyi Dahil Etmek
	#include "mz80.h";
Lütfen include etmediyseniz `#include "Arduino.h"` adlı kütüphaneyide include ediniz.

### Başlatma
	mz80.setup();
koduyla pinlere güç yollarsınız, motor kullanıma hazır olur.
>
### Pinler
Ön tanımlı olarak atanan pin `1` olarak ayarlanmıştır

### Özel Pin Ataması
  Pin atamasını `mz80.setup();` kısmından önce yapanız! Aksi taktirde ön tanımlı pin kullanılır.

	int benimPinim = 8;
	mz80.pinAta(benimPinim);


### MZ-80 Veri Alma
  Çıktı `true` veya `false` olarak verilir.

	mz80.read();

