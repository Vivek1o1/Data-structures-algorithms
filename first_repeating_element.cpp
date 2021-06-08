// o(n)
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
    int N = 1e6+2;
    int check[N];
    for(int i=0;i<N;i++){
        check[i] = 0;
    }
    for(int i=0;i<n;i++){
        if(check[arr[i]]!=0){
            cout<<arr[i];
            return 0;
        } else {
            check[arr[i]] += 1;
        }
    }
    cout<<-1;
}
// o(n^2)
#include <iostream>
using namespace std;

int main(){
   
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   for(int i=0;i<n-1;i++){
       for(int j=i+1;j<n;j++){
           if(arr[i]==arr[j]){
               cout<<"first repeating element is : "<<arr[i];
               return 0;
           }
     
          
   }
  
   }
   cout<<"no repeating elements";
               return 0;
   
}
