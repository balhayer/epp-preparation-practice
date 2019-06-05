// ADD ANSWER TO THIS FILE
#include <iostream>
using namespace std;
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

   int getSum(){

       SNode *ptr = head;

       int sum = 0;

       while(ptr != NULL){

           sum = sum + ptr->elem;

           ptr = ptr->next;

       }

       return sum;

   }






   // recursion helper function called from main

   int getSumRecurseHelper () {

       return getSumRecurse(head);




   }



};
