// syntax of for loop

// #include <iostream>
// using namespace std;
// int main() {
//   int n, sum = 0;
//   cout << "enter n : " << endl;
//   cin >> n;
//   for (int i = 1; i <= n; i++) {
//     sum += i; // sum = sum + i;
//   }
//   cout << "Sum of first " << n << " integer is : " << sum;
// }

// break;  is use to get out of current loop **remember it breaks only current one loop if there is more than 1 loop
// continue; is use for skip rest iteration in remaining loop portion and continue that loop
// we use combined mixture of loop, if else where break and continue become very important.

/*nice example of break  */
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = i; j <= 5; j++)
//         {
//             // if (i + j == 6)
//             // {
//             //     break;// remember
//             // }
//             cout << i << " " << j << endl;
//         }
//     }
// }

/*Check whether the number is prime or not
  for good understanding to use bool
  play with bool to understand better */
#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "enter the number : " << endl;
  cin >> n;
  bool isPrime;
  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      isPrime = 0;
      break;
    } else
      isPrime = 1;
  }
  if (isPrime == 0) {
    cout << n << " is not a prime number" << endl;
  } else {
    cout << n << " is a prime number";
  }
}

/*simple example of continue*/

// #include <iostream>
// using namespace std;
// int main() {
//   for (int i = 0; i < 3; i++) {
//     cout << "Hi" << endl;
//     continue;
//     cout << "reply to kar la...";
//   }
// }

/*
// slove this 2 leetcode ques : 1281 and 191

https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

https://leetcode.com/problems/number-of-1-bits/

*/