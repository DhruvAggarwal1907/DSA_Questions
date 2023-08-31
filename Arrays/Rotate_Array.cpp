#include<iostream>
using namespace std;

void rotate(int arr[], int n, int pivot){
    int temp[n];

    for(int i=0;i<n;i++){
        temp[(i+pivot)%n] = arr[i];
    }

    arr = temp;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl; 
}

int main(){
    int n;
    cout<<"Enter the size of the Array: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int pivot;
    cout<<"Enter the pivot: ";
    cin>>pivot;

    rotate(arr, n, pivot);
}