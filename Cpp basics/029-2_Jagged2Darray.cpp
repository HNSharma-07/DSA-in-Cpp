#include <iostream>
using namespace std;

int main() {
  int rows, cols;
  
  cout << "enter row size : ";
  cin >> rows;

  int *col = new int[rows];
  for (int i = 0; i < rows; i++) {
    cout << "Enter number of element at " << i << "th index row : ";
    cin >> col[i];
  }
  
  int **arr = new int *[rows];

  // creating a 2-d Array dynamically
  for (int i = 0; i < rows; i++) {
    arr[i] = new int[col[i]];
  }

  // taking input in 2-d Array
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < col[i]; j++) {
      cin >> arr[i][j];
    }
  }

  // print output in 2-d Array
  cout << endl;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < col[i]; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  // releasing the memory
  for (int i = 0; i < rows; i++) {
    delete[] arr[i];
  }
  
  delete[] arr;
  
}