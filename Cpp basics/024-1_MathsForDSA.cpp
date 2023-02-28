#include <iostream>
#include <math.h>
using namespace std;

int gcd(int a, int b) {
  if (a == 0)
    return b;

  if (b == 0)
    return a;

  while (a != b) {
    if (a > b)
      a = a - b;

    else
      b = b - a;
  }
  return a;
}

int main() {
  int a, b;
  cout << "enter a and b respectively :" << endl;
  cin >> a >> b;
  cout << "GCD of a and b is : " << gcd(a, b) << endl;
}

/*

count primes using // Sieve of Eratosthenes
h.w. // segmented sieve  // pigeonhole principle

euclid's algo :
gcd(a,b) = gcd(a-b,b) = gcd(a%b,b)
i.g. gcd(72,24) = gcd(48,24) = gcd(24,24) = gcd(0,24) => finally the ans is 24

lcm(a,b) * gcd(a,b) = a*b

h.w. :
modulo arithmatic
que:
https://www.codingninjas.com/codestudio/problems/modular-exponentiation_1082146?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_7

*/
