/**
 *   author   : Shihab-glitch
 *   created  : 08 13:55:34
**/
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

struct Node {
    int value;
    Node* next;
};

void printLinkedList(Node* p) {
    while (p != nullptr) {
        cout << p->value << " ";
        p = p->next;
    }
    cout << '\n';
}


int main() {
    fast_io;
    
    Node* one = new Node();
    Node* two = new Node();
    Node* three = new Node();

    one->value = 1;
    two->value = 2;
    three->value = 3;

    one->next = two;
    two->next = three;
    three->next = nullptr;

    Node* head = one;

    printLinkedList(head);

    delete one;
    delete two;
    delete three;

    return 0;
}