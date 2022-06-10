#include<iostream>
using namespace std;
void input(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void rotateArray(int arr[],int n,int x){
    for(int i=0;i<x;i++){
        int current = arr[0];
        int j;
        for(j=0;j<n-1;j++){
            arr[j]=arr[j+1];
        }
        arr[j] = current;
    }
}
int main(){
    int n,x,arr[100];
    cin>>n;
    input(arr,n);
    cin>>x;
    rotateArray(arr,n,x);
    print(arr,n);
}