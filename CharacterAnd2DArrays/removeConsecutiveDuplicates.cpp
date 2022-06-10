#include<iostream>
#include<cstring>
using namespace std;
void removeConsecutiveDuplicates(char arr[]){
    int i, j=1, lastChar = arr[0];
    for(i=1;i<strlen(arr);i++){
        if(arr[i] != lastChar){
            arr[j] = arr[i];
            lastChar = arr[j];
            j++;
        }
    }
    arr[j] ='\0';
    cout<<arr<<endl;
}
int main(){
    char arr[100];
    cin>>arr;
    removeConsecutiveDuplicates(arr);
}