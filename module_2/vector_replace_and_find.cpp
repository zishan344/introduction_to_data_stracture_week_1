#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v = {10, 30, 20, 40, 50, 20, 80};
  replace(v.begin(), v.end(), 20, 5);
  auto it = find(v.begin(), v.end(), 10);
  if (it == v.end())
  {
    cout << "not found" << endl;
  }
  else
  {
    cout << "found" << endl;
  }
  for (int x : v)
  {
    cout << x << " ";
  }

  return 0;
}
