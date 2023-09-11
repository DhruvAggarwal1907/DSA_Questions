#include<iostream>
using namespace std;

void swap_alternate(int arr[], int n){
    // Approach 1

    // if(n%2 == 0){
    //     for(int i=0;i<n-1;i++){
    //         swap(arr[i], arr[i+1]);
    //         i++;
    //     }
    // }else{
    //     for(int i=0;i<n-2;i++){
    //         swap(arr[i], arr[i+1]);
    //     }
    // }

    // Approach 2

    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i], arr[i+1]);
        }
    }
}

void printArray(int arr[], int n){
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

    swap_alternate(arr, n);
    printArray(arr, n);
}