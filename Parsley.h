#pragma once
#include "Workbench.h"
#include <sstream>

class Parsley {
public:
	
	//Constructor
	Parsley();

	//Destructor
	~Parsley();
	
	// Function that parses a csv (comma seperated vector) into a vector of strings
	//vector<string> parseStringVector(stringstream&);
	
	void parseStringVector(stringstream&);

	// This will return the max value out of the vector. Strings will be converted into ints
	int maxVal(vector<string>&);

	// Something that will list out the elements in a vector of strings
	void showStringVector(vector<string>&);

	void showStringVector();

private:
	vector<string> my_parse;
};
