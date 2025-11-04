#pragma once
#include "Workbench.h"

/***************************************************************************************\
 * Purpose:                                                                            *
                                                                              *
 * Topics covered:                                                                     *
                                                                         *
 *                                                                                     *
 * Originally:                                                                  *
 *                                                                                     *
\***************************************************************************************/

class Acme {
public:
	
	//Constructor
	Acme();

	//Destructor
	~Acme();

	void getKillCount(vector<vector<int>>, vector<vector<int>>);

private:

	int isItHit(int, int, int, int, int);

	vector<int> killList;
};
