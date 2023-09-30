#include<iostream>
#include<vector>
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

bool checkPalindrome(vector<int> arr){
    int n = arr.size();
    int s = 0;
    int e = n-1;
     while(s<=e){
        if(arr[s] != arr[e]){
            return 0;
        }
        s++;
        e--;
     }

     return 1;
}

bool isPalindrome(Node* &head){
    vector<int> arr;
    Node* temp = head;

    while(temp!=NULL){
        arr.push_back(temp->data);
        temp = temp->next;
    }

    return checkPalindrome(arr);
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
    Node* node5 = new Node(20);
    node4->next = node5;
    Node* node6 = new Node(10);
    node5->next = node6;
    node6->next = NULL;

    printList(head);

    if(isPalindrome(head)){
        cout<<"The given Linked List is Palindrome..!!!!";
    }else{
        cout<<"The Linked List is not Palindrome..!!!!";
    }
}