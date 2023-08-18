#include<iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr[]){
    int i=0, j=0;
    int k=0;

    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr[k] = arr1[i];
            k++;
            i++;
        }else{
            arr[k] = arr2[j];
            k++;
            j++;
        }
    }

    while(i<n){
        arr[k] = arr1[i];
        k++;
        i++;
    }
    while(j<m){
        arr[k] = arr2[j];
        k++;
        j++;
    }
}

void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n, m;
    cout<<"Enter the size of the First Array: ";
    cin>>n;
    cout<<"Enter the size of the Second Array: ";
    cin>>m;

    int arr1[n], arr2[m];
    cout<<"Enter the elements of First Array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the elements of Second Array: "<<endl;
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    int arr[n+m];

    merge(arr1, n, arr2, m, arr);

    printArray(arr, n+m);
}