#include "Workbench.h"
#include "Acme.h"

Acme::Acme() {
	cout << "Creating Acme object" << endl;
}

Acme::~Acme() {
	cout << "Destructing Acme object" << endl;
}


void Acme::getKillCount(vector<vector<int>> droneList, vector<vector<int>> targetList) {
	//vector<int> killList;

	for (vector<int> drone : droneList) {

		int hitCount = 0;
		for (vector<int> target : targetList) {
			hitCount += isItHit(drone[0], drone[1], drone[2], target[0], target[1]);
		}
		killList.push_back(hitCount);
	}

	return;

	//return killList;
}

int Acme::isItHit(int x, int y, int r, int a, int b) {
	if (sqrt((x - a) * (x - a) + (y - b) * (y - b)) <= r) {
		return 1;
	}

	return 0;
}