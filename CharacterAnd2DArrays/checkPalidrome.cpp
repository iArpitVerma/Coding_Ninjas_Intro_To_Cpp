#include<iostream>
using namespace std;
bool checkPalidrome(char arr[]){
    int n =0;
    for(int i=0;arr[i] != '\0';i++){
        n++;
    }
    for(int i=0;i<n/2;i++){
        if(arr[i] != arr[n-i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    char arr[100];
    cin>>arr;
    int ans = checkPalidrome(arr);
    if(ans == 1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}