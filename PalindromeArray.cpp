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

  int arr[5] = {1, 3, 4, 2, 1};
  int i = 0, j = 4;
  bool isPalindrome = true;
  while (i <= j)
  {
    cout << "i = " << arr[i] << " & j = " << arr[j] << endl;
    if (arr[i] != arr[j])
    {
      isPalindrome = false;
      cout << "Not a Palindrome";
      break;
    }
    i++;
    j--;
  }
  if (isPalindrome)
  {
    cout << "Palindrome";
  }
  return 0;
}