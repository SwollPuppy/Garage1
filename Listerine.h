#pragma once
#include "Workbench.h"

struct ListNode {
	int val;
	ListNode *next;

	//Constructors
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
	ListNode* addTwoNumbers(ListNode*, ListNode*); 
	int showList(ListNode*);
};
