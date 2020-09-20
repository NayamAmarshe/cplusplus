#include <bits/stdc++.h>
using namespace std;

int main()
{
//ONLINE JUDGE //
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  // Code from here //

  int arr[10] = {1, 4, 20, 3, 10, 5};
  int n = 6;
  int maxSumArray = INT_MIN;
  //Next Number
  for (int startIndex = 0; startIndex < n; startIndex++)
  {
    //Next Line
    for (int endIndex = startIndex; endIndex < n; endIndex++)
    {
      int localSum = 0;
      //Full Sub Array
      for (int currSub = startIndex; currSub <= endIndex; currSub++)
      {
        cout << arr[currSub] << ",";
        localSum = arr[currSub] + localSum;
      }
      maxSumArray = max(maxSumArray, localSum);
      cout << endl;
    }
  }
  cout << maxSumArray;

  return 0;
}