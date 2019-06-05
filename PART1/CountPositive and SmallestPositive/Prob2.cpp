#include <iostream>
#include <string>
#include "IntegerLinkedList.h"
using namespace std;

int main() {
    IntegerLinkedList mylist;
    cout << "Enter number of integers : ";
    int n, value;
    cin >> n;
    cout << "Enter " << n << " integers" << endl;
    for (int i = 0; i < n; i++) {
        cin >> value;
        mylist.addFront(value);
    }
    cout << "countPositive: " << mylist.countPositive() << endl;
    cout << "smallestPositive: " << mylist.smallestPositive() << endl;
    system("pause"); // comment/uncomment if needed
}
