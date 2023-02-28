#include <iostream>
using namespace std;

// linear search in 2d array
bool isPresent(int arr[][3], int target, int row, int col) {
  // we must need to specify the column size of the array in parameter of
  // function, because 2D array itself is a linear block of element and colom
  // size gives compiler instruction when to start new row
  for (int row = 0; row < 3; row++) {
    for (int col = 0; col < 3; col++) {

      if (arr[row][col] == target) {
        return 1;
      }
    }
  }
  return 0;
}

// to print row wise sum
void printRowSum(int arr[][3], int row, int col) {
  cout << "Printing row wise Sum -> " << endl;
  for (int row = 0; row < 3; row++) {
    int sum = 0;
    for (int col = 0; col < 3; col++) {
      sum += arr[row][col];
    }
    cout << sum << " ";
  }

  cout << endl;
}

// to print colom wise sum
void printColSum(int arr[][3], int row, int col) {
  cout << "Printing colom wise Sum -> " << endl;
  for (int col = 0; col < 3; col++) {
    int sum = 0;
    for (int row = 0; row < 3; row++) {
      sum += arr[row][col];
    }
    cout << sum << " ";
  }

  cout << endl;
}

int largestRowSum(int arr[][3], int row, int col) {

  int maxi = INT32_MIN;
  int rowIndex = -1;

  for (int row = 0; row < 3; row++) {
    int sum = 0;
    for (int col = 0; col < 3; col++) {
      sum += arr[row][col];
    }

    if (sum > maxi) {
      maxi = sum;
      rowIndex = row;
    }
  }

  cout << "Row wise maximum sum is " << maxi << endl;
  return rowIndex;
}

int main() {

  // create 2 d array
  int arr[3][3];
  // initialized input is row wise as default
  // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,14,16};
  // int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};

  cout << "Enter the elements " << endl;
  // taking input -> row wise input
  for (int row = 0; row < 3; row++) {
    for (int col = 0; col < 3; col++) {
      cin >> arr[row][col];
    }
  }

  /*
  //taking input -> col wise input
      for(int col=0; col<3; col++) {
          for(int row=0; row<3; row++) {
              cin >> arr[row][col];
          }
      }

  */

  // print
  cout << "Printing the array : " << endl;
  for (int row = 0; row < 3; row++) {
    for (int col = 0; col < 3; col++) {
      cout << arr[row][col] << " ";
    }
    cout << endl;
  }

  // linear search in 2D array
  cout << "Enter the element to search : " << endl;
  int target;
  cin >> target;

  if (isPresent(arr, target, 3, 3)) {
    cout << "Element found **" << endl;
  } else {
    cout << "Not Found !!!" << endl;
  }

  printRowSum(arr, 3, 3);
  printColSum(arr, 3, 3);

  int ansIndex = largestRowSum(arr, 3, 3);
  cout << "Max row sum is at index " << ansIndex << endl;

  return 0;
}

/*

que links : 
https://www.codingninjas.com/codestudio/problems/print-like-a-wave_893268?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_6
https://leetcode.com/problems/spiral-matrix/
https://leetcode.com/problems/rotate-image/
binary search in 2D array -->
https://leetcode.com/problems/search-a-2d-matrix/  
https://leetcode.com/problems/search-a-2d-matrix-ii/

if stuck in que :
https://github.com/loveBabbar/CodeHelp-DSA-Busted-Series/tree/main/Lecture023%202D%20arrays

*/