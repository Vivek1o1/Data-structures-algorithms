#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{   
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if(i<j){
        swap(arr[i],arr[j]);
        }
    } while (i < j);
    swap(arr[low],arr[j]);
    return j;
}

// quick sort
void quickSort(int arr[], int low, int high)
{
    int partitionIndex;
    if(low<high){
        partitionIndex = partition(arr,low,high);
        quickSort(arr,low,partitionIndex-1);
        quickSort(arr,partitionIndex+1,high);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quickSort(arr,0,n-1);
    for( auto i : arr){
        cout<<i<<" ";
    }
}
