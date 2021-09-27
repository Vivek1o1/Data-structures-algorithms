#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxelement=arr[0];
    for(int i=0;i<n;i++){
       if(arr[i]>maxelement){
           maxelement=arr[i];
       }
      
    }
    int minelement=arr[0];
     for(int i=0;i<n;i++){
       if(arr[i]<minelement){
           minelement=arr[i];
       }
      
    }
     cout<<maxelement<<endl;
     cout<<minelement<<endl;
}