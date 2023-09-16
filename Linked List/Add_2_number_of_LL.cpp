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

Node* reverse(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;

    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

void insertAtTail(Node* &head, Node* &tail, int val){
    Node* temp = new Node(val);

    if(head == NULL){
        head = temp;
        tail = temp;
        return;
    }else{
        tail->next = temp;
        tail = temp;
    }
}

Node* add(Node* first, Node* second){
    int carry = 0;
    Node* ansHead = NULL;
    Node* ansTail = NULL;

    while(first!=NULL || second!=NULL || carry!=0){
        int val1 = 0;
        if(first!=NULL)
            val1 = first->data;
        
        int val2 = 0;
        if(second!=NULL)
            val2 = second->data;

        int sum = carry + val1 + val2;
        int digit = sum%10;
        
        insertAtTail(ansHead, ansTail, digit);

        carry = sum/10;

        if(first!=NULL)
            first = first->next;

        if(second!=NULL)
            second = second->next;
    }

    return ansHead;
}

Node* addTwoLists(Node* first, Node* second){
    first = reverse(first);
    second = reverse(second);

    Node* ans = add(first, second);

    ans = reverse(ans);

    return ans;
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
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(0);
    Node* head1 = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;
    printList(head1);

    Node* node4 = new Node(4);
    Node* node5 = new Node(5);
    Node* node6 = new Node(0);
    Node* head2 = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = NULL;
    printList(head2);

    Node* head = addTwoLists(head1, head2);
    printList(head);
}