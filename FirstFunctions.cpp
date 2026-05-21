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

void Configfig(Config& cfg) {
	string cfgfile = "./config.ini";
	ifstream infile(cfgfile);
	if (!infile) {
		cerr << "Error opening configuration file: " << cfgfile << endl;
		return;
	} else {
		string line;
		cout << "Look, Ma! I read the config file!" << endl;
		string key;
		string sval;
		bool value;

		while (getline(infile, line)) {
			//if (line.empty() || line[0] == '#') continue; // Skip empty lines and comments
			value = false; // Default value if parsing fails
			size_t eqPos = line.find('=');
			if (eqPos != std::string::npos) {
				key = line.substr(0, eqPos);
				//cout << "Key: " << key << endl;
				Tupperware(key); // Convert key to uppercase for case-insensitive comparison
				
				sval = line.substr(eqPos + 1);
				value = (sval == "1");

				//cout << "Key: " << key << "  Val: " << value << endl;

				if      (key == "LEGACY")    cfg.legacy    = value;
				else if (key == "LINKIT")    cfg.linkit    = value;
				else if (key == "PARSETEST") cfg.parsetest = value;
				else if (key == "OCTOPUS")   cfg.octopus   = value;
				else if (key == "ACME")      cfg.acme      = value;
				else if (key == "HAGRID")    cfg.hagrid    = value;
				else if (key == "REWIND")    cfg.rewind    = value;
				else cerr << "Unknown configuration key: " << key << endl;

			}
		}
		infile.close();
	}
}

void Tupperware(string &word) {
	for (char& c : word) {
		c = std::toupper(static_cast<unsigned char>(c));
	}
}