#include<iostream>
using namespace std;

char getmaxOccChar(string s){
    int arr[26] = {0};

    for(int i=0;i<s.length();i++){
        char ch = s[i];

        int number = 0;
        if(ch>='a' && ch<='z'){
            number = ch-'a';
        }else{
            number = ch-'A';
        }
        arr[number]++;
    }

    int maxi = INT_MIN;
    int ans = -1;
    for(int i=0;i<26;i++){
        if(arr[i]>maxi){
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;
}

int main(){
    string s;
    cin>>s;
    cout<<s<<endl;

    cout<<getmaxOccChar(s);
}