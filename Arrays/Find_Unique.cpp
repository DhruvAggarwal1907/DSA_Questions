#include<iostream>
using namespace std;

int findUnique(int arr[], int n){
    int ans=0;

    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }

    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of the Array: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"The Unique value is: "<<findUnique(arr, n);
}