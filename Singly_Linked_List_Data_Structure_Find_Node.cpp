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

int main(){
    Node * head = NULL;
    InsertNodeAtBeginning(head,1);
    InsertNodeAtBeginning(head,10);
    InsertNodeAtBeginning(head,100);
    InsertNodeAtBeginning(head,1500);
    InsertNodeAtBeginning(head,10000);
    InsertNodeAtBeginning(head,100000);
    Node * N1 = FindNode(head, 1000);
    if(N1 != NULL){
        cout << "Node value found successfully" << endl;
    }else cout << "NULL value" << endl;

}