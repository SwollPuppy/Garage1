#pragma once
#include "Workbench.h"

struct ListNode {
	int val;
	ListNode *next;

	//Constructors
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
	~ListNode() { cout << "*"; } //You can alter the behavior of destructors
};

class Link {
public:
	
	//Constructor
	Link();

	//Destructor
	~Link();

	//Main challenge. Converts two linked lists and returns the "sum" in a list
	//Uses lists2int and int2lists
	ListNode* addTwoNumbers(ListNode*, ListNode*); 
	
	// Goes through a linked list of single int's and displays their value.
	void showList(ListNode*);

	//Converts a linked lists of single int's into a single int value
	int lists2int(ListNode*);

	//Function that converts an int into a linked lists of single digit int's
	ListNode* int2lists(int x);

	//The real Link. Turns out that int's a even long long int's don't cover all the cases.
	ListNode* add2Numbers(ListNode*, ListNode*);
};
