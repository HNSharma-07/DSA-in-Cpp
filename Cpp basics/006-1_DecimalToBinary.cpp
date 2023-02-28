// convert decimal to binary
#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int n;
  cin >> n;

  // int i = 0, ans = 0; // 1st method (bit manuplation)
  // while (n != 0) {
  //   int bit = n & 1; // 1&1=1   and   1&0=0
  //   ans = (bit * pow(10, i)) + ans; // by reverse print formula
  //   n = n >> 1;
  //   i++;
  // }
  // cout << ans;

  int i = 0, ans = 0; // 2nd method (without bit)
  while (n != 0) {
    int digit = n % 2;
    ans = (digit * pow(10, i)) + ans;
    n = n / 2;
    i++;
  }
  cout << ans;
}

