#include <iostream>
#include <climits>
using namespace std;
int
reverse (int arr[], int start, int end)
{
  while (end > start)
    {
      int temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp;
      start++;
      end--;
    }
}

int
main ()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
  int k;
  cin >> k;
  reverse (arr, 0, n - 1 - k);
  reverse (arr, n - k, n - 1);
  reverse (arr, 0, n - 1);
  for (int i = 0; i < n; i++)
    {
      cout << arr[i] << " ";
    }
}
