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

    return 0;
}

/*
  0  1   2  3
   ___________
0 |1   2  3  4
1 |11 12 13 14
2 |21 22 23 24
3 |31 32 33 34
*/