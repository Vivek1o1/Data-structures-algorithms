#include <iostream>
using namespace std;

int firstOccurance(int arr[],int n,int itr,int k){
    if(n==itr){
        return -1;
    }
    if(arr[itr]==k){
        return itr;
    }
    firstOccurance(arr,n,itr+1,k);
}
int lastOccurance(int arr[],int n,int itr,int k){
    if(itr==-1){
        return -1;
    }
    if(arr[itr]==k){
        return itr;
    }
    firstOccurance(arr,n,itr-1,k);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // cout<<firstOccurance(arr,n,0,1);
    cout<<lastOccurance(arr,n,n-1,1);
}

