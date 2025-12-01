#include "Workbench.h"
#include "Listerine.h"
#include "Parsley.h"
#include "Octopus.h"
#include "Acme.h"
#include "Hagrid.h"

using namespace std;

// Which part of the workbench do we want to enable?
//bool LEGACY    = true;
bool LINKIT    = false;
bool PARSETEST = false;
bool OCTOPUS   = false;
bool ACME      = true;
bool HAGRID    = true;

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

	if (OCTOPUS) {
		cout << "*** Octopus Test ***" << endl;
		
		int dval = 729;
		int oval;
		
		Octopus squid;
		oval = squid.dec2oct(dval);
		cout << "The octal value of " << dval << " is: " << oval << endl;
		cout << "The decimal value of " << oval << " is: " << squid.oct2dec(oval) << endl;

		vector<int> numlist = { 1, 2, 3, 2, 4, 5, 1, 6, 3 };
		cout << "Original vector: ";
		showIntVector(numlist);
		squid.noClone(numlist);
		cout << "Vector after removing duplicates: ";
		showIntVector(numlist);
	}

	if(ACME){
		cout << "*** ACME Test ***" << endl;

		vector<vector<int>> coyotes = { {2,3,1},{4,3,1},{1,1,2} };
		vector<vector<int>> roadRunners = { {1,3}, {3,3},{5,3},{2,2} };

		vector<vector<int>> drones = { {1,2,2},{2,2,2},{4,3,2},{4,3,3} };
		vector<vector<int>> targets = { {1,1},{2,2},{3,3},{4,4},{5,5} };

		Acme anvil; 
		anvil.getKillCount(coyotes, roadRunners);
		anvil.showVector();

		anvil.getKillCount(drones, targets);
		anvil.showVector();
	}

	if (HAGRID) {
		cout << "*** Hagrid Test ***" << endl;
		vector<vector<int>> stag = { {4,7},{8,9},{5,3},{6,10},{2,9},{3,10},{2,2},{5,8},{5,10},{5,6},{8,9},{10,7},{8,9},{3,7},{2,6},{5,1},{7,4},{1,10},{1,7},{6,9},{3,3},{4,6},{8,2},{10,6},{7,9},{9,2},{1,2},{3,8},{10,2},{4,1},{9,7},{10,3},{6,9},{9,8},{7,7},{5,7},{5,4},{6,5},{1,8},{2,3},{7,10},{3,9},{5,7},{2,4},{5,6},{9,5},{8,8},{8,10},{6,8},{5,1},{10,8},{7,4},{2,1},{2,7},{10,3},{2,5},{7,6},{10,5},{10,9},{5,7},{10,6},{4,3},{10,4},{1,5},{8,9},{3,1},{2,5},{9,10},{6,6},{5,10},{10,2},{6,10},{1,1},{8,6},{1,7},{6,3},{9,3},{1,4},{1,1},{10,4},{7,9},{4,5},{2,8},{7,9},{7,3},{4,9},{2,8},{4,6},{9,1},{8,4},{2,4},{7,8},{3,5},{7,6},{8,6},{4,7},{25,60},{39,52},{16,63},{33,56} };
		vector<vector<int>> otter = { {5,1},{33,56},{39,52} };

		Hagrid harry;
		Hagrid hermione;

		harry.areaOfMaxDiagonal(stag);
		hermione.areaOfMaxDiagonal(otter);

		cout << "Max rectangle for harry " << harry.showMaxDiagonal() << endl;
		cout << "Max rectangle for hermione " << hermione.showMaxDiagonal() << endl;

	}


	cout << "Did you see that?" << endl;
}

