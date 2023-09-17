#include<bits/stdc++.h>
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

void insertAtIndex(Node* &head, int data, int index){
    Node* nodeToInsert = new Node(data);
    if(index == 1){
        nodeToInsert->next = head;
        head = nodeToInsert;
    }else{
        Node* temp = head;
        int i=1;
        while(i<index-1){
            temp = temp->next;
            i++;
        }
        nodeToInsert->next = temp->next;
        temp->next = nodeToInsert;
    }
}

void printList(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}

int main(){
    Node* node1 = new Node(1);
    Node* head = node1;

    printList(head);
    insertAtIndex(head, 4641, 1);
    printList(head);
    insertAtIndex(head, 0, 3);
    printList(head);
    insertAtIndex(head, 10, 2);
    printList(head);
}