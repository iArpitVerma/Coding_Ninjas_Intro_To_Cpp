#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count =0;
    while(n!=0){
        if(n%10 == 0){
            if(count!=0){
                cout<<n%10;
            }
        }
        else{
            cout<<n%10;
            count++;
        }
        n=n/10;
    }
}