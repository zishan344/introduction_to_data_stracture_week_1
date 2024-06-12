#include <bits/stdc++.h>
using namespace std;

int main()
{
  // test vector capacity function
  vector<int> v;
  // cout << v.size() << endl;
  // cout << v.max_size() << endl;
  // cout << v.capacity() << endl;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);
  // cout << v.capacity() << endl;
  // cout << v.empty() << endl;
  v.resize(2);
  v.resize(7, 100);
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << endl;
  }

  return 0;
}
