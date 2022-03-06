#include "Workbench.h"
#include "Listerine.h"

Solution::Solution() {
	cout << "Creating object" << endl;
}

Solution::~Solution() {
	cout << "Destructing object" << endl;
}

ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2) {
	return l1;
}

void Solution::showList(ListNode* l1) {
	while (l1 != NULL) {
		cout << l1->val << " -> ";
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