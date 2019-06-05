// ADD ANSWER TO THIS FILE
// done

#pragma once

class SNode {
public:
    int elem;
    SNode *next;
};

class IntegerLinkedList {
private:
    SNode *head;

    int getSumRecurse (SNode *ptr) {
        return -1; // COMPLETE THIS FOR PROBLEM 3
    }

public:
    IntegerLinkedList() {
        head = nullptr;
    }

    void addFront(int x) {
        SNode *tmp = head;
        head = new SNode;
        head->next = tmp;
        head->elem = x;
    }


    // COMPLETE THIS FOR PROBLEM 2

    int getSum(){

        SNode *ptr = head;

        int sum = 0;

        while(ptr != NULL){

            sum = sum + ptr->elem;

            ptr = ptr->next;

        }
        return sum;
    }


    int getSumRecurse (){
        return getSumRecurseHelper(head);

    }



    // recursion helper function called from main for PROBLEM 3

    int getSumRecurseHelper (SNode *ptr) {
        if(ptr==NULL)
            return 0;
        return ptr->elem + getSumRecurseHelper(ptr->next);
    }

};
