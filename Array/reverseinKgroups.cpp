#include <bits/stdc++.h>
using namespace std;

int reverseinKgroups(int n,int arr[],int k){
      for(int i=0;i<n;i+=k){
        int start=i;
        int end=min(i+k-1,n-1);

        while(start<=end);
           int temp=arr[start];
           arr[start]= arr[end];
           arr[end]=temp;
           start++;
           end--;

    }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    int k;
  

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     reverseinKgroups(n,arr,3);

     for(int i=0;i<n;i++){
         cout<<arr[i];
     }
  
    
}