// binary to desimal
#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int n;
  cout << "enter binary number : " << endl;
  cin >> n;

  int i = 0, ans = 0;
  while (n != 0) {
    int digit = n % 10;
    ans = (digit * pow(2, i)) + ans;
    i++;
    n = n / 10;
  }
  cout << "decimal value is : " << ans;
}

/*
L-7 : problem solving session 
solve this 3 leetcode ques : 7, 1009, 231

https://leetcode.com/problems/reverse-integer/

https://leetcode.com/problems/complement-of-base-10-integer/

https://leetcode.com/problems/power-of-two/

*/