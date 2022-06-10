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
void insertionSort(int arr[],int n){
    for(int i =1;i<n;i++){
        int current = arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(current <arr[j]){
                arr[j+1] =arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] =current;
    }
}
int main(){
    int n, arr[100];
    cin>>n;
    input(arr,n);
    insertionSort(arr,n);
    print(arr,n);
}