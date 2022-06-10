#include<iostream>
#include<cstring>
using namespace std;
bool checkPermutation(char arr1[],char arr2[]){
    if(strlen(arr1) != strlen(arr2)){
        return false;
    }
    int count=0;
    for(int i=0;i<strlen(arr1);i++){
        for(int j=0;j<strlen(arr2);j++){
            if(arr1[i] == arr2[j]){
                arr2[j] = 'A';
                count++;
            }
        }
    }
    if(count==strlen(arr1)){
        return true;
    }
    else{
        return false;
    }
}

bool checkPermutation1(char arr1[],char arr2[]){
    // Using a frequency array of ASCII values
    if(strlen(arr1) != strlen(arr2)){
        return false;
    }
    int arr[256] ={0};
    for(int i=0;i<strlen(arr1);i++){
        int k = arr1[i];
        arr[k]++;
    }
    for(int j=0;j<strlen(arr2);j++){
        int k = arr2[j];
        arr[k]--;
    }
    for(int l=0;l<256;l++){
        if(arr[l] != 0){
            return false;
        }
    }
    return true;
}
int main(){
    char arr1[100],arr2[100];
    cin>>arr1>>arr2;
    if(checkPermutation(arr1,arr2) == 1){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}