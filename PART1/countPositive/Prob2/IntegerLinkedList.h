//IntegerLinkedList.h

#include<iostream>

struct node

{

int data;

node *next;

};

class IntegerLinkedList

{

private:

node *head;

public:

IntegerLinkedList()

{

head=NULL;

}

void addFront(int value)

{

node *temp=new node;

temp->data=value;

temp->next=NULL;

if(head==NULL)

{

head=temp;

temp=NULL;

}

else

{

temp->next=head;

head=temp;

}

}

int countPositive()

{

int count = 0;

node *trav=head;

while(trav!=NULL)

{

if(trav->data>0)

count++;

trav=trav->next;

}

return count;

}

};
