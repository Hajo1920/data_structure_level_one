#include <iostream>

using namespace std;

class Node{
    public:
    int value;
    Node * next, * prev;
};

void InsertAtEnd(Node * &node, int value){
    Node * new_node = new Node();
    new_node->value = value;
    new_node->next = nullptr;
    

    if(node == nullptr){
        new_node->prev = nullptr;
        node = new_node;
        return;
    }

    Node * last_node = node;
    while(last_node->next != nullptr){
       last_node = last_node->next;
    }
   
     last_node->next = new_node;
     new_node->prev = last_node;

}

void DeleteFirst(Node * &node){
    if(node == nullptr){
        cout << "Empty Node" << endl;
        return;
    }

    Node * temp = node;
    if(temp->prev ==  nullptr){
        temp->next->prev = nullptr;
        node = temp->next;
        delete temp;
    }
   
    
}

void Print(Node * head){
    while(head != NULL){
        cout << head->value << "  ";
        head = head->next;
    }
}
int main(){
    Node * head = nullptr;

    InsertAtEnd(head,1);
    InsertAtEnd(head,2);
    InsertAtEnd(head,3);
    InsertAtEnd(head,4);


    Print(head);
    cout << "\n\n";
    DeleteFirst(head);
    DeleteFirst(head);
    DeleteFirst(head);
    // DeleteFirst(head);
    
    Print(head);
    return 0;
}