#include "Workbench.h"
#include "Listerine.h"

Solution::Solution() {
	cout << "Creating object" << endl;
}

Solution::~Solution() {
	cout << "Destructing Solution object" << endl;
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
	while (l1 != nullptr) {
		cout << l1->val << " -> ";
		l1 = l1->next;
	} 
	cout << "end" << endl;
	return;
}

int Solution::lists2int(ListNode* l1) {
	int num = 0;
	int mark = 1;
	while (l1 != nullptr) {
		num += mark * l1->val;
		mark *= 10;
		l1 = l1->next;
	}
	return num;
}

ListNode* Solution::int2lists(int x) {

	ListNode* answer = nullptr;
	ListNode* chain = nullptr;

	//If there is at least a number, create a node
	if (x >= 0) {
		answer = new ListNode(x % 10);
		chain = answer;
	}

	//If there is more than one digit, create other nodes
	while (x / 10 > 0) {
		x /= 10;
		chain->next = new ListNode(x % 10);
		chain = chain->next;
	}

	return answer;
}

ListNode* Solution::add2Numbers(ListNode* l1, ListNode* l2) {
	ListNode* dummyHead = new ListNode(0);
	ListNode* tail = dummyHead;
	int carry = 0;

	while (l1 != nullptr || l2 != nullptr || carry != 0) {
		int digit1 = (l1 != nullptr) ? l1->val : 0;
		int digit2 = (l2 != nullptr) ? l2->val : 0;

		int sum = digit1 + digit2 + carry;
		int digit = sum % 10;
		carry = sum / 10;

		ListNode* newNode = new ListNode(digit);
		tail->next = newNode;
		tail = tail->next;

		l1 = (l1 != nullptr) ? l1->next : nullptr;
		l2 = (l2 != nullptr) ? l2->next : nullptr;
	}

	ListNode* result = dummyHead->next;
	delete dummyHead;
	return result;
}