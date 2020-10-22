#include <bits/stdc++.h>
using namespace std;

void countBoxes(int n)
{
  for (int l = 1; l * l <= n; l++)
  {
    for (int h = 1; l * h <= n; h++)
    {
      cout << l << "*" << h << endl;
    }
  }
}

int main()
{
//ONLINE JUDGE //
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  // Code from here //
  int n = 10;
  countBoxes(n);
  return 0;
}