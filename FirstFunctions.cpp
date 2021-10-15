#include "Workbench.h"

void TownCrier() {
	std::cout << "Hear ye! Hear ye!" << std::endl;
}

void SetupString(std::string &tosetup) {
	tosetup = "I am the string.";
}

void showIntVector(std::vector<int>& aList) {
	if (aList.size() > 1) {
		for (size_t i = 0; i < aList.size(); i++) {
			std::cout << aList[i] << " ";
		}
		std::cout << std::endl;
	}
}