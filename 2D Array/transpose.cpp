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
    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

// with extra space
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
    int res[m][n];
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            res[j][i] = arr[i][j];
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}
