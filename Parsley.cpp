#include "Workbench.h"
#include "Parsley.h"

Parsley::Parsley() {
	cout << "Creating Parsley object" << endl;
}

Parsley::~Parsley() {
	cout << "Destructing Parsley object" << endl;
}

// Attempted to overload the function, but we need more than just a change in return type
//vector<string> Parsley::parseStringVector(stringstream& steam) {
//	string pstring;
//	vector<string> pvector;
//
//	while (steam.good()) {
//		getline(steam, pstring, ',');
//		pvector.push_back(pstring);
//	}
//
//	return pvector;
//}	

void Parsley::parseStringVector(stringstream& steam) {
	string pstring;

	while (steam.good()) {
		getline(steam, pstring, ',');
		my_parse.push_back(pstring);
	}
}

int Parsley::maxVal() {
	int m_val = 0;
	int t_val;
	for (string s_val : my_parse) {
		t_val = stoi(s_val);
		if ((t_val > m_val)) {
			m_val = t_val;
		}
	}
	return m_val;
}

void Parsley::showStringVector(vector<string>& sList) {
	if (sList.size() > 1) {
		for (size_t i = 0; i < sList.size(); i++) {
			std::cout << sList[i] << std::endl;
		}
	}
}

void Parsley::showStringVector() {
	if (my_parse.size() > 1) {
		for (string item : my_parse) {
			cout << item << endl;
		}
	}
}