#include<iostream>
using namespace std;
void leadersInArray(int inputArray[],int size){
    int i,j,max;
    for(i=0;i<size;i++){
        max = inputArray[i];
        for(j=i+1 ;j<size ;j++){
            if(max<inputArray[j]){
                break;
            }
        }
        if(j==size){
            cout<<max<<" ";
        }
    }
    cout<<endl;
}
int main(){
    int size, inputArray[100];
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>inputArray[i];
    }
    leadersInArray(inputArray,size);
}