#include<iostream>
using namespace std;

int getPivot(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid]>= arr[0]){
            s = mid+1;
        }else{
            e=mid;
        }
        mid = s+(e-s)/2;
    }

    return s;
}

int binarySearch(int arr[], int s, int e, int key){
    int start = s;
    int end = e;
    int mid = start+(end-start)/2;

    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
}

int find(int arr[], int n, int key){
    int pivot = getPivot(arr, n);

    if(key >= arr[pivot] && key <= arr[n-1]){
        return binarySearch(arr, pivot, n-1, key);
    }else{
        return binarySearch(arr, 0, pivot-1, key);
    }
}

int main(){
    int n;
    cout<<"Enter the size of the Array: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int elem;
    cout<<"Enter the element to search: ";
    cin>>elem;

    cout<<"Element found at index: "<<find(arr, n, elem);
}