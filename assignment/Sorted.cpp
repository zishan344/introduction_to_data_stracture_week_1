#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    bool flag = true;
    int l = 0, r = n - 1;
    for (int i = 1; i < n; i++)
    {
      if (arr[i] < arr[i - 1])
      {
        flag = false;
        break;
      }
    }

    if (flag)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }

  return 0;
}
