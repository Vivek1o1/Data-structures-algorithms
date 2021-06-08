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
    int current_sum = 0;
    int max_sum = INT_MIN;
    for(int i=0;i<n;i++){
        current_sum+=arr[i];
        if(current_sum<0){
            current_sum=0;
        }
        max_sum = max(max_sum,current_sum);
        cout<<max_sum<<" "<<current_sum<<endl;
    }
    cout<<max_sum;
}
