#include<iostream>
using namespace std;

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

    int i=0,j=n-1;
    while(i<j){
         if(arr[i] == 0 && i<j){
            i++;
        }
        if(arr[j] == 1 && i<j){
            j--;
        }
        if(i<j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }    

    printArray(arr, n);
}