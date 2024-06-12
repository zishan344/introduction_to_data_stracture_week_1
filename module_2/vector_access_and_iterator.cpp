#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v = {10, 30, 20, 40, 50, 20, 80};
  // vector<int>::iterator it;
  for (auto it = v.begin(); it < v.end(); it++)
  {
    cout << *it << " ";
  }

  return 0;
}
