#include<iostream>
using namespace std;
void input(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
int pairSum(int arr[],int n,int x){
    int count =0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j] == x){
                count++;
            }
        }
    }
    return count;
}
int main(){
    int n;
    int arr[100];
    cin>>n;
    input(arr,n);
    int x;
    cin>>x;
    cout<<pairSum(arr,n,x)<<endl;
}