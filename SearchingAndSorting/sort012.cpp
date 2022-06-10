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
void sort012(int arr[],int n){
    int k =0 , j=0 ;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            k++;
        }
        else if(arr[i] == 1){
            j++;
        }
    }
    for(int i=0;i<n;i++){
        if(i<k){
            arr[i] = 0;
        }
        else if(i<j+k){
            arr[i] = 1;
        }
        else{
            arr[i] = 2;
        }
    }
}
int main(){
    int n,arr[100];
    cin>>n;
    input(arr,n);
    sort012(arr,n);
    print(arr,n);
}