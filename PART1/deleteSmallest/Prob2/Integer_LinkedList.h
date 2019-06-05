//IntegerLinkedList.h

#pragma once

#include<iostream>

#include<string>

using namespace std;

struct node

{

int value;

node *next;

};

class IntegerLinkedList

{

node *head;

public:

IntegerLinkedList();

void addFront(int val);

void deleteSmallest();

string print();

};
