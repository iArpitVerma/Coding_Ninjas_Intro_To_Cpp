#include<iostream>
#include<climits>
using namespace std;
void input(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
int secondLargest(int arr[],int n){
    int lar = arr[0];
    int slar = INT_MIN;
    for(int i=1;i<n;i++){
        if(lar<arr[i]){
            slar = lar;
            lar = arr[i];
        }
        else if(lar>arr[i]){
            if(slar<arr[i]){
                slar = arr[i];
            }
        }
    }
    return slar;
}
int main(){
    int n, arr[100];
    cin>>n;
    input(arr,n);
    cout<<secondLargest(arr,n)<<endl;
}