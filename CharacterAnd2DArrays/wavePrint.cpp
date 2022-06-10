#include<iostream>
using namespace std;
void input(int arr[][100],int m ,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
}
void print(int arr[][100],int m, int n){
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cout<<arr[i][j]<<" ";
        }
        j++;
        if(j<n){
            for(int i=m-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}
int main(){
    int arr[100][100],m,n;
    cin>>m>>n;
    input(arr,m,n);
    print(arr,m,n);
}