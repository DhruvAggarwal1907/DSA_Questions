#include<iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int elem){
    if(s>e){
        return false;
    }

    int mid = s+(e-s)/2;
    if(arr[mid] == elem){
        return true;
    }

    if(arr[mid]>elem){
        return binarySearch(arr, s, mid-1, elem);
    }else{
        return binarySearch(arr, mid+1, e, elem);
    }
}

int main(){
    int n;
    cout<<"Enter the size of the Array: ";
    cin>>n;

    int *arr = new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int elem;
    cout<<"Enter the element to search: ";
    cin>>elem;

    bool ans = binarySearch(arr, 0, n-1, elem);

    if(ans){
        cout<<"Element found..!!!";
    }else{
        cout<<"Element not found..!!!";
    }
}