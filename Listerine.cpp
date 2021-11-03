#include "Workbench.h"
#include "Listerine.h"
 
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
	while (l1 != NULL) {
		num *= 10;
		num += l1->val;
		l1 = l1->next;
	}
	return num;
}