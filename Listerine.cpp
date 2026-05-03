#include "Workbench.h"
#include "Listerine.h"

Link::Link() {
	cout << "Creating Link object" << endl;
}

Link::~Link() {
	cout << "Destructing Link object" << endl;
}

ListNode* Link::addTwoNumbers(ListNode* l1, ListNode* l2) {
	int num1;
	int num2;
	int retnum;

	num1 = lists2int(l1);
	num2 = lists2int(l2);
	retnum = num1 + num2;

	ListNode* sol = int2lists(retnum);

	return sol;
}

void Link::showList(ListNode* l1) {
	while (l1 != nullptr) {
		cout << l1->val << " -> ";
		l1 = l1->next;
	} 
	cout << "end" << endl;
	return;
}

int Link::lists2int(ListNode* l1) {
	int num = 0;
	int mark = 1;
	while (l1 != nullptr) {
		num += mark * l1->val;
		mark *= 10;
		l1 = l1->next;
	}
	return num;
}

ListNode* Link::int2lists(int x) {

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

ListNode* Link::add2Numbers(ListNode* l1, ListNode* l2) {
	ListNode* dummyHead = new ListNode(0); // The use of new is for the use of a list node that will exist after the function ends, 
	ListNode* tail = dummyHead;            // since we are returning a pointer to it. If we had used a local variable, it would have 
	int carry = 0;                         // been destroyed when the function ends, and we would be returning a pointer to a non-existent object, which would lead to undefined behavior.

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

ListNode* Link::reverse(ListNode* head) {
	ListNode* tail = nullptr; // This will be what we are returning, the new head of the reversed list

	while (head != nullptr) {
		ListNode* nextTemp = head->next; // Store the next node before we change current's next pointer
		head->next = tail;               // Reverse the current node's pointer to point to the previous node (tail)
		tail = head;                     // Move the tail to the current node, which is now the new head of the reversed list
		head = nextTemp;                 // Move to the next node in the original list. This is safe because we stored it in nextTemp before changing current's next pointer.
	}

	return tail;
}