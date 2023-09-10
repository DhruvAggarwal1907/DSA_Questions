#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){
    int s = 0;
    int e = v.size()-1;

    while(s<e){
        swap(v[s++], v[e--]);
    }

    return v;
}

int findArraySum(int arr1[], int n, int arr2[], int m){
    int i = n-1;
    int j = m-1;
    vector<int> ans;
    
    int carry = 0;

    while(i>=0 && j>=0){
        int val1 = arr1[i];
        int val2 = arr2[j];

        int sum = val1+val2+carry;
        carry = sum/10;
        sum = sum%10;

        ans.push_back(sum);
        i--;
        j--;
    }

    while(i>=0){
        int sum = arr1[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
    while(j>=0){
        int sum = arr2[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }
    while(carry!=0){
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }

    reverse(ans);

    for(int i=0;i<ans.size();i++){
        cout<<ans.at(i)<<" ";
    }
}

int main(){
    int n,m;
    cout<<"Enter the size of the First Array: ";
    cin>>n;
    cout<<"Enter the size of the Second Array: ";
    cin>>m;

    int arr1[n], arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    
}