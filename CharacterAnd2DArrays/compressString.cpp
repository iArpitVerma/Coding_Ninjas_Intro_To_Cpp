#include<iostream>
#include<cstring>
using namespace std;
void compressString(char arr[100]){
    int i,j=0,l,k=0;
    for(i=0;i<=strlen(arr);i++){
        if(arr[j] != arr[i]){
            l = i-j;
            if(l>1){
                arr[k] = arr[j];
                // 48 is ASCII value of 0
                arr[k+1] = l + 48;
                k+=2, j=i;
            }
            else if(l==1){
                arr[k] = arr[j];
                j++,k++;
            }
        }
    }
    arr[k] ='\0';
    cout<<arr<<endl;
}
int main(){
    char arr[100];
    cin>>arr;
    compressString(arr);
}