#include<iostream>
using namespace std;
void input(int arr[][100],int m ,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
}
void spiralPrint(int arr[][100],int m,int n){
    int cs = 0 , ce = n-1 , rs=0, re = m-1;
    int count = 0;
    while(count <= n*m){
        for(int j= cs ;j<=ce ;j++){
            cout<<arr[rs][j]<<" ";
            count++;
        }
        rs++;
        if(count==n*m){
            break;
        }
        for(int i=rs;i<=re;i++){
            cout<<arr[i][ce]<<" ";
            count++;
        }
        ce--;
        if(count==n*m){
            break;
        }
        for(int j=ce;j<=cs;j--){
            cout<<arr[re][j]<<" ";
            count++;
        }
        re--;
        if(count==n*m){
            break;
        }
        for(int i=re;i<=rs;i--){
            cout<<arr[i][cs]<<" ";
            count++;
        }
        cs++;

    }
}
int main(){
    int arr[100][100],m,n;
    cin>>m>>n;
    input(arr,m,n);
    spiralPrint(arr,m,n);
}