#include<iostream>
using namespace std;

int printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements in an Array: ";
    cin>>n;

    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    printArray(arr, n);

    // For finding the size of the Array, but we will not be able to calculate the length of incomplete array.
    int length = sizeof(arr)/sizeof(int);
    cout<<endl<<length;
}