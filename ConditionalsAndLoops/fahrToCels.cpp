#include<iostream>
using namespace std;
int main(){
    int s , e , w , c;
    cin>>s>>e>>w;
    while(s<=e){
        c = (5*(s - 32))/9;
        cout<<s<<"\t"<<c<<endl;
        s = s + w;
    }
}