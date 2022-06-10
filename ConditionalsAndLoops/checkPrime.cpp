#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a =2 ;
    while(a<=pow(n,0.5)){
        if(n%a == 0){
            cout<<"Not Prime";
            break;
        }
        a++;
    }
    if(n%a != 0){
        cout<<"Prime";
    }
}