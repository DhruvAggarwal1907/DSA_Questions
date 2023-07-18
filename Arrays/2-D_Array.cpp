#include<iostream>
using namespace std;

bool isPresent(int arr[][3], int elem){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] == elem){
                return 1;
            }
        }
    }

    return 0;
}

int main(){
    int n,m;
    cout<<"Enter the number of rows: ";
    cin>>n;
    cout<<"Enter the number of columns: ";
    cin>>m;

    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int elem;
    cout<<"Enter the element to search: ";
    cin>>elem;

    if(isPresent(arr, elem)){
        cout<<"Element found..!!!";
    }else{
        cout<<"Element not Found..!!!!";
    }
}