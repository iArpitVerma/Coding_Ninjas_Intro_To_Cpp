#include<iostream>
using namespace std;
int main(){
    // ASCII Values
    // A - Z (65 - 90)
    //a - z (97 -122)
    char a ;
    cin>>a;
    int b = a;
    if( 65<=b && b<=90){
        cout<<"1";
    }
    else if(97<=b && b<=122){
        cout<<"0";
    }
    else{
        cout<<"-1";
    }
    return 0;
}