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