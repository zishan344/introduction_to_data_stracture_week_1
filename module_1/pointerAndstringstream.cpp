#include <bits/stdc++.h>
using namespace std;
// reverse printing word
void print(stringstream &ss)
{
  string word;
  if (ss >> word)
  {
    print(ss);
    cout << word << endl;
  }
}
int main()
{
  /*int i = 10;
    cout << &i << endl;
    int *p = &i;
    cout << *p; */

  string str;
  getline(cin, str);
  stringstream ss(str);
  string word;

  /*   while (ss >> word)
    {
      cout << word << endl;
    } */
  // reverse print
  print(ss);
  return 0;
}
