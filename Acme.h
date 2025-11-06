#pragma once
#include "Workbench.h"

/***************************************************************************************\
 * Purpose:                                                                            *
 * So funny story, this project came about from an interview question. Sounds          *
 * interesting and not at all what really happens. Given a vector of vector of ints    *
 * that represent drones {x,y,radius} and a vector of vector of ints represents        *
 * target {x,y} list out per drone how many hits it made.                              *
 *                                                                                     *
 * Topics covered:                                                                     *
 * - Math mostly                                                                       *
 * - Vector of vectors                                                                 *
 * - Iterating through iterators                                                       *
 *                                                                                     *
 * Originally: Anvil                                                                   *
 *                                                                                     *
\***************************************************************************************/

class Acme {
public:
	
	//Constructor
	Acme();

	//Destructor
	~Acme();

	void getKillCount(vector<vector<int>>, vector<vector<int>>);

	void showVector();

private:

	int isItHit(int, int, int, int, int);

	vector<int> killList;
};
