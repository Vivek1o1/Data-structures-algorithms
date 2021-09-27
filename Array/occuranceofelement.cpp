#include <iostream>
using namespace std;

occurance(int arr[],int n,int x){
    int counter=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            counter++;
        }
    }
    return counter;
}
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     
     cout<<occurance(arr,n,10);
}