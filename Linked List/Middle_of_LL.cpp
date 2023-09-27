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

int getLength(Node* &head){
    int length = 0;
    Node* temp = head;

    while(temp!=NULL){
        length++;
        temp = temp->next;
    }

    return length;
}

void middleElement(Node* &head){
    Node* temp = head;
    int length = getLength(head);
    int i = 0;

    if(length%2 == 0){
        int index = (length/2)+1;
        while(i<index-1){
            temp = temp->next;
            i++;
        }
        cout<<temp->data;   
    }else{
        int index = length/2;
        while(i<index){
            temp = temp->next;
            i++;
        }
        cout<<temp->data;   
    }
}

Node* getMiddle(Node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    
    Node* slow = head;
    Node* fast = head->next;

    while(fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow->next;
    }

    return slow;
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

    // middleElement(head);
    Node* temp = getMiddle(head);
    cout<<temp->data<<endl;
}