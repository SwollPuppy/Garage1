#pragma once
#include "Workbench.h"
#include <algorithm>

/***************************************************************************************\
 * Purpose:                                                                            *
 * This had two different objectives. One was to convert decimal to octal and vice     *
 * versa. The other was to take a vector of ints and modify the vector my removing     *
 * duplicates.                                                                         *
 *                                                                                     *
 * What changed was that in updating this project, go pilot sugggested some            *
 * improvements. So, now with a call to sort and unique from the algorithm library,    *
 * we have the same functionality with less code.                                      *
 *                                                                                     *
 * Topics covered:                                                                     *
 *  - math                                                                             *
 *  - unique                                                                           *
 *  - sort                                                                             *
 *                                                                                     *
 * Originally: Dec2Oct                                                                 *
 *                                                                                     *
\***************************************************************************************/

class Octopus {
public:
	
	//Constructor
	Octopus();

	//Destructor
	~Octopus();
	
	// Converts a decimal integer to an octal integer
	int dec2oct(int);

	// Converts an octal integer to a decimal integer
	int oct2dec(int);

	// Removes duplicates from a vector of integers
	void noClone(vector<int>&);

private:
	vector<string> my_parse;
};
