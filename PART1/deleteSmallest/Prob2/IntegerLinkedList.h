//IntegerLinkedList.cpp

#include"IntegerLinkedList.h"

IntegerLinkedList::IntegerLinkedList()

{

head = NULL;

}

void IntegerLinkedList::addFront(int val)

{

node *newNode,*next;

if (head == NULL)

{

head = new node;

head->value = val;

head->next = NULL;

}

else

{

newNode = new node;

newNode->value = val;

newNode->next = NULL;

//save next pointer

next = head;

head = newNode;

head->next = next;

}

}

void IntegerLinkedList::deleteSmallest()

{

node *cur = head, *prev = cur,*next=NULL;

int min = cur->value;

//first find smallest number in list and then delete

while (cur != NULL)

{

if (min > cur->value)

{

min = cur->value;

}

cur = cur->next;

}

//now delete the min by searching the number

//if smallest is at head

if (head !=NULL && head->value == min)

{

prev = head;

head = head->next;

delete prev;

}

else

{

cur = head;

/*if (cur != NULL)

{

while (cur->next != NULL && cur->next->value != min)

{

cur = cur->next;

prev = cur;

}

cur->next = NULL;

delete prev->next;

}*/

while (cur != NULL && cur->value != min)

{

prev = cur;

cur = cur->next;

next = cur->next;

}

prev->next = next;

delete cur;

}

}

string IntegerLinkedList::print()

{

node *cur = head;

string str;

while (cur != NULL)

{

str += to_string(cur->value);

str += ' ';

cur = cur->next;

}

cout << str<<endl;

return str;

}
