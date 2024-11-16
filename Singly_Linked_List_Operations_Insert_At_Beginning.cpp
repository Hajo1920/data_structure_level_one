#include <cstddef>
#include <iostream>

using namespace std;

class Node{
    public:
    int value;
    Node * next;
};

void InsertNodeAtBeginning(Node * &node, int value){
    Node * new_node = new Node();
    new_node->value = value;

    new_node->next = node;
    node = new_node;
}

void Print(Node * node){
    while(node != NULL){
        cout << node->value << " ";
        node = node->next;
    }
}

int main(){
    Node * head = NULL;
    InsertNodeAtBeginning(head,1);
    InsertNodeAtBeginning(head,10);
 

    Print(head);

    return 0;
}