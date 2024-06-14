#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n;
  vector<int> v1;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    v1.push_back(x);
  }
  cin >> m;
  vector<int> v2;
  for (int i = 0; i < m; i++)
  {
    int x;
    cin >> x;
    v2.push_back(x);
  }
  int pos;
  cin >> pos;
  v1.insert(v1.begin() + pos, v2.begin(), v2.end());

  for (int x : v1)
  {
    cout << x << " ";
  }

  return 0;
}
