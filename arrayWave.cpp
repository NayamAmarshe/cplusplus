#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int arr[10][10] = {{1, 2, 3, 4}, {11, 12, 13, 14}, {21, 22, 23, 24}};
    //0 0  1  2 //1 0 1 2 //
    int rows = 3, cols = 4;
    for (int i = 0; i < cols; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < rows; j++)
            {
                cout << arr[j][i] << ",";
            }
        }
        else
        {
            for (int j = rows - 1; j >= 0; j--)
            {
                cout << arr[j][i] << ",";
            }
        }
        cout << endl;
    }
    return 0;
}

/*
1 2 3 4 5 6 7 8 9

to print:
1,4,7
8,5,2
3,6,9

    ar[0][0], arr[1][0], arr[2][0]
    arr[2][1], arr[1][1], arr[0][1]

row -> 0,1,2,2,1,0
col-> 0,0,0,1,1,1,2,2,2


*/
