#include <iostream>
using namespace std;
int reverse_array(int arr[],int n){
    // start index = 0
    int start = 0;
    // ending index(last index) = n-1;
    int end = n-1;
    while(end>start){
        // swap the arr[start] and arr[end] values;
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main(){
    // input size n
    int n;
    cin>>n;
    // arr of size n
    int arr[n];
    // arr input 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // reverse function call
    reverse_array(arr,n);
    
    // print krne k liy h
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
