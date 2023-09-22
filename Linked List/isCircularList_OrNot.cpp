#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void printList(Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void checkCircular(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        temp = temp->next;
        if(temp->next == NULL){
            cout<<"The List is not Circular in Nature..!!!";
        }
        if(temp->data == head->data){
            cout<<"The List is Circular in Nature.!!";
            break;
        }
    }
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* node2 = new Node(20);
    node1->next = node2;
    Node* node3 = new Node(30);
    node2->next = node3;
    Node* node4 = new Node(40);
    node3->next = node4;
    Node* node5 = new Node(50);
    node4->next = node5;
    Node* node6 = new Node(60);
    node5->next = node6;
    // node6->next = NULL;
    node6->next = node1;

    // printList(head);

    checkCircular(head);
}