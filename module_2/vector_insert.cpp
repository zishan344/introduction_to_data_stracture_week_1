#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v = {10, 20, 30, 40, 50};
  vector<int> v2 = {100, 200, 300, 400};
  // v.insert(v.begin() + 2, 100);
  v.insert(v.begin() + 2, v2.begin(), v2.end());
  for (int i : v)
  {
    cout << i << " ";
  }

  return 0;
}
