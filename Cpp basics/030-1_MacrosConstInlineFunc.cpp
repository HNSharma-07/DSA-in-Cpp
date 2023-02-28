#include <iostream>
using namespace std;
// A macro is a piece of code in a program that is replaced by the value of the macro.
#define PI 3.14
#define AREA(r) (PI * r * r)
#define ll long long

// inline function must be of one line only 
inline int getMax(int a, int b) {
  return (a>b)? a : b;
}
//benifite : skip function call by compiler (low time takes) 

int main() {
  int r = 5;
  float area = PI * r * r;
  cout << area << endl;
  cout << AREA(r) << endl;

  int a = 1, b = 3;
  int ans;

  ans = getMax(a, b);
  cout << ans << endl;

  a += 4;
  b += 1;
  ans = getMax(a, b);
  cout << ans << endl;

  const float pi = 3.14;
  cout << pi << endl;
  //pi++; //this cannot be done
  cout << pi << endl;
  
}