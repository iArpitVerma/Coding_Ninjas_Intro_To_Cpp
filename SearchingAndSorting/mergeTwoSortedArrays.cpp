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
void mergeTwoSortedArrays(int arr[],int arr1[],int arr2[],int n,int m){
    int i =0 , j=0, k=0;
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            arr[k] = arr1[i];
            k++,i++;
        }
        else {
            arr[k] = arr2[j];
            k++,j++;
        }
    }
    if(i==n){
        while(k<n+m){
            arr[k] = arr2[j];
            k++,j++;
        }
    }
    else if(j == m){
        while(k<n+m){
            arr[k] = arr1[i];
            k++,i++;
        }
    }
}
int main(){
    int n,m,arr1[100],arr2[100], arr[100];
    cin>>n;
    input(arr1,n);
    cin>>m;
    input(arr2,m);
    mergeTwoSortedArrays(arr,arr1,arr2,n,m);
    print(arr,n+m);
}