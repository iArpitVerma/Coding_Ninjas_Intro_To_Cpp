#include<iostream>
using namespace std;
void input(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
int checkRotation(int arr[],int n){
    int min = arr[0];
    int min_index = 0;
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
            min_index = i;
        }
    }
    return min_index;
}
int main(){
    int n,arr[100];
    cin>>n;
    input(arr,n);
    cout<<checkRotation(arr,n)<<endl;
}