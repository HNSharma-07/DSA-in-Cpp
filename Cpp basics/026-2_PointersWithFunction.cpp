#include <iostream>
using namespace std;

int sum(int x, int y) { // example of call by value
  return x + y;
}

// updation cannot not done by passing copy
void swapByValue(int x, int y) {
  int temp = x;
  x = y;
  y = temp;
}

// updation can done by passing address
void swapByReference(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

void swapReferenceVar(int &x, int &y) { // by c++ reference variable
  int temp = x;
  x = y;
  y = temp;
}

int main() {
  int a = 4, b = 5;
  cout << "the sum of a and b is: " << sum(a, b) << endl << endl;
  cout << "the value of a is: " << a << " and the value of b is: " << b << endl
       << endl;

  swapByValue(a, b);
  cout << "the value of a is: " << a << " and the value of b is: " << b << endl
       << endl;

  swapByReference(&a, &b);
  cout << "the value of a is: " << a << " and the value of b is: " << b << endl
       << endl;

  swapReferenceVar(a, b);
  cout << "the value of a is: " << a << " and the value of b is: " << b << endl;
}