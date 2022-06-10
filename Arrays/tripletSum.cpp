#include<iostream>
using namespace std;
void input(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
int tripletSum(int arr[],int n ,int x){
    int count =0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    count++;
                }
            }
        }
    }
    return count;
}
int main(){
    int n,x,arr[100];
    cin>>n;
    input(arr,n);
    cin>>x;
    cout<<tripletSum(arr,n,x)<<endl;
}