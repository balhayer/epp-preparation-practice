//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class node{

public:
  int data;
  node *next = nullptr;
};

class linkedList{

private:
  node *head;

public:
  linkedList(){
    head = nullptr;
  }

void addFront(int n){
  node *tmp = head;
  head = new node;
  head->next = tmp;
  head->data = n;
}

void findTwoSmallest()

{

// is 32767 or greater.
  int min = INT_MAX, s_min = INT_MAX;
  node *top = head;

  while (top != NULL){
    if (min > top->data)
    min = top->data;
    top = top->next;
  }
  top = head;

  while (top != NULL)
  {
	  if (s_min > top->data && min != top->data)
	  {
		  s_min = top->data;
	  }
	  top = top->next;
  }
  cout << "Smallest: " << min << endl;
  cout << "Second smallest: " << s_min << endl;

}
};
