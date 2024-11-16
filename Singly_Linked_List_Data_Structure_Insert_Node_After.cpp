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

Node * FindNode(Node * node, int value){
    while(node != NULL){
        if(node->value == value) {
            return node;
        }

       
         node = node->next;
    }
    return NULL;
}

void InsertNodeAfter(Node * &node, int value){
    Node * new_node = new Node();
    new_node->value = value;

    new_node->next = node->next;
    
    node->next = new_node;
    
    
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
    InsertNodeAtBeginning(head,2);
    InsertNodeAtBeginning(head,3);
    InsertNodeAtBeginning(head,4);
    InsertNodeAtBeginning(head,6);
    InsertNodeAtBeginning(head,7);
    
    Node * N1 = FindNode(head, 6);
    InsertNodeAfter(N1, 5);


    Print(head);

}