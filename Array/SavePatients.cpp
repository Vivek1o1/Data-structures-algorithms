#include <iostream>
using namespace std;

bool savepatients( int N,int arr1[],int arr2[]){
   

   for(int i=0;i<N;i++){
       if(arr1[i]<arr2[i]){
           return false;
       }
      return true;
   }
}
int main(){
   int n;
   cin>>n;
   int arr1[n];
   int arr2[n];
   for(int i=0;i<n;i++){
       cin>>arr1[i];
   }
    for(int i=0;i<n;i++){
       cin>>arr2[i];
   }

   if(savepatients(n, arr1,arr2)==true){
       cout<<"Yes";
   }
   else{
       cout<<"NO";
   }
   
   
}