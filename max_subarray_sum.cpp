#include <iostream>
#include <climits>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int arr[n];
   int subarray=0;
   for(int i=0;i<n;i++){
       cin>>arr[i];
       
   }
   int sum = 0;
   int max_sum = INT_MIN;
   for(int i=0;i<n;i++){
       sum = 0;
       for(int j=i;j<n;j++){
           sum += arr[j];
           max_sum = max(max_sum,sum);
       }
   }
   cout<<max_sum;
}
