#include<iostream>
using namespace std;
void input(int arr[][100],int m ,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
}
void columnWiseSum(int arr[][100],int m,int n){
    for(int j=0;j<n;j++){
        int sum =0;
        for(int i=0;i<m;i++){
            sum = sum + arr[i][j];
        }
        cout<<sum<<" ";
    }
}
int main(){
    int arr[100][100] , m,n;
    cin>>m>>n;
    input(arr,m,n);
    columnWiseSum(arr,m,n);
}