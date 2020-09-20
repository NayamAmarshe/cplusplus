#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int ar[10][10] = {{1, 2, 3, 4}, {11, 12, 13, 14}, {21, 22, 23, 24}, {31, 32, 33, 34}};
    //0 0  1  2 //1 0 1 2 //
    int rows = 3, cols = 4;
    int startRow = 0, endRow = 3, startCol = 0, endCol = 3;

    while (startRow <= endRow and startCol <= endCol)
    {

        //left to right
        for (int i = startCol; i <= endCol; i++)
        {
            cout << ar[startRow][i];
        }
        startRow++;
        cout << endl;
        for (int i = startRow; i <= endRow; i++)
        {
            cout << ar[i][endCol];
        }
        endCol--;
        cout << endl;
        for (int i = endCol; i >= startCol; i--)
        {
            cout << ar[endRow][i];
        }
        endRow--;
        cout << endl;
        for (int i = endRow; i >= startRow; i--)
        {
            cout << ar[i][startCol];
        }
        startCol++;
        cout << endl;
        /* code */
    }

    return 0;
}

/*
  0  1   2  3
   ___________
0 |1   2  3  4
1 |11 12 13 14
2 |21 22 23 24
3 |31 32 33 34

00 01 02 03 13 23 33 32 31 30 20 10 11 12 22 21
to print:
1   2  3  4
14 24 23 22
21 11 12 13

arr[0][0], arr[0][1], arr[0][2], arr[0][3]
arr[1][3], arr[2][3], arr[2][2], arr[2][1]
arr[2][0], arr[1][0], arr[1][1], arr[1][2]

*/