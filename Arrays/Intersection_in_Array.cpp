#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the size of Array 1: ";
    cin>>n;
    cout<<"Enter the size of Array 2: ";
    cin>>n;

    int a[n],b[m];
    cout<<"Enter the elements in First Array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the elements in Second Array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    int i=0,j=0;
    vector<int> ans, bns;
    while(i<n && j<m){
        if(a[i] == b[j]){
            ans.push_back(a[i]);
            i++;
            j++;
        }else if(a[i]<b[j]){
            i++;
        }else{
            j++;
        }
    }

    
}