#ifndef mz80_h
#define mz80_h

class mz80sensoru{
	public:
		mz80sensoru();
		int pinAta(int pin);
		int setup();
		int read();
	private:
		int * pin();	
};
extern mz80sensoru mz80; 
#endif
