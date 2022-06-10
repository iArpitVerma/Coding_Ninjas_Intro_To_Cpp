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
void push0sToEnd(int arr[],int n){
    int j=0 , count =0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[j] = arr[i];
            j++, count++;
        }
    }
    for(int k=0;k<n-count;k++){
        arr[j] = 0;
        j++;
    }
}
int main(){
    int n,arr[100];
    cin>>n;
    input(arr,n);
    push0sToEnd(arr,n);
    print(arr,n);
}