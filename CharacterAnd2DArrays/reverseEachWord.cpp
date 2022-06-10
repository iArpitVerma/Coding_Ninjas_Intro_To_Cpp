#include<iostream>
#include<cstring>
using namespace std;
void reverseAWord(char arr[],int start,int end){
    while(start<end){
        char temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++,end--;  
    }
}
void reverseEachWord(char arr[]){
    int i,j =0;
    for(i=0;i<strlen(arr);i++){
        if(arr[i] == ' '){
            reverseAWord(arr,j,i-1);
            j = i + 1;
        }
    }
    reverseAWord(arr,j,i-1);
    cout<<arr<<endl;
}
int main(){
    char arr[100];
    cin.getline(arr,100);
    reverseEachWord(arr);
}