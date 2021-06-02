#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool isNegative = false;
    if(n<0){
        isNegative = true;
        n = n*-1;
    }
    int reverse=0;
    while(n>0){
        int lastdigit;
        lastdigit= n%10;
        reverse= reverse*10+lastdigit;
        n=n/10;
    }
    if(isNegative==true){
        cout<<reverse*-1;
    } else {
        cout<<reverse;
    }
}
