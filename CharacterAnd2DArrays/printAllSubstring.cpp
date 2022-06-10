#include<iostream>
using namespace std;
void substring(char arr[]){
    for(int k=0;arr[k]!='\0';k++){
        for(int i=k;arr[i]!='\0';i++){
            for(int j = k;j<=i;j++){
                cout<<arr[j];
            }
            cout<<endl;
        }
    }
}
int main(){
    char arr[100];
    cin>>arr;
    substring(arr);
}