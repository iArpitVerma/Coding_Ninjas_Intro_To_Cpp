#include<iostream>
using namespace std;
int main(){
    int x ,n;
    int ans = 1;
    cin>>x>>n;
    while(n!=0){
        ans = ans*x;
        n--;
    }
    cout<<ans<<endl;
}