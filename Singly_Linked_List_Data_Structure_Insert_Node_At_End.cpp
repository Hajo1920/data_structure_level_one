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
void InsertNodeAtEnd(Node * &node, int value){
    Node * new_node = new Node();
    new_node->value = value;

    if(node == NULL){
        node = new_node;
        return;
    }
    Node * lastNode = node;

    while(lastNode->next != NULL){
        lastNode = lastNode->next;
    }
    lastNode->next = new_node;
}
void Print(Node * node){
    while(node != NULL){
        cout << node->value << " ";
        node = node->next;
    }


}

int main(){
    Node * head = NULL;
    
    for(int x = 0; x < 50; x++){
        InsertNodeAtEnd(head, x);
    }
  

    Print(head);

}