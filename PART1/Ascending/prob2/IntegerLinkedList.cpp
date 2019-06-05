#include "IntegerLinkedList.h"

IntegerLinkedList::IntegerLinkedList() { //constructor
	quant = 0;
}

void IntegerLinkedList::addFront(int n) {
	SNode* u = new SNode;
	u->elem = n;
	u->next = head;
	head = u;
	quant++;
}

bool IntegerLinkedList::isAscending() {
	SNode* u;
	u = head; // makes u the first node
	for (int i = 0; i < quant; i++) {
		if (u->elem <= u->next->elem) {
			u = u->next;
			return true;
		}
		else if (u->elem >= u->next->elem) {
			return false;
		}
	}
}
