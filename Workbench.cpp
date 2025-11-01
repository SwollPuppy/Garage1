#include "Workbench.h"
#include "Listerine.h"
#include "Parsley.h"

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
	cout << greet << endl;

	//Setup for twosum
	vector<int> nums = { 2, 3, 0, 1 };
	vector<int> answer;
	int val = 5;

	//Now for the test
	answer = twoSum(nums, val);

	showIntVector(nums);

	//This is the setup for linked lists
	//Creating first list
	ListNode m1 = ListNode(3);
	ListNode m2 = ListNode(4, &m1);
	ListNode m3 = ListNode(2, &m2);

	//Creating second list
	ListNode n1 = ListNode(4);
	ListNode n2 = ListNode(6, &n1);
	ListNode n3 = ListNode(5, &n2);

	//Creating solution object to work with
	Solution leet;
	leet.showList(&m3); //Testing the show list feature
	leet.showList(&n3);
	leet.showList(&m2);
	cout << leet.lists2int(&m3) << endl;
	cout << leet.lists2int(&n3) << endl;

	cout << "Sol test" << endl;
	ListNode* sol = leet.addTwoNumbers(&m3, &n3);
	leet.showList(sol);

	cout << "Parsley test" << endl;
	Parsley shrub; 
	stringstream sequence("3,5,9,2,7");
	//vector<string> parsed_vector = shrub.parseStringVector(sequence);
	shrub.parseStringVector(sequence);
	shrub.showStringVector();
	//shrub.showStringVector(parsed_vector);


	cout << "Did you see that?" << endl;
}

