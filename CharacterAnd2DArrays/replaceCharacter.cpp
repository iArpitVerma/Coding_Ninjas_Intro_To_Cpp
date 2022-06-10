#include<iostream>
using namespace std;
void replaceCharacter(char arr[100],char ch1,char ch2){
    int count =0;
    for(int i =0;arr[i]!='\0';i++){
        count++;
    }
    for(int i=0;i<count;i++){
        if(arr[i] == ch1){
            arr[i] = ch2;
        }
    }
}
int main(){
    char arr[100],ch1,ch2;
    cin>>arr;
    cin>>ch1>>ch2;
    replaceCharacter(arr,ch1,ch2);
    cout<<arr;
}