#include "Workbench.h"
#include "Parsley.h"

Parsley::Parsley() {
	cout << "Creating Parsley object" << endl;
}

Parsley::~Parsley() {
	cout << "Destructing Parsley object" << endl;
}

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
		try {
			t_val = stoi(s_val);
		}
		catch (const invalid_argument& e) {
			cerr << "Uh uh uh. " << s_val << " is not an int.: " << e.what() << endl;
		};

		m_val = max(m_val, t_val);
	}
	return m_val;
}

void Parsley::showStringVector() {
	if (my_parse.size() > 1) {
		for (string item : my_parse) {
			cout << item << endl;
		}
	}
}