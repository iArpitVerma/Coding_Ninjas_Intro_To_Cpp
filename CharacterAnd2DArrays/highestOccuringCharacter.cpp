#include<iostream>
using namespace std;
char highestOccuringCharacter(char arr[]){
    int arr1[256] ={0};
    for(int i=0;arr[i]!='\0';i++){
        int k = arr[i];
        arr1[k]++;
    }
    char max = arr[0];
    int k = arr[0];
    int max_value = arr1[k];
    for(int i=1;arr[i]!='\0';i++){
        int k = arr[i];
        if(max_value<arr1[k]){
            max = arr[i];
            max_value = arr1[k];
        }
    }
    return max;
}
int main(){
    char arr[100];
    cin>>arr;
    cout<<highestOccuringCharacter(arr)<<endl;
}