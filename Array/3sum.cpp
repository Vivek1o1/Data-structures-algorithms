#include <bits/stdc++.h>
using namespace std;

int threesum(int n,int arr[],int sum){
     for(int i=0;i<n;i++){
         int low=i+1;
         int high=n-1;
         while(low<high){
             if(arr[i]+arr[low]+arr[high]==sum){
                 cout<<arr[i]<<" "<<arr[low]<<" "<<arr[high]<<endl;
             }
             if(arr[i]+arr[low]+arr[high]<sum){
                 low++;
             }
             else{
                 high--;
             }
         }
     }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
     sort(arr,arr+n);
     
     threesum(n,arr,sum);
}
