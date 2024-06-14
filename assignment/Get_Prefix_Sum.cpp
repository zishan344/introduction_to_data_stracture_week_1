#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<long long> arr(n);
  long long pre[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  pre[0] = arr[0];
  for (int i = 1; i < n; i++)
  {
    pre[i] = arr[i] + pre[i - 1];
  };

  sort(pre, pre + n, greater<long long>());
  for (int i = 0; i < n; i++)
  {
    cout << pre[i] << " ";
  }

  return 0;
}
