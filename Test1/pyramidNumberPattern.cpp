#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1 ;i<=n ;i++){
        for(int j=i;j<=n-1;j++){
            cout<<" ";
        }
        for(int k=i;k>0;k--){
            cout<<k;
        }
        for(int l=2;l<=i;l++){
            cout<<l;
        }
        cout<<endl;
    }
}