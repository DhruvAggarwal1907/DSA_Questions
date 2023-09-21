#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAtHead(Node* &head, int data){
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
    }else{
    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
    }
}

void insertAtTail(Node* &tail, int data){
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
    }else{
        Node* temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtIndex(Node* &head, Node* &tail, int data, int index){
    if(index == 1){
        insertAtHead(head, data);
        return;
    }

    Node* temp = head;
    int i = 1;
    while(i<index-1){
        temp = temp->next;
        i++;
    }
    if(temp->next == NULL){
        insertAtTail(tail, data);
        return;
    }

    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(Node* &head, Node* &tail, int index){
    if(index == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }else{
        Node* curr = head;
        Node* prev = NULL;

        int i=1;
        while(i<index){
            prev = curr;
            curr = curr->next;
            i++;
        }
        if(curr->next == NULL){
            tail = prev;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void printList(Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int getLength(Node* &head){
    int len = 0;
    Node* temp = head;

    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    printList(head);
    // cout<<getLength(head)<<endl;

    insertAtHead(head, 4641);
    printList(head);

    insertAtTail(tail, 100);
    printList(head);
    insertAtTail(tail, 30);
    printList(head);


    insertAtIndex(head, tail, 40, 3);
    printList(head);

    deleteNode(head, tail, 5);
    printList(head);
    cout<<head->data<<" "<<tail->data<<endl;
}