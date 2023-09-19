#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* random;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->random = NULL;
    }
};



void insertAtTail(Node* &head, Node* &tail, int data){
    Node* newNode = new Node(data);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }else{
        tail->next = newNode;
        tail = newNode;
    }
}

Node* copyList(Node* head){
    Node* cloneHead = NULL;
    Node* cloneTail = NULL;
    

    Node* temp = head;
    while(temp!=NULL){
        insertAtTail(cloneHead, cloneTail, temp->data);
        temp = temp->next;
    }

        Node* originalNode = head;
        Node* cloneNode = cloneHead;

        while(originalNode!=NULL && cloneNode!=NULL){
            Node* next = originalNode->next;
            originalNode->next = cloneNode;
            cloneNode = next;

            next = cloneNode->next;
            cloneNode->next = originalNode;
            cloneNode = next;
        }

        temp = head;

        while(temp!=NULL){
            if(temp->next!=NULL){
                temp->next->random = temp->random? temp->random->next:temp->random;
            }

            temp = temp->next->next;
        }

        originalNode = head;
        cloneNode = cloneHead;

        while(originalNode!=NULL && cloneNode!=NULL){
            originalNode->next = cloneNode->next;
            originalNode = originalNode->next;

            if(originalNode!=NULL){
                cloneNode->next = originalNode->next;
            }
            cloneNode = cloneNode->next;
        }

        return cloneHead;
}

void printList(Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void printListRandom(Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->random;
    }
    cout<<endl;
}

int main(){
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    Node* node4 = new Node(40);
    Node* node5 = new Node(50);
    Node* node6 = new Node(60);
    Node* head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = NULL;
    node1->random = node3;
    node3->random = node5;
    node5->random = node2;
    node2->random = node6;
    node6->random = node4;
    node4->random = NULL;

    printList(head);
    printListRandom(head);

    Node* head1 = copyList(head);
    printList(head1);
    printListRandom(head1);
}