#include <bits/stdc++.h>
using namespace std;

int main()
{
  int arr[10] = {0, 1, 0, 0, 1, 0, 0, 1};
  int n = 7;
  int lt = 0, rt = 6;
  while (lt <= rt)
  {
    if (arr[lt] < arr[rt])
    {
      rt--;
      lt++;
    }
    else if (arr[rt] < arr[lt])
    {
      int tmp = arr[rt];
      arr[rt] = arr[lt];
      arr[lt] = tmp;
      lt++;
      rt--;
    }
    else if (arr[rt] == arr[lt] and arr[rt] == 0)
    {
      lt++;
    }
    else if (arr[rt] == arr[lt] and arr[lt] == 1)
    {
      rt--;
    }
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << ", ";
  }

  return 0;
}