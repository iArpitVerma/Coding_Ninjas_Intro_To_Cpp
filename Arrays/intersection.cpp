#include<iostream>
#include<climits>
using namespace std;
void input(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void intersection(int arr1[],int arr2[],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i] == arr2[j]){
                cout<<arr1[i]<<" ";
                arr2[j]=INT_MIN;
                break;
            }
        }
    }
}
int main(){
    int n,m;
    int arr1[100] ,arr2[100];
    cin>>n;
    input(arr1,n);
    cin>>m;
    input(arr2,m);
    intersection(arr1,arr2,n,m);
}