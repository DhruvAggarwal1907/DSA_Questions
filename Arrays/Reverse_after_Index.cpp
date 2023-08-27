#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the Array: ";
    cin>>n;

    int index;
    cout<<"Enter the index after which we have to Swap: ";
    cin>>index;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int start = index+1;
    int end = n-1;

    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}