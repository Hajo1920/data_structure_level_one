#include <iostream>

using namespace std;

class Node{
    public:
    int value;
    Node * next, * prev;
};


void InsertNodeAfter(Node * &node ,int element, int value){
    Node * new_node = new Node();
    new_node->value = value;

    if(node == nullptr){
        cout << "Node is empty" << endl;
        delete new_node;
        return;
    }
    Node * current = node;

    while(current != nullptr && current->value != element){
        
        current = current->next;
      
    }

    

    new_node->next = current->next;
    current->next = new_node;

    new_node->prev = current;

    new_node->next->prev = new_node;

    cout << new_node->next->prev->value << endl;


}

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

    InsertNodeAtBeginning(head, 5);
    InsertNodeAtBeginning(head, 4);
    InsertNodeAtBeginning(head, 3);
    InsertNodeAtBeginning(head, 2);
    InsertNodeAtBeginning(head, 1);

    InsertNodeAfter(head, 3, 8);
    InsertNodeAfter(head, 3, 14);
    InsertNodeAfter(head, 3, 21);
    InsertNodeAfter(head, 21, 30);

    Print(head);

    return 0;
}