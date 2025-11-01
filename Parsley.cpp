#include "Workbench.h"
#include "Parsley.h"

Parsley::Parsley() {
	cout << "Creating Parsley object" << endl;
}

Parsley::~Parsley() {
	cout << "Destructing Parsley object" << endl;
}

vector<string> Parsley::parseStringVector(stringstream& steam) {
	string pstring;
	vector<string> pvector;

	while (steam.good()) {
		getline(steam, pstring, ',');
		pvector.push_back(pstring);
	}

	return pvector;
}	
int Parsley::maxVal(vector<string>& s_vect) {
	int m_val = 0;
	int t_val;

	for (string s_val : s_vect) {
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