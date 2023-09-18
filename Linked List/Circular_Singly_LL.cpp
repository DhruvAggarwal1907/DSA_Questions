#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtNode(Node* &tail, int data, int element){
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        temp->next = temp;
    }else{
        Node* curr = tail;
        while(curr->data!=element){
            curr = curr->next;
        }

        Node* temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node* &tail, int value){
    if(tail == NULL){
        cout<<"List is already Empty, please try again..!!!";
    }else{  
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        if(tail == curr){
            tail = prev;
        }
        if(curr == prev){
            tail = NULL;
        }
        curr->next = NULL;
        delete curr;
    }
}

void printList(Node* tail){
    Node* temp = tail;

    if(tail == NULL){
        cout<<"List is Empty..!!!";
        return;
    }

    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail!=temp);

    cout<<endl;
}

int main(){
    Node* tail = NULL;

    insertAtNode(tail, 5, 3);
    printList(tail);   
    insertAtNode(tail, 10, 5);
    printList(tail);
    insertAtNode(tail, 6, 5);
    printList(tail);
    insertAtNode(tail, 10, 5);
    printList(tail);
    insertAtNode(tail, 4, 6);
    printList(tail);


    deleteNode(tail, 5);
    printList(tail);
}