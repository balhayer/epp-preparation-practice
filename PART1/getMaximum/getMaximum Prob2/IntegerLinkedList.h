/*IntegerLinkedList.h*/

#include <iostream>
#include <string>
using namespace std;
#ifndef IntegerLinkedList_h
#define IntegerLinkedList_h
#endif
class IntegerLinkedList {
public:
    IntegerLinkedList();
    void addFront(int n);
    int getMaximum();
    void print();
private:
    struct Node {
        Node *next;
        int value;
    };
    Node* head;
    Node* temp;
    Node* tail;
};

IntegerLinkedList::IntegerLinkedList(){
    head = NULL;
    tail - NULL;
}

void IntegerLinkedList::addFront(int n)
{
    head == NULL;
    temp = new Node;
    temp->value = n;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }

}
void IntegerLinkedList::print()
{
    Node* curr = head;
    while (curr != NULL)
    {
        cout << curr->value << " ";
        curr = curr->next;
    }
    cout << endl;
}

int IntegerLinkedList::getMaximum()
{
    Node* curr = head;
    int max = curr->value;

    while (curr != NULL)
    {
        if (curr->value > max)
        {
            max = curr->value;
        }
        curr = curr->next;
    }
    return max;
}
