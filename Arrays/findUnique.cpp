#include<iostream>
using namespace std;
void input(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
int unique(int arr[] ,int n){
    for(int i=0 ;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j] && i!=j){
                break;
            }
            else if(arr[i]!=arr[j] && j == n-1){
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
    cout<<unique(arr,n)<<endl;
}