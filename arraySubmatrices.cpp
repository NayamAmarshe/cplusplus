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

  // 1, 2, 3 ,2 , 1

  int arr[10][10] = {{1, 2, 3, 4}, {-11, -12, -13, -14}, {-21, -22, -23, -24}};
  int rows = 3, cols = 4;
  int maxSum = 0;
  for (int toprow = 0; toprow < rows; toprow++)
  {

    for (int topcol = 0; topcol < cols; topcol++)
    {
      // cout << arr[toprow][topcol] << "=>";
      for (int botrow = toprow; botrow < rows; botrow++)
      {
        for (int botcol = topcol; botcol < cols; botcol++)
        {
          int sum = 0;
          for (int row = toprow; row <= botrow; row++)
          {
            for (int col = topcol; col <= botcol; col++)
            {
              cout << arr[row][col] << ",";
              sum += arr[row][col];
            }
            maxSum = max(maxSum, sum);
          }
          cout << endl;
        }
      }
    }
  }
  cout << "MaxSum is " << maxSum;
  return 0;
}