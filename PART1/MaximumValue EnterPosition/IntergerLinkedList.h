// ADD ANSWER TO THIS FILE

#pragma once

class SNode {

public:

    int elem;

    SNode *next;

};

class IntegerLinkedList {

private:

    SNode * head;

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

    void print(void) {

        SNode *tmp = head;

        while (tmp != nullptr)

        {

            std::cout << tmp->elem << " ";

            tmp = tmp->next;

        }

        std::cout << std::endl;

    }

    int getInteger(int position) { // COMPLETE THIS

        SNode *tmp = head;

        if(tmp == nullptr)

            return -1;

        int i = 0;

        while (tmp != nullptr)

        {

            if(i==position)

                return tmp->elem;

            i = i + 1;

            tmp = tmp->next;

        }

        return -1;

    }

    int MaxList(){

        if(head == nullptr)

            return -1;

        return Max(head, head->elem);

    }

    int Max(SNode * tmp, int max){

        if(tmp == nullptr)

            return max;

        if(tmp->elem > max)

            max = tmp->elem;

        return Max(tmp->next , max);

    }

};
