#include "Arduino.h"
#include "mz80.h"

int onTanimliPin = 1;
int kullaniciTanimliPinler;
bool atanmis_mz80 = false;

mz80sensoru::mz80sensoru(){
}

int mz80sensoru::pinAta(int pin){
	int i;
	kullaniciTanimliPin = pin;
	atanmis_mz80 = true;
}

int * mz80sensoru::pin(){
	if(atanmis){
		return kullaniciTanimliPin;
	}else{
		return onTanimliPin;
	}
}

int mz80sensoru::setup(){
	pinMode(mz80.pin(), INPUT);
}

bool mz80sensoru::read(){
	return digitalRead(mz80.pin());
}

mz80sensoru mz80 = mz80sensoru();