/*source.cpp */

#include <iostream>
#include <string>
//#include <bits/stdc++.h>
#include "IntegerLinkedList.h"

using namespace std;


int main() {
    IntegerLinkedList mylist;
    cout << "Enter number of integers :";
    int n, value;
    cin >> n;
    cout << "Enter " << n << " integers " << endl;
    for (int i = 0; i < n; i++) {
        cin >> value;
        mylist.addFront(value);
    }

    //cout << mylist.print() << endl; // Need help printing out the the integers that got entered
    mylist.print();
    cout << "getMaximum: " << mylist.getMaximum() << endl;

    //system("pause");

    return 0;
}
