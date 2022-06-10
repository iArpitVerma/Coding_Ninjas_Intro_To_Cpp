#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=2 ;i<=n ;i++){
        bool a =true;
        for(int d =2; d<i ;d++){
            if(i%d == 0 ){
                a =false;
                break;
            }
        }
        if(a){
            cout<<i<<endl;
        }
    }
}