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

void DeleteLast(Node * &node){
    if(node == nullptr){
        cout << "Empty Node" << endl;
        return;
    }

   
    if(node->prev ==  nullptr && node->next == nullptr){
        node = nullptr;
        delete node;
        return;
    }
    
    Node * temp = node;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->prev->next = nullptr;
    temp->prev = nullptr;
   
    delete temp;
  
    
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
    DeleteLast(head);


    
    Print(head);
    return 0;
}