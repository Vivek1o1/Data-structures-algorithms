#include <iostream>
using namespace std;
int klargest(int arr[],int n,int k){
    int counter=1;
    for(int i=0;i<n;i++){
        if(counter==k){
            cout<<arr[i];
        }
        counter++;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    klargest(arr,n,3);
}