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

void DeleteNode(Node * &node, int element){
    if(node == nullptr){
        cout << "Node is empty" << endl;
        return;
    }
   
    Node * temp = node;
    if((temp->next == nullptr && temp->prev == nullptr) && temp->value == element){
        
       node = nullptr;
       delete temp;
        return;
    }
  
      if(temp->value ==element && temp->prev == nullptr ){
            temp->next->prev = nullptr;
            node = temp->next;
            delete temp;
            return;
         }

     
    while(temp->value != element){
        temp = temp->next;
        if(temp->next == nullptr && temp->value != element){
            return;
        }
         
        
    }

     

    if(temp->next == nullptr && temp->value == element){
        temp->prev->next = nullptr;
        delete temp;
        return;
    }
   
    temp->next->prev = temp->prev;
    temp->prev->next = temp->next;
    delete temp;
  

    /*
    
     1 = 2 = 3 = 4
    */
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
    DeleteNode(head, 3);
    DeleteNode(head, 1);
    DeleteNode(head, 4);
    DeleteNode(head, 2);
    
    Print(head);
    return 0;
}