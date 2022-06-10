#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int basic, total ;
    char grade;
    cin>>basic>>grade;
    total = basic + roundf( (0.20 * basic) + (0.5 * basic) - (0.11 * basic) );
    if(grade == 'A'){
        total = total + 1700;
    }
    else if( grade == 'B'){
        total = total + 1500;
    } 
    else{
        total = total + 1300;
    }
    cout<<total;
}