#include <iostream>
#include <string>

#include "IntegerLinkedList.h"

using namespace std;

int main() {

    IntegerLinkedList mylist;

    cout << "Enter number of integers : ";

    int n, value;

    cin >> n;

    cout << "Enter " << n << " integers:";

    for (int i = 0; i < n; i++) {

        cin >> value;

        mylist.addFront(value);


    }

    cout << "Integer at node 0: " << mylist.getInteger(0) << endl;

    cout << "Integer at node 3: " << mylist.getInteger(3) << endl;

}
