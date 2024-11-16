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

void DeleteNode(Node * &head, int value){
    // head is NULL
    if(head == NULL){
        cout << "Empty LINKED LIST" << endl;
        return;
    }
    Node * current = head, * previous = head;
    // node value found from the first time
    if(current->value == value){
        head = current->next;
        delete current;
        return;
    }

    while(current != NULL && current->value != value){
        previous = current;
        current = current->next;
    }

    if(current == NULL){
       cout << "Node not found in LINKED LIST" << endl;
       return;
    }

    previous->next = current->next;
    delete current;

}

void Print(Node * head){
    while(head != NULL){
        cout << head->value << "  ";
        head = head->next;
    }
}

int main(){
    Node * head = NULL;

    InsertNode(head, 1);
    InsertNode(head, 2);
    InsertNode(head, 3);
    InsertNode(head, 4);
    InsertNode(head, 5);
    InsertNode(head, 6);

    Print(head);
    cout << "\n";
    DeleteNode(head, 4);
    Print(head);

    return 0;
}