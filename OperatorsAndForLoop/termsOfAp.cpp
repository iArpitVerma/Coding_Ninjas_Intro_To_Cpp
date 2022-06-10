#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int count = 0;
    int n = 1 ;
    while(count<x){
        int an = 3*n + 2;
        if(an%4 != 0){
            cout<<an<<" ";
            count++;
        }
        n++;
    }
}