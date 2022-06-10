#include<iostream>
using namespace std;
void input(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
int linearSearch(int arr[],int n,int x){
    for(int i=0 ;i<n;i++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    input(arr,n);
    int x;
    cin>>x;
    cout<<linearSearch(arr,n,x)<<endl;
}