#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i =1 ;i<=n ;i++){
        for(int j=1 ;j<=n-i ;j++){
            cout<<" ";
        }
        for(int k=i ; k<= 2*i - 1;k++ ){
            cout<<k;
        }
        for(int l= 2*i -2 ; l>=i ; l-- ){
            cout<<l;
        }
        cout<<endl;
    }
}
/*
 n = 5
    1
   232
  34543
 4567654
567898765
*/