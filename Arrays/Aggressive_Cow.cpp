#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int k, int mid){
    int cowCount = 1;
    int lastPos = arr[0];

    for(int i=0;i<n;i++){
        if(arr[i] - lastPos >= mid){
            cowCount++;
            if(cowCount == k){
                return true;
            }
            lastPos = arr[i];
        }
    }

    return false;
}

int aggressiveCows(int arr[], int n, int k){
    sort(arr, arr+n);

    int s=0;
    
    int maxi = -1;
    for(int i=0;i<n;i++){
        maxi = max(maxi, arr[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(isPossible(arr, n, k, mid)){
            ans = mid;
            s = mid+1;
        }else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }

    return ans;
}

int main(){
    int n;
    cout<<"Enter the number of Stalls: ";
    cin>>n;
    int k;
    cout<<"Enter the total number of Aggressive cows: ";
    cin>>k;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<aggressiveCows(arr, n, k);
    
}