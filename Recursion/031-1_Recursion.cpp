// Recursion : when a functions calls itself is called recursion (badi problem ko chhoti problem me tod sake to recursion use kar sakte hai)

// recusive relation : make formula
// base case : when we have to stop. base case (return value) is mendetory because without it function will be called infinite time due to this stack will be overflow and program will give segmentation error. 
//we can do procesing also...

#include <iostream>
using namespace std;

int factorial(int n) {
  //base case
  if(n==0)
    return 1;

  // int smallProb = factorial(n-1);
  // int bigProb = n * smallProb;
  int ans = n * factorial(n-1);

  return ans;
}

int main() {
  int n;
  cin >> n;

  int ans = factorial(n);
  cout << ans << endl;
}