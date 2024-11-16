#include <iostream>

using namespace std;

/*
A Doubly Linked list is simply like Singly linked list but with addition of another
pointer for traversing previous node */

class Node{
    public:
    int value;
    Node * next;
    Node * prev;
};

int main(){

    Node * N1 = new  Node();
    Node * N2 = new Node();
    Node * N3 = new Node();

    N1->value = 1;
    N2->value = 2;
    N3->value = 3;

    N1->prev = NULL;
    N1->next = N2;
    N2->prev = N1;
    N2->next = N3;
    N3->prev = N2;
    N3->next = NULL;

    Node * head = N1;

    while(head != NULL){
        cout << head->value << endl;
        head = head->next;
       
       
    }

     while(head != NULL){
            cout << head->value << endl;
            head  = head->prev;
        }

    return 0;
}