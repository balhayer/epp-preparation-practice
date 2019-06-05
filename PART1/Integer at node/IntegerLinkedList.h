//IntegerLinkedList.h

#include <cstddef>

using namespace std;

class SNode {

public:

    int elem;

    SNode *next;

};

class IntegerLinkedList {

private:

    SNode *head;

public:

    IntegerLinkedList() {

        head = NULL;

    }

    void addFront(int x) {

        SNode *tmp = head;

        head = new SNode;

        head->next = tmp;

        head->elem = x;

    }

    int getInteger(int i) // COMPLETE THIS FOR PROBLEM 2

    {

        int count=0;

        SNode *tmp = head;

        while(count<(i))

        {

            tmp=tmp->next;

            count++;

        }

        return tmp->elem;

    }

};
