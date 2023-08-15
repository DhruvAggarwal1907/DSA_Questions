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

    int mini=INT_MAX, maxi = INT_MIN;

    for(int i=0;i<n;i++){
        // if(arr[i]>max){
        //     max = arr[i];
        // }
        maxi = max(maxi, arr[i]);

        // if(arr[i]<min){
        //     min = arr[i];
        // }
        mini = min(mini, arr[i]);
    }

    cout<<"Max element is: "<<maxi<<endl<<"Min element is: "<<mini;
}