#include <iostream>
using namespace std;

void merge(int sortedArr1[],int sortedArr2[],int res[],int n,int m){
      int i,j,k;
    i=0,j=0,k=0;
    while(i<n && j<m){
        if(sortedArr1[i]<sortedArr2[j]){
            res[k++] = sortedArr1[i++];
        } else {
            res[k++] = sortedArr2[j++];
        }
    }
    // [1,2,3]
    // if there is a remaning value in arr1
    while(i<n){
        res[k++] = sortedArr1[i++];
    }
    // if there is a remaning value in arr2
    while(j<m){
        res[k++] = sortedArr2[j++];
    }
    
}

int main(){
    int n,m;
    cin>>n>>m;
    int sortedArr1[n];
    for(int i=0;i<n;i++){
        cin>>sortedArr1[i];
    }
    int sortedArr2[m];
    for(int i=0;i<m;i++){
        cin>>sortedArr2[i];
    }
    int res[n+m];
    merge(sortedArr1,sortedArr2,res,n,m);
    for(int i=0;i<n+m;i++){
        cout<<res[i]<<" ";
    }
}
