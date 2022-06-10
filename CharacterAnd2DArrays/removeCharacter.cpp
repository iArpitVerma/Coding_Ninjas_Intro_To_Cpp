#include<iostream>
#include<cstring>
using namespace std;
void removeCharacter(char arr[], char x){
    int i,j=0;
    for(int i=0;arr[i]!='\0';i++){
        if (arr[i] != x){
            arr[j] = arr[i];
            j++;
        }
    }
    arr[j] = '\0';
}
int main(){
    char arr[100],x;
    cin>>arr>>x;
    removeCharacter(arr,x);
    cout<<arr<<endl;
}