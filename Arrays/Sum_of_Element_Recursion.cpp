#include<iostream>
using namespace std;

int sumElement(int arr[], int n){
    if(n==0){
        return 0;
    }
    if(n == 1){
        return arr[0];
    }
    int sum = arr[0] + sumElement(arr+1, n-1);

    return sum;
}

int main(){
    int n;
    cout<<"Enter the size of the Array: ";
    cin>>n;

    int *arr = new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int result = sumElement(arr, n);

    cout<<"The sum of Element of Array is: "<<result;
}