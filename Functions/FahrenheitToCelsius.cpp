#include<iostream>
using namespace std;
void FahrToCels(int s ,int e,int w){
    while(s<=e){
        int ans = ((s - 32)*5)/9;
        cout<<s<<" "<<ans<<endl;
        s+=w;
    }
}
int main(){
    int s,e,w;
    cin>>s>>e>>w;
    FahrToCels(s,e,w);
}