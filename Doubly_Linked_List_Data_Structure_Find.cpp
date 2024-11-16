#include <iostream>

using namespace std;

class Node{
    public:
    int value;
    Node * next;
    Node * prev;
};

void InsertNodeAtBeginning(Node * &node, int value){
    Node * new_node = new Node();
    new_node->value = value;
    new_node->next = node;
    new_node->prev = NULL;

    if(node != NULL){
      new_node->prev = new_node;
    }

    
    node = new_node;
}


Node * Find(Node * node, int value){
    if(node == NULL){
        return NULL;
    }
   
    while(node != NULL){
        if(node->value == value){
            return node;
        }
        node = node->next;
    }

    return NULL;
}



int main(){
    Node * head = NULL;
    InsertNodeAtBeginning(head, 6);
    InsertNodeAtBeginning(head, 5);
    InsertNodeAtBeginning(head, 4);
    InsertNodeAtBeginning(head, 3);
    InsertNodeAtBeginning(head, 2);
    InsertNodeAtBeginning(head, 1);

    

    Node * find = Find(head, 6);

    if(find != NULL){
        cout << find->value << endl;
    }else cout << "Not found" << endl;

    return 0;
}

/*

[1]<- ->[2]<- ->[3]<- ->[4]<- ->[5]

*/