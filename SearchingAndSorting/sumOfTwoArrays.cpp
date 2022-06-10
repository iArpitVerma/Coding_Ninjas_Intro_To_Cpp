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
void sumOfTwoArrays(int arr[],int arr1[],int arr2[],int n,int m){
    int k,a, sum, carry=0;
    if(n<m){
        k=n;
        a=m+1;
        for(int i=0;i<k;i++){
            sum = arr1[n-i-1] + arr2[m-i-1] + carry;
            if(sum>9){
                arr[a-i-1] = sum%10;
                carry = sum/10;
            }
            else{
                arr[a-i-1] = sum;
                carry = 0;
            }
        }
        sum = arr2[0] + carry;
    }
    else if(n>m){
        k=m;
        a=n+1;
        for(int i=0;i<k;i++){
            sum = arr1[n-i-1] + arr2[m-i-1] + carry;
            if(sum>9){
                arr[a-i-1] = sum%10;
                carry = sum/10;
            }
            else{
                arr[a-i-1] = sum;
                carry = 0;
            }
        }
        sum = arr1[0] + carry;
    }else{
        k=n, a=n+1;
        for(int i=0;i<k;i++){
            sum = arr1[n-i-1] + arr2[m-i-1] + carry;
            if(sum>9){
                arr[a-i-1] = sum%10;
                carry = sum/10;
            }
            else{
                arr[a-i-1] = sum;
                carry = 0;
            }
        }
        arr[0] = carry;
        print(arr,a);
        return;
    }
    if(sum>9){
        arr[1] = sum%10;
        arr[0] = sum/10;
    }else{
        arr[1] = sum;
        arr[0] = 0;
    }
    print(arr,a);
}
int main(){
    int n,m,arr1[100],arr2[100],arr[100];
    cin>>n;
    input(arr1,n);
    cin>>m;
    input(arr2,m);
    sumOfTwoArrays(arr,arr1,arr2,n,m);
}