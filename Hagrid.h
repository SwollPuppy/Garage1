#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include "Workbench.h"

using namespace std;

/***************************************************************************************\
 * Purpose:                                                                            *
 * This was a simple challenge of take a vector of vectors, the first of indeterminate *
 * size, but the vectors are all size 2. Each vector represents the dimensions of a    *
 * rectangle. Find the rectangle with the maximum diagonal length. and return its      *
 * area. If there are multiple rectangles with the same maximum diagonal length,       *
 * return the area of the largest one.                                                 *
 *                                                                                     *
 * As an extra bonus, copilot tried to make a solution that would find the largest     *
 * area of a binary matrix diagonal of 1's. It is commented out in the cpp file. It    *
 * came out of nowhere and I have no idea why it thought of that.                      *
 *                                                                                     *
 * Topics covered:                                                                     *
 * - Math mostly                                                                       *
 * - Vector of vectors                                                                 *
 * - Iterating through iterators                                                       *
 * - Private functions                                                                 *
 *                                                                                     *
 * Originally: Anvil                                                                   *
 *                                                                                     *
\***************************************************************************************/


class Hagrid {
public:

	//Constructor
	Hagrid();

	//Destructor
	~Hagrid();

	void areaOfMaxDiagonal(vector<vector<int>>&);

	int showMaxDiagonal() const { return maxArea; }

	void showDimensions();

private:

	int maxArea;
	int maxLength;
	int maxHeight;
};