#include <cstddef>
#include <iostream>

using namespace std;


class Node{
    public:
    int value;
    Node * next;
    Node * prev;
};

void InsertNodeAtBeginning(Node * &head, int value){
    Node * new_node = new Node();
    new_node->value = value;
    new_node->next = head;
    new_node->prev = NULL;

    if(head != NULL){
      new_node->prev = new_node;
    }

    
    head = new_node;
}

void Print(Node * head){
    while(head != NULL){
        cout << head->value << "  ";
        head = head->next;
    }
}

int main(){
    Node * head = NULL;

    InsertNodeAtBeginning(head, 4);
    InsertNodeAtBeginning(head, 5);
    InsertNodeAtBeginning(head, 6);
    Print(head);

    return 0;
}