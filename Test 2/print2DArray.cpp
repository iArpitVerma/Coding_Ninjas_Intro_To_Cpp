#include<iostream>
using namespace std;
void input(int arr[][100],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
}
void printArray(int arr[][100],int m,int n){
    for(int i=0;i<m;i++){
        for(int k=i;k<n;k++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
int main(){
    int m,n, arr[100][100];
    cin>>m>>n;
    input(arr,m,n);
    printArray(arr,m,n);
}