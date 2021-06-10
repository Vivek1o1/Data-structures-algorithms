#include <iostream>
using namespace std;
bool countDigits(int n){
    int counter=0;
    while(n>0){
        n=n/10;
        counter++;
    }
    if(counter%2==0){
        return true;
    } 
    return false;
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];    
    }
    int counter = 0;
    for(int i=0;i<n;i++){
       if(countDigits(arr[i])==true){
           counter++;
       }
    }
    cout<<counter;
}
