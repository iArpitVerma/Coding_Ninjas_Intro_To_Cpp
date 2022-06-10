#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a = n;
    for(int i = 1; i <= n ; i++){
        for(int k =1 ; k < a ; k++){
            cout<<" ";
        }
        a--;
        int k = i;
        for (int j = 1 ;j<=i ; j++){
            cout<<k;
            k++;
        }
        cout<<endl;
        }
}

/*      Pattern
        n=5
            1
           23
          345
         4567
        56789   
*/