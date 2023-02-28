// if, else if, else...
#include <iostream>
using namespace std;

int main() {

  int a, b;
  cout << "enter the value of a : "
       << "\n";
  cin >> a;
  cout << "enter the value of b : "
       << "\n";
  cin >> b;

  if (a > b) {
    cout << "a is greater then b" << endl;
  } else if (b > a) {
    cout << "b is greater then a" << endl;
  } else {
    cout << "a is equal to b \n";
  }
}