#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, q;
  cin >> n >> q;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  };
  sort(arr, arr + n);
  while (q--)
  {
    int x;
    cin >> x;
    bool flag = false;
    // 1st approach o(n) time complexity
    /*    for (int i = 0; i < n; i++)
       {
         if (x == arr[i])
         {
           flag = true;
         }
       } */
    // 2nd approach o(logn) time_complexity
    int l = 0, r = n - 1;
    while (l <= r)
    {
      int mid_ind = (l + r) / 2;
      if (x == arr[mid_ind])
      {
        flag = true;
        break;
      }
      if (x > arr[mid_ind])
      {
        // go to right side
        l = mid_ind + 1;
      }
      else
      {
        r = mid_ind - 1;
      }
    }

    if (!flag)
    {
      cout << "not found" << endl;
    }
    else
    {
      cout << "found" << endl;
    }
  }

  return 0;
}
