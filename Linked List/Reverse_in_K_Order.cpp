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

Node* kReverse(Node* head, int k){
    if(head == NULL){
        return NULL;
    }

    Node* next = NULL;
    Node* prev = NULL;
    Node* curr = head;
    int count = 0;

    while(curr!=NULL && count<k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    if(next!=NULL){
        head->next = kReverse(next, k);
    }

    return prev;
}

void printList(Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
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
    node6->next = NULL;

    printList(head);

    head = kReverse(head, 4);
    printList(head);
}