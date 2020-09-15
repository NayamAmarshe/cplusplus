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

  int arr[6] = {-2, 5, -3, 7, -8, 2};
  int n = 6;
  int subArrSum[6] = {0};
  subArrSum[0] = arr[0];
  int maxSumArray = INT_MIN;
  int sum = 0;
  for (int i = 1; i < n; i++)
  {
    subArrSum[i] = subArrSum[i - 1] + arr[i];
  }

  for (int i = 0; i < n; i++)
  {
    cout << subArrSum[i] << endl;
  }
  //individual numbers
  for (int startIndex = 0; startIndex < n; startIndex++)
  {
    //looping through array with individual pairs
    for (int endIndex = startIndex; endIndex < n; endIndex++)
    {
      sum = 0;
      if (startIndex == 0)
      {
        sum = subArrSum[endIndex];
      }
      else
      {
        cout << "Start Index is " << startIndex << " & end Index is " << endIndex << " and ";
        sum = subArrSum[endIndex] - subArrSum[startIndex - 1];
        cout << "sum " << sum << endl;
        maxSumArray = max(maxSumArray, sum);
      }
    }
  }
  cout << maxSumArray;
  return 0;
}