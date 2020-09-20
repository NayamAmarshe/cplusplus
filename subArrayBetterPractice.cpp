#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int arr[10] = {-2, 5, -3, 7, -8, 2};
    int n = 6;
    int sumArray[10] = {0};
    sumArray[0] = arr[0];
    int maxSum = INT_MIN;

    cout << "Sum at index " << 0 << " is " << sumArray[0] << endl;
    //Add Sum to Sum Array
    for (int i = 1; i < n; i++)
    {
        sumArray[i] = sumArray[i - 1] + arr[i];
        cout << "Sum at index " << i << " is " << sumArray[i] << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum;
            if (i == 0)
            {
                sum = sumArray[0];
            }
            else
            {
                cout << "i is " << sumArray[i] << " and j is " << sumArray[j] << endl;
                sum = sumArray[j] - sumArray[i - 1];
            }
            maxSum = max(maxSum, sum);
        }
    }

    cout << "Max Sum is " << maxSum;
    return 0;
}