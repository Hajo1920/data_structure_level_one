#include <cstddef>
#include <iostream>

using namespace std;

class Node{
    public:
    int value;
    Node * next;
};


int main(){
    Node * head;
    Node * node1 = NULL;
    Node * node2 = NULL;
    Node * node3 = NULL;

    node1 = new Node();
    node2 = new Node();
    node3 = new Node();

    node1->value = 10;
    node2->value = 20;
    node3->value = 30;

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    head = node1;

    while(head != NULL){
      cout << head->value << endl;
      head = head->next;
    }
    return 0;
}