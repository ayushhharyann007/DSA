#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node * next;
};

Node* createNode(int value){
    Node* newNode = new Node();
    newNode->data = value;     
    newNode->next = NULL;
    return newNode;
}

int main(){
    Node * start;
    Node * n1 = createNode(30);
    start = n1; 
    cout << n1->data << "\n" << n1->next << endl;

    Node *n2 = createNode(40);
    n1->next = n2;
    cout << n2->data << "\n" << n2->next << endl;

    Node *n3 = createNode(50);
    n2->next = n3;
    cout << n3->data << "\n" << n3->next << endl;

    Node *n4 = createNode(60);
    n3->next = n4;
    cout << n4->data << "\n" << n4->next << endl;
    
    return 0;
}


