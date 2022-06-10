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
void sort01(int arr[],int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            count++;
        }
    }
    for(int k=0;k<count;k++){
        arr[k]=0;
    }
    for(int l=count;l<n;l++){
        arr[l]=1;
    }
    print(arr,n);
}
int main(){
    int n,arr[100];
    cin>>n;
    input(arr,n);
    sort01(arr,n);
}