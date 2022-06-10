#include<iostream>
using namespace std;
void input(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
int duplicate(int arr[100],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                return arr[i];
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    input(arr,n);
    cout<<duplicate(arr,n)<<endl;
}