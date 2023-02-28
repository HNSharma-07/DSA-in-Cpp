#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "enter the last number : " << endl;
  cin >> n;
  int i = 1, sum = 0;
  while (i <= n) {
    sum = sum + i;
    i++;
  }
  cout << "the sum of first " << n << " number is : " << sum;
}

//we can use do{...}while(_); loop if we want to execute the code atleast once 