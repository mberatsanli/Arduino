#include "Arduino.h"
#include <iostream>
#include "motor.h"
using namespace std;

bool atanmis = false;
int onTanimliPinler[] = {4,5,6,7};
int kullaniciTanimliPinler[] = {};

motorclass::motorclass(){
}

int motorclass::pinAta(int pin[]){
	int i;
	for(i = 0; i < 4; i++)
		kullaniciTanimliPinler[i] = pin[i];
	atanmis = true;
}

int * motorclass::pin(){
	if(atanmis){
		return kullaniciTanimliPinler;
	}else{
		return onTanimliPinler;
	}
}

void motorclass::pinListe(){
	int i;
	for(i = 0; i < 4; i++){
		std::cout << std::endl << i << ". Slot >> pin_" << motor.pin()[i];
	}
}

int motorclass::setup(){
	int i;
	for(i = 0; i < 4; i++)
		pinMode(pinler[i], OUTPUT);
}

void motorclass::ileri(){
	digitalWrite(motor.pin()[0], LOW);
	digitalWrite(motor.pin()[1], HIGH);
	digitalWrite(motor.pin()[2], HIGH);
	digitalWrite(motor.pin()[3], LOW);
}

void motorclass::geri(){
	digitalWrite(motor.pin()[0], HIGH);
	digitalWrite(motor.pin()[1], LOW);
	digitalWrite(motor.pin()[2], LOW);
	digitalWrite(motor.pin()[3], HIGH);
}

void motorclass::sag(){
	digitalWrite(motor.pin()[0], HIGH);
	digitalWrite(motor.pin()[1], LOW);
	digitalWrite(motor.pin()[2], HIGH);
	digitalWrite(motor.pin()[3], LOW);
}

void motorclass::sol(){
	digitalWrite(motor.pin()[0], LOW);
	digitalWrite(motor.pin()[1], HIGH);
	digitalWrite(motor.pin()[2], LOW);
	digitalWrite(motor.pin()[3], HIGH);
}

void motorclass::dur(){
	int i;
	for(i = 0; i < 4; i++)
		digitalWrite(motor.pin()[i], LOW);
}

void test(){
	motor.ileri();
	delay(50);	
	motor.geri();
	delay(50);
	motor.sag();
	delay(50);
	motor.sol();
	delay(50);
	motor.dur();
}

motorclass motor = motorclass();