#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp[n]={};
    int j=0;
    
       for(int i=0;i<n;i++){
           if(arr[i]>=0){
               temp[j]=arr[i];
               j++;
           }
       }
       for(int i=0;i<n;i++){
           if(arr[i]<=0){
               temp[j]=arr[i];
               j++;
           }
       }
       
       
       for(int i=0;i<n;i++){
           arr[i]=temp[i];
       }
       for(int i=0;i<n;i++){
           cout<<arr[i];
       }

       
}