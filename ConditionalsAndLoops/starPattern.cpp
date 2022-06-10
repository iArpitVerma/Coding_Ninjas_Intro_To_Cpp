#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s = 1;
    for(int i = 1 ;i <= n ; i++){
        for (int k = 1; k <= n-i ;k++ ){
            cout<<" ";
        }
        for(int j = 1 ; j <= s ; j++){
            cout<<"*";
        }
        s+=2;
        cout<<endl;
    }
}

/*              n=4
              Pattern
               *
              ***
             *****
            *******    

*/ 