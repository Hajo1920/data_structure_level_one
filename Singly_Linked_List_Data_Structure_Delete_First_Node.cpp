#include <cstddef>
#include <iostream>

using namespace std;

class Node{
    public:
    int value;
    Node * next;
};

void InsertNode(Node * &head, int value){
    Node * new_node = new Node();
    new_node->value = value;
    if(head == NULL){
        head = new_node;
        return;
    }
    Node * last_node = head;
    while(last_node->next != NULL){
        last_node = last_node->next;
    }
    last_node->next = new_node;
}

void DeleteFirstNode(Node * &head){
    if(head == NULL){
        return;
    }
    Node * fst = head;
    head = fst->next;
    delete fst;
  
}

void Print(Node * head){
    while(head != NULL){
        cout << head->value << "  ";
        head= head->next;
    }
}

int main(){
    Node * head  = NULL;
    InsertNode(head, 1);
    InsertNode(head, 2);
    InsertNode(head, 3);
    InsertNode(head, 4);
    InsertNode(head, 5);
    Print(head);
    DeleteFirstNode(head);
    Print(head);


}