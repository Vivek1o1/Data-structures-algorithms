include <iostream>
using namespace std;

bool isSorted(int arr[],int n,int itr){
    if(n-1==itr){
        return true;
    }
    if(arr[itr]<arr[itr+1]){
        isSorted(arr,n,itr+1);
    } else {
        return false;
    } 
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<isSorted(arr,n,0);
}
