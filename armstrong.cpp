#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int copy = n;
    int newnum=0;
    while(n>0){
        int lastdigit;
        lastdigit=n%10;
        newnum= newnum+lastdigit*lastdigit*lastdigit;
        n=n/10;
        
    }
    if(copy==newnum){
        cout<<"Armstrong";
    } else{
        cout<<"Not Armstrong";
    }
}
