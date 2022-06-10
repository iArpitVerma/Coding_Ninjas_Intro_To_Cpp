#include<iostream>
using namespace std;
void print(int arr[] ,int n){
    for(int i =0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void arrangeNumbers(int arr[],int n){
    arr[0] = 1;
    for(int i=1 ;i< (n+1)/2 ;i++){
        arr[i] = arr[i-1] + 2;
    }
    arr[n-1] = 2; 
    for(int i= n-2  ;i>=(n+1)/2;i--){
        arr[i] = arr[i+1] + 2;
    }
    print(arr,n);
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    arrangeNumbers(arr,n);
}