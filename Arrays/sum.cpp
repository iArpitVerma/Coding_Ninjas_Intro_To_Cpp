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
void sum(int arr[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum +arr[i];
    }
    cout<<sum<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    input(arr,n);
    print(arr,n);
    sum(arr,n);
}