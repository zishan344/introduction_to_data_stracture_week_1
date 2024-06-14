#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int ls = 0, lk = 1;
  int rs = n - 1, rk = 1;
  int mid = n / 2;

  for (int i = 1; i <= n; i++)
  {

    for (int j = 1; j <= n; j++)
    {
      if (j == i)
      {

        if (i == mid + 1)
        {
          cout << "x";
        }
        else
        {
          cout << "\\";
        }
      }
      else if (j == (n + 1 - i))
      {
        if (i == mid + 1)
        {
          continue;
        }
        else
        {
          cout << "/";
        }
      }
      else
      {

        cout << " ";
      }
    }

    cout << endl;
  }
  /*   for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < ls; j++)
      {
        cout << " ";
      }

      for (int j = 0; j < lk; j++)
      {
        if (i == mid)
        {
          cout << "x";
        }
        else
        {

          cout << "\\";
        }
      }

      for (int j = 0; j < rs; j++)
      {
        cout << " ";
      }

      for (int j = 0; j < rk; j++)
      {
        if (i == mid)
        {
          continue;
        }
        cout << "/";
      }

      ls++;
      rs--;
      cout << endl;
    }
   */
  return 0;
}
