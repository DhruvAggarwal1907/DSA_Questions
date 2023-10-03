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

Node* uniqueSortedList(Node* &head){
    if(head == NULL){
        return head;
    }
    
    Node* curr = head;
    while(curr!=NULL){
        if((curr->next!=NULL) && (curr->data == curr->next->data)){
            Node* nodeToDelete = curr->next;
            curr->next = curr->next->next;
            delete(nodeToDelete);
        }
        else{
            curr = curr->next;
        }
    }

    return head;
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
    Node* node3 = new Node(20);
    node2->next = node3;
    Node* node4 = new Node(40);
    node3->next = node4;
    Node* node5 = new Node(40);
    node4->next = node5;
    Node* node6 = new Node(60);
    node5->next = node6;
    node6->next = NULL;
    printList(head);

    head = uniqueSortedList(head);
    printList(head);
}