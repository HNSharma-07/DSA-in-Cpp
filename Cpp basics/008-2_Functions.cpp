#include <iostream>
using namespace std;

int power(int num1, int num2) {
  int ans = 1;
  for (int i = 1; i <= num2; i++) {
    ans = ans * num1;
  }
  return ans;
}
// int main() { // to calculate power
//   int a, b;
//   cout << "enter a and b respectively :";
//   cin >> a >> b;
//   cout << power(a, b);
//   return 0;
// }


void printing(int n) { // void returns nothing
  for (int i = 1; i <= n; i++) {
    cout << i << " ";
  }
}
// int main() { // printing till n
//   int n;
//   cout << "enter number :";
//   cin >> n;
//   printing(n); //void function
// }


bool isPrime(int num) {
  int rem;
  for (int i = 2; i < num; i++) {
    rem = num % i;
    if (rem == 0) {
      return 0;
    }
  }
  return 1;
}
// int main() { // to check prime number
//   int n;
//   cout << "enter number :";
//   cin >> n;
//   if (isPrime(n)) {
//     cout << n << " is prime";
//   } else
//     cout << n << " is not prime";
// }


bool isEven() {
  int n;
  cout << "enter the number :";
  cin >> n;
  if (n & 1) {
    return 0;
  }
  return 1;
}
// int main() { // even or odd ?
//   if (isEven()) {
//     cout << "is even";
//   } else {
//     cout << "is odd";
//   }
// }


int factorial(int n) {
  int ans = 1;
  if (n == 0) {
    ans = 1;
  } else {
    for (int i = 1; i <= n; i++) {
      ans = ans * i;
    }
  }
  return ans;
}

float nCr(int n, int r) {
  float ans = (float)(factorial(n)) / (factorial(r) * factorial(n - r));
  return ans;
}

int main() {
  int n, r;
  cout << "enter n and r respectively (small values only !!!): ";
  cin >> n >> r;
  cout << "nCr of " << n << " and " << r << " is : " << nCr(n, r);
}
// observe how function call other function : this is function call stack

// whatever variable in function is not an acctual variable of main function but its a COPY variable // the updation of dummy function is, in that function not in main function (the concept of pass by value)