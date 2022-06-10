#include<iostream>
using namespace std;
void input(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
int binarySearch(int arr[],int n,int x){
    int start =0 ;
    int end =n-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid] == x){
            return mid;
        }
        else if(x<arr[mid]){
            end = mid-1;
        }
        else{
            start = mid +1;
        }
    }
    return -1;
}
int main(){
    int n,arr[100],x;
    cin>>n;
    input(arr,n);
    cin>>x;
    cout<<binarySearch(arr,n,x)<<endl;
}