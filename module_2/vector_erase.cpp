#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v = {10, 20, 30, 40, 50};
  v.erase(v.begin() + 2, v.end() - 1);
  for (int i : v)
  {
    cout << i << " ";
  }

  return 0;
}
