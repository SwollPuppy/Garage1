#include "Workbench.h"

//This is where it all starts. Using header files too.
int main()
{
    //The start of this thing.
	std::cout << "Hello World!\n";

	//Function that just announces itself
	TownCrier();

	//Function that takes in a string variable and sets it.
	std::string greet;
	SetupString(greet);

	//Now to see if that worked.
	std::cout << greet.c_str() << std::endl;

	//Setup for twosum
	std::vector<int> nums = { 2, 3, 0, 1 };
	std::vector<int> answer;
	int val = 5;

	//Now for the test
	answer = twoSum(nums, val);

	showIntVector(nums);

	for (size_t i = 0; i < answer.size(); i++) {
		std::cout << "I see " << answer[i] << std::endl;
	}

}

