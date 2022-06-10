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
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
            int min =arr[i];
            int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                minIndex =j;
            }
        }
        // Swap
        int temp = arr[i];
        arr[i] = min;
        arr[minIndex] =temp;
    }
}
int main(){
    int n ,arr[100];
    cin>>n;
    input(arr,n);
    selectionSort(arr,n);
    print(arr,n);
}