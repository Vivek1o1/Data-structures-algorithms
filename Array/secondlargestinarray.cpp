#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
      int largest=INT_MIN;
      int secondlargest= INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondlargest and arr[i]<largest){
           secondlargest=arr[i];
        }
    }

    cout<<secondlargest<<endl;
}