#include<iostream>
using namespace std;

bool checkPalindrome(char a[], int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        if(a[s] != a[e]){
            return 0;
        }else{
            s++;
            e--;
        }
    }

    return 1;
}

bool Palindrome(string& name, int i, int j){

    if(i > j){
        return true;
    }

    if(name[i]!=name[j]){
        return false;
    }else{
        i++;
        j--;
        return Palindrome(name, i, j);
    }
}

int main(){
    // int n;
    // cout<<"Enter the size of the Array: ";
    // cin>>n;

    // char name[n];
    // for(int i=0;i<n;i++){
    //     cin>>name[i];
    // }

    // if(checkPalindrome(name, n)){
    //     cout<<"Your String is a Palindrome..!!!";
    // }else{
    //     cout<<"String is not a Palindrome..!!!";
    // }

    string name = "naman";

    if(Palindrome(name, 0, name.length()-1)){
        cout<<"Is Palindrome..!!!";
    }else{
        cout<<"Not Palindrome..!!!";
    }
}