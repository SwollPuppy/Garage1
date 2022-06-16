#include "Workbench.h"
#include "Listerine.h"

Solution::Solution() {
	cout << "Creating object" << endl;
}

Solution::~Solution() {
	cout << "Destructing object" << endl;
}

ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2) {
	return l1; // still working on this here.
}

void Solution::showList(ListNode* l1) {
	while (l1 != NULL) {
		cout << l1->val << " -> ";
		//l1->val = 4;
		//cout << l1->val << "new";
		l1 = l1->next;
	} 
	cout << "end" << endl;
	return;
}

int Solution::lists2int(ListNode* l1) {
	int num = 0;
	int mark = 1;
	while (l1 != NULL) {
		num += mark * l1->val;
		mark *= 10;
		l1 = l1->next;
	}
	return num;
}

ListNode* Solution::int2lists(int x) {
	ListNode* answer = NULL;
	ListNode* chain(0);
	answer = chain;

	while (x / 10 > 0) {

		//chain->val = x;
		//chain->next = &ListNode(0);
		//chain = chain->next;
		
		cout << x % 10 << endl;
		x /= 10;
	}
	//chain->val = x;
	cout << x << endl;

	return answer;
}