#include "Workbench.h"
#include "Listerine.h"
#include "Parsley.h"

using namespace std;

// Which part of the workbench do we want to enable?
//bool LEGACY    = true;
bool LINKIT    = true;
bool PARSETEST = true;

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

	if (LINKIT) {
		cout << "*** Linked List Test ***" << endl;

		//This is the setup for linked lists
		//Creating first list
		ListNode m1 = ListNode(3);
		ListNode m2 = ListNode(4, &m1);
		ListNode m3 = ListNode(2, &m2);

		//Creating second list
		ListNode n1 = ListNode(4);
		ListNode n2 = ListNode(6, &n1);
		ListNode n3 = ListNode(5, &n2);

		//Creating Link object to work with
		Link leet;
		leet.showList(&m3); //Testing the show list feature
		leet.showList(&n3);
		leet.showList(&m2);
		cout << leet.lists2int(&m3) << endl;
		cout << leet.lists2int(&n3) << endl;

		cout << "Sol test" << endl;
		ListNode* sol = leet.addTwoNumbers(&m3, &n3);
		leet.showList(sol);
	}

	if (PARSETEST) {
		cout << "*** Parsley Test ***" << endl;
		string user_input;
		Parsley shrub;
		Parsley userbush;
		stringstream sequence("3,5,9,2,7");
		shrub.parseStringVector(sequence);
		shrub.showStringVector();
		cout << "Max value is: " << shrub.maxVal() << endl;
		cout << "Pass me a string of comma, separated integers: ";
		cin >> user_input;
		stringstream user_sequence(user_input);
		userbush.parseStringVector(user_sequence);
		userbush.showStringVector();
		cout << "Max value is: " << userbush.maxVal() << endl;
	}

	cout << "Did you see that?" << endl;
}

