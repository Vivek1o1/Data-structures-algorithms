
#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                char temp_char = s[j];
                s[j] = s[j+1];
                s[j+1] = temp_char;
               
            }
        }
    }
    cout<<s;
}



