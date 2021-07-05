#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input array
    vector<int> arr = {0,1,2,0,1,2,0,2,1};
    int l = 0;
    int m=0;
    int h = arr.size()-1;
    while(m<=h){
        if(arr[m]==0){
            swap(arr[l],arr[m]);
            l++;
            m++;
        } else if (arr[m] == 1){
            m++;
        } else {
            swap(arr[h],arr[m]);
            h--;
        }
    }
    for(auto num : arr){
        cout<<num<<" ";
    }
}

// int main()
// {
//     // input array
//     vector<int> arr = {0,1,2,0,1,2,0,2,1};
//     vector<int> res;
//     for(int i=0;i<arr.size();i++){
//         if(arr[i]==0){
//             res.push_back(arr[i]);
//         }
//     }
//     for(int i=0;i<arr.size();i++){
//         if(arr[i]==1){
//             res.push_back(arr[i]);
//         }
//     }
//     for(int i=0;i<arr.size();i++){
//         if(arr[i]==2){
//             res.push_back(arr[i]);
//         }
//     }
//     for(int i=0;i<res.size();i++){
//         cout<<res[i]<<" ";
//     }
// }
