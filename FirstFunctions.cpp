#include "Workbench.h"

void TownCrier() {
	cout << "Hear ye! Hear ye!" << endl;
}

void SetupString(string &tosetup) {
	tosetup = "I am the string.";
}

void showIntVector(vector<int>& aList) {
	if (aList.size() > 1) {
		for (size_t i = 0; i < aList.size(); i++) {
			cout << aList[i] << " ";
		}
		cout << endl;
	}
}