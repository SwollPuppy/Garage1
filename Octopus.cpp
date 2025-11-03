#include "Workbench.h"
#include "Octopus.h"

Octopus::Octopus() {
	cout << "Creating Octopus object" << endl;
}

Octopus::~Octopus() {
	cout << "Destructing Octopus object" << endl;
}


int Octopus::dec2oct(int x) {
	int y = x%8;
	int place = 10;
	while(x>8){
		x /= 8;
		y += (x % 8) * place;
		place *= 10;
	}

	return y;
}

int Octopus::oct2dec(int x) {
	int y = x % 10;
	int place = 8;
	x /= 10;
	while (x > 0) {
		y += (x % 10) * place;
		place *= 8;
		x /= 10;
	}
	return y;
}