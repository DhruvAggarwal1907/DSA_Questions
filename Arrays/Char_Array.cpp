#include<iostream>
using namespace std;

void getLength(char arr[]){
    int i=0;
    int count=0;
    while(arr[i]!='\0'){
        count++;
        i++;
    }
    cout<<"The size of the Array is: "<<count;
}

int main(){
    int n;
    cout<<"Enter the size of the Array: ";
    cin>>n;

    char arr[n];
    
    cout<<"Enter your name: ";
    cin>>arr;

    cout<<"Your name is: "<<arr<<endl;

    getLength(arr);
}