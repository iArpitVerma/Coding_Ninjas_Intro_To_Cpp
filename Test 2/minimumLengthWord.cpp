#include<iostream>
#include<climits>
using namespace std;
void minimumLengthWord(char arr[]){
    char arr1[100];
    int j =0 ,l,i, minl = INT_MAX;
    for(i=0;arr[i]!='\0';i++){
        if(arr[i] == ' '){
            l = i-j;
            if(l<minl){
                minl=l;
                for(int k=0;k<l;k++){
                    arr1[k] = arr[j];
                    j++;
                }
                arr1[l] ='\0';
            }
            j=i+1;
        }
    }
    l=i-j;
    if(l<minl){
        minl = l;
        for(int k=0;k<l;k++){
            arr1[k] = arr[j];
            j++;
        }
        arr1[l] ='\0';
    }
    cout<<arr1<<endl;

}
int main(){
    char arr[100];
    cin.getline(arr,100);
    minimumLengthWord(arr);
}