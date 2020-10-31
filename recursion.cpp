#include <bits/stdc++.h>
using namespace std;

int increment(int start, int n)
{
    cout << start << endl;
    if (start == n)
    {
        return n;
    }
    return increment(start + 1, n);
}

int main()
{
    int n = 10;
    int x = increment(1, n);
    return 0;
}
