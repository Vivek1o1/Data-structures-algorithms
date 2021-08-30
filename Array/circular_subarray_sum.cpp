#include <iostream>
#include <climits>
using namespace std;
int kadane(int arr[],int n){
    int current = 0;
    int mx = INT_MIN;
    for(int i=0;i<n;i++){
        current+=arr[i];
        if(current<0){
            current=0;
        }
        mx = max(mx,current);
    }
    return mx;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int max_subarray_sum = kadane(arr,n);
    for(int i=0;i<n;i++){
        sum+=arr[i];
        arr[i]=arr[i]*-1;
    }
    int non_conributing_sum = kadane(arr,n);
    if(max_subarray_sum<sum+non_conributing_sum){
        cout<<sum+non_conributing_sum;
    }else{
        cout<<max_subarray_sum;
    }
}
