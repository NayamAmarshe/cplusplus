#include <bits/stdc++.h>
using namespace std;
int isSorted(int *arr, int n) {
    if (n == 0 or n == 1) {
        return true;
    }

    if (arr[0] <= arr[1] and isSorted(arr + 1, n - 1)) {
        return true;
    }

    return false;
}

int main() {
    int n = 4;
    int arr[10] = {1, 2, 5, 7, 8, 9};
    if (isSorted(arr, n)) {
        cout << "Sorted";
    } else {
        cout << "Unsorted";
    }

    return 0;
}