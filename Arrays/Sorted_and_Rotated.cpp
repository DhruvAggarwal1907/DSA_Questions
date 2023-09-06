#include<iostream>
using namespace std;

bool check(int arr[], int n){
    int count = 0;
    
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            count++;
        }
    }
    if(arr[n-1]>arr[0]){
        count++;
    }

    return count<=1;
}

int main(){
    int n;
    cout<<"Enter the size of the Array: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int res = check(arr, n);

    if(res){
        cout<<"Array is Sorted and Rotated..!!!";
    }else{
        cout<<"Array is not Sorted and Rotated..!!!";
    }

}