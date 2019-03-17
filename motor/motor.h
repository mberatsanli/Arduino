#ifndef motor_h
#define motor_h

class motorclass{
	public:
		motorclass();
		int pinAta(int pin[]);
		int setup();
		void pinListe();
		void ileri();
		void geri();
		void sag();
		void sol();
		void dur();
		void test();
	private:
		int * pin();	
};
extern motorclass motor; 
#endif
