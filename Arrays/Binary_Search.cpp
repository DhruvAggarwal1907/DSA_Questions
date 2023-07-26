#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int elem){
    int s=0,e=n-1;
    bool flag = false;

    while(s<=e){
        int mid = s + (e-s)/2;

        if(elem == arr[mid]){
            flag = true;
            cout<<"Element "<<elem<<" found at index "<<mid<<endl;
        }

        if(elem<mid){
            e = mid-1;
        }else{
            s = mid+1;
        }
    }

    if(!flag){
        cout<<"Element not Found..!!!";
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements in an Array: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }

    int elem;
    cout<<"Enter the element to find: ";
    cin>>elem;

    binarySearch(arr, n, elem);
}