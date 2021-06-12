#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int target;
    cin>>target;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(target == arr[i][j]){
               cout<<i<<" "<<j;
               return 1;
           }
        }
    }
    cout<<-1<<-1;
    return 0;
}
