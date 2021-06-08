
#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    int sum = 0;
    int mx = INT_MIN;
    int start_mx = 0;
    int end_mx = 0;
    for(int i = 0;i<n;i++){
        sum = 0;
        for(int j=i;j<n;j++){
            sum += arr[j];
            if(mx<sum){
                mx = sum;
                start_mx = i;
                end_mx = j;
            }
        }
    }
    cout<<mx<<" "<<start_mx<<" "<<end_mx<<endl;
    for(int i=start_mx;i<=end_mx;i++){
        cout<<arr[i]<<" ";
    }
}
