#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int current = 2;
    int ans = 2;
    int previous_difference = arr[1]-arr[0];
    int i = 2;
    for(int i=2;i<n;i++){
        if(previous_difference==arr[i]-arr[i-1]){
            current++;
        } else{
            previous_difference = arr[i]-arr[i-1];
            current = 2;
        }
        ans = max(ans,current);
    }
    cout<<ans;
}
