#pragma once
class SNode {
private:
	int elem;
	SNode* next;
	friend class IntegerLinkedList;
};

class IntegerLinkedList {
public:
	IntegerLinkedList(); //constructor
	void addFront(int n); //add element to front
	bool isAscending();
private:
	SNode* head;
	int quant; //track how many nodes are in the IntegerLinkedList
};

