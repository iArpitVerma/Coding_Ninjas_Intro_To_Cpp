#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i =0;
    int number = 0 ;
    while(n!=0){
        number = number +((n%10) * pow(2,i));
        i++;
        n= n/10;
    }
    cout<<number<<endl;
}