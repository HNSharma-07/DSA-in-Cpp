#include <iostream>
using namespace std;

void updateByValue(int n) {
  n++;
}

void updateByRefVar(int &n) {
  n++;
}

int main() {
  int i = 5;

  int &j = i; // creating reference variable of i

  // now, i and j are same value (same memory different names)
  cout << i << " " << j << endl;
  i++;
  cout << i << " " << j << endl;

  j++;
  cout << i << " " << j << endl;

  int n = 2;
  cout << "n = " << n << endl;

  updateByValue(n);
  cout << "after pass by value : " << n << endl;

  updateByRefVar(n);
  cout << "after pass by reference : " << n << endl;
}