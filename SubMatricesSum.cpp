#include <bits/stdc++.h>
using namespace std;

void PrintArray(int arr[10][10], int r, int c)
{
  for (int i = 0; i < r; i++)
  {
    for (int i = 0; i < c; i++)
    {
      cout << arr[r][c] << ",";
    }
    cout << endl;
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

  // 1, 2, 3 ,2 , 1

  int arr[10][10] = {{1, 2, 3, 4}, {11, 12, 13, 14}, {21, 22, 23, 24}};
  int rows = 3, cols = 4;
  int maxSum = 0;
  int sumArr[10][10];
  int tr = 0, tc = 0, br = 0, bc = 0;
  //Column Sum
  for (int toprow = 0; toprow < rows; toprow++)
  {
    int sum = 0;
    for (int topcol = 0; topcol < cols; topcol++)
    {
      sum += arr[toprow][topcol];
      sumArr[toprow][topcol] = sum;
      cout << sumArr[toprow][topcol] << ", ";
    }
    cout << endl;
  }

  //Row Sum
  for (int i = 0; i < cols; i++)
  {
    int sum = 0;
    for (int j = 0; j < rows; j++)
    {
      sum += sumArr[j][i];
      sumArr[j][i] = sum;
    }

    //Print Array
    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < cols; j++)
      {
        cout << sumArr[i][j] << ", ";
      }
      cout << endl;
    }

    cout << "ROWS" << endl;
    return 0;
  }