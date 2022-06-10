#include<iostream>
using namespace std;
void reverse(char arr[],int start,int end){
    for(int i=start;i<end;i++){
        char temp = arr[start];
        arr[start] = arr[end-1];
        arr[end-1] =temp;
        start++, end--;
    }

}
void reverseWordWise(char arr[]){
    int j=0 ,a;
    for(int i=0;arr[i]!='\0';i++){
        a=i;
        if(arr[i] == ' '){
            reverse(arr,j,a);
            j = i+1;
        }
    }
    reverse(arr,j,a+1);
}
int main(){
    char arr[100];
    cin.getline(arr,100);
    int n=0;
    for(int i=0;arr[i]!='\0';i++){
        n++;
    }
    reverse(arr,0,n);
    reverseWordWise(arr);
    cout<<arr;
}