// ADD ANSWER TO THIS FILE

//#pragma once

class node {

public:

	int data;

	node * next = nullptr;

};

class linkedList {

private:

	node * head;

public:

	linkedList() {

		head = nullptr;

	}

	void addFront(int n) {

		node * tmp = head;

		head = new node;

		head->next = tmp;

		head->data = n;

	}

	// COMPLETE multiplesOf FOR PROBLEM 3

	int multiplesOf(int value) {

		node * tmp = head;

		int res = 0;

		while (tmp != NULL) {

			if ((tmp->data) % value == 0)

				++res;

			tmp = tmp->next;

		}

		return res;

	}

};