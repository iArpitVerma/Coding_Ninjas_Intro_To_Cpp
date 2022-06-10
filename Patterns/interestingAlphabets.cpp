#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k = n;
    for(int i=1 ;i<=n ;i++){
        char startChar = 'A' + k - 1;
        for( int j = 1 ; j<=i ; j++){
            char ans = startChar + j -1;
            cout<<ans;
        } 
        cout<<endl;
        k--;
    }
}