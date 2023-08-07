#include<iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int elem){
    int s=0, e=n-1;
    int ans = -1;
    int mid = s + (e-s)/2;  

    while(s<=e){

        if(arr[mid] == elem){
            ans = mid;
            e = mid-1;
        }else if(elem>arr[mid]){
            e = mid+1;
        }else if(elem<arr[mid]){
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }

    return ans;
}

int lastOccurrence(int arr[], int n, int elem){
    int s=0, e=n-1;
    int ans = -1;

    int mid = s + (e-s)/2;

    while(s<=e){

        if(arr[mid] == elem){
            ans = mid;
            s = mid+1;
        }else if(elem>arr[mid]){
            e = mid+1;
        }else if(elem<arr[mid]){
            e = mid-1;
        }

        mid = s + (e-s)/2;
    }

    return ans;
}

int main(){
    int first=0, last=0;
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

    first = firstOccurrence(arr, n, elem);
    last = lastOccurrence(arr, n, elem);

    cout<<"First Occurrence is: "<<firstOccurrence(arr, n, elem)<<endl;
    cout<<"Last Occurrence is: "<<lastOccurrence(arr, n, elem)<<endl;

}