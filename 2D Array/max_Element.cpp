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
    int max_element = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            max_element = max(max_element,arr[i][j]);
        }
    }
    cout<<max_element;
    
}
