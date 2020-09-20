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
  int n = 7;
  int maxSum = INT_MIN;
  //individual numbers
  for (int i = 0; i < n; i++)
  {
    //loop from the current to end
    for (int j = i; j < n; j++)
    {
      int sum = 0;
      for (int k = i; k < j; k++)
      {
        cout << arr[k] << ",";
        sum = sum + arr[k];
      }
      maxSum = max(maxSum, sum);
      cout << endl;
    }
  }
  cout << "MaxSum is " << maxSum;
  return 0;
}