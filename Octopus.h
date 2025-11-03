#pragma once
#include "Workbench.h"

/***************************************************************************************\
 * Purpose:                                                                            *

 * Topics covered:                                                                     *
                                                                *
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
	
	int dec2oct(int);

	int oct2dec(int);

	void noClone(vector<int>&);

private:
	vector<string> my_parse;
};
