#include <bits/stdc++.h>
using namespace std;

int main()
{

  // vector<int> v1;
  // vector<int> v2(10);
  // vector<int> v3[7] = {0, 1, 2, 3, 4, 5, 6};
  // vector<int> v4(v3);
  int a[2] = {0, 1};
  vector<int> v(a, a + 2);
  /*  cout << v1.size() << endl;
   cout << v2.size() << endl; */

  for (int i = 0; i < 2; i++)
  {
    cout << v[i] << endl;
  }

  return 0;
}
