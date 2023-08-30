#include<iostream>
using namespace std;

void reverse(char name[], int n){
    int s=0, e=n-1;

    while(s<e){
        swap(name[s], name[e]);
        s++;
        e--;
    }

    for(int i=0;i<n;i++){
        cout<<name[i];
    }
}

void reverseRecursion(string& str, int i, int j){
    if(i>j){
        return;
    }
    swap(str[i], str[j]);
    i++;
    j--;

    reverseRecursion(str, i, j);
}

int main(){
    // int n;
    // cout<<"Enter the size of the Array: ";
    // cin>>n;

    // char name[n];
    // for(int i=0;i<n;i++){
    //     cin>>name[i];
    // }

    // reverse(name, n);

    string name = "Dhruv Aggarwal";

    reverseRecursion(name, 0, name.length()-1);
    cout<<name;
}