#include<iostream>
using namespace std;

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

    for(int i=0;i<n;i++){
        if(elem == arr[i]){
            cout<<"Element found at index: "<<i<<endl;
        }
    }
}