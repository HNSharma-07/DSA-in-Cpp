//alternative swap the array 
#include <iostream>
using namespace std;

void altSwap(int arr[], int size) {
  for (int i = 0; i < size; i += 2) {
    if (i + 1 < size) {
      swap(arr[i], arr[i + 1]);
    }
  }
}

void printArray(int arr[], int n) {

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {

  int arr[6] = {1, 4, 0, 5, -2, 15};
  int brr[5] = {2, 6, 3, 9, 4};

  altSwap(arr, 6);
  altSwap(brr, 5);

  printArray(arr, 6);
  printArray(brr, 5);

  return 0;
}


// question:
// https://bit.ly/3y01Zdu 
// https://bit.ly/3dm6bdZ
// https://bit.ly/3Il0c7n 
// https://bit.ly/3EwlU6e 
// https://bit.ly/3GbgVs3
// https://bit.ly/3DfQW0s

// https://leetcode.com/problems/unique-number-of-occurrences/
// https://leetcode.com/problems/find-all-duplicates-in-an-array/ 
// https://bit.ly/3GbgVs3 
// https://bit.ly/3DfQW0s 


/*
L-11 :

nothing just giving breaf intro to time and space comlexity to avoid TLE error
will cover it in #41 after recursion series in depth 

*/