#include "Workbench.h"
#include "Listerine.h"

Solution::Solution() {
	cout << "Creating object" << endl;
}

Solution::~Solution() {
	cout << "Destructing object" << endl;
}

ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2) {
	int num1;
	int num2;
	int retnum;

	num1 = lists2int(l1);
	num2 = lists2int(l2);
	retnum = num1 + num2;

	ListNode* sol = int2lists(retnum);

	return sol;
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

ListNode* Solution::int2lists(int x) {

	ListNode* answer = nullptr;
	ListNode* chain = nullptr;

	if (x >= 0) {
		cout << "The int is " << x << endl;
		answer = new ListNode(x % 10);
		chain = answer;
	}

	while (x / 10 > 0) {
		x /= 10;
		cout << "Creating node for " << x % 10 << endl;
		chain->next = new ListNode(x % 10);
		chain = chain->next;
	}

	return answer;
}