#include <iostream>
using namespace std;

/*   explaination of the code

a^b --> 1. b is even : a^(b/2) * a^(b/2)
    --> 2. b is odd : a * ((b/2) * a^(b/2))

// in this power program recursive mothod is more efficient than iterative approch as it takes less steps.
*/

int power(int a, int b) {
  //base cases(2)
  if(b == 0) {
    return 1;
  }
  if(b == 1) {
    return a;
  }

  int recursiveCall = power(a, b/2);

  if(b%2==0){ //even case
    return recursiveCall * recursiveCall;    
  }
  else {
    return a * recursiveCall * recursiveCall;
  }
}

int main() {
  int a, b;
  cout << "enter base and power respectively : ";
  cin >> a >> b;

  cout << a << " to the power " << b << " is : " << power(a, b) << endl;
}