#include<iostream>
using namespace std;
void trimSpaces(char arr[]){
    int count =0;
    for(int i=0;arr[i] != '\0';i++){
        if(arr[i] != ' '){
            arr[count] = arr[i];
            count++;
        }
    }
    arr[count] = '\0';
}
int main(){
    char arr[100];
    cin.getline(arr,100);
    trimSpaces(arr);
    cout<<arr;
}