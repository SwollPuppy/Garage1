#pragma once
#include "Workbench.h"
#include <sstream>

/***************************************************************************************\
 * Purpose:                                                                            *
 * The purpose was to take in user inpujt, a comma seperated string of indeterminate   *
 * length. It would parse the values and return the maximum value.                     *
 *                                                                                     *
 * Topics covered:                                                                     *
 *  - stdin                                                                            *
 *  - try/catch                                                                        *
 *  - using private data members                                                       *
 *  - max function                                                                     *
 *                                                                                     *
 * Originally: StandardIn                                                              *
 *                                                                                     *
\***************************************************************************************/

class Parsley {
public:
	
	//Constructor
	Parsley();

	//Destructor
	~Parsley();
	
	// Function that parses a csv (comma seperated vector) into a vector of strings
	void parseStringVector(stringstream&);

	// This will return the max value out of the vector. Strings will be converted into ints
	int maxVal();

	// Something that will list out the elements in a vector of strings
	void showStringVector();

private:
	vector<string> my_parse;
};
