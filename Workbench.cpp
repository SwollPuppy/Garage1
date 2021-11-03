#include "Workbench.h"
#include "Listerine.h"

using namespace std;

//This is where it all starts. Using header files too.
int main()
{
    //The start of this thing.
	cout << "Hello World!\n";

	//Function that just announces itself
	TownCrier();

	//Function that takes in a string variable and sets it.
	string greet;
	SetupString(greet);

	//Now to see if that worked.
	cout << greet.c_str() << endl;

	//Setup for twosum
	vector<int> nums = { 2, 3, 0, 1 };
	vector<int> answer;
	int val = 5;

	//Now for the test
	answer = twoSum(nums, val);

	showIntVector(nums);

	ListNode m1 = ListNode(25);
	ListNode m2 = ListNode(50, &m1);
	ListNode m3 = ListNode(75, &m2);
	Solution leet;
	leet.showList(&m3);
	//cout << "ListNode val = " << val << endl;
	

	//for (size_t i = 0; i < answer.size(); i++) {
	//	cout << "I see " << answer[i] << endl;
	//}

}

