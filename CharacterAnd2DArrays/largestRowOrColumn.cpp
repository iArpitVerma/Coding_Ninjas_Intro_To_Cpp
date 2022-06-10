#include<iostream>
#include<climits>
using namespace std;
void input(int arr[][100],int m ,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
}
void largestSum(int arr[][100],int m,int n){
    int rsum =INT_MIN, csum=INT_MIN , rindex = 0 , cindex =0 ;
    for(int i=0;i<m;i++){
        int sum =0;
        for(int j=0;j<n;j++){
            sum = sum + arr[i][j];
        }
        if(rsum<sum){
            rsum = sum;
            rindex = i;
        }
    }
    for(int j=0;j<n;j++){
        int sum =0;
        for(int i=0;i<m;i++){
            sum = sum + arr[i][j];
        }
        if(csum<sum){
            csum = sum;
            cindex = j;
        }
    }
    if(rsum>csum){
        cout<<"row "<<rindex<<" "<<rsum<<endl;
    }
    else if(rsum == csum){
        cout<<"row "<<rindex<<" "<<rsum<<endl;
    }
    else{
        cout<<"column "<<cindex<<" "<<csum<<endl;
    }
}
int main(){
    int arr[100][100],m,n;
    cin>>m>>n;
    input(arr,m,n);
    largestSum(arr,m,n);
}