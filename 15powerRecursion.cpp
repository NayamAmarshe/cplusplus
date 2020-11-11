#include <bits/stdc++.h>
using namespace std;
int powerRecursion(int a, int b) {
    if (b == 0) {
        return 1;
    }

    return a * powerRecursion(a, b - 1);
}

int main() {
    int a = 4;
    int b = 10;
    cout << powerRecursion(a, b);

    return 0;
}