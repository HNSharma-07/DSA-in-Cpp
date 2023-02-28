// recursion and array
#include <iostream>
using namespace std;

void printArr(int arr[], int size) {
  cout << "current size of array is : " << size << endl;
  for(int i=0; i<size; i++) {
    cout << arr[i] << " ";
  } cout << endl;
}

bool isSorted(int arr[], int size) {
  //for understanding of recursive call (give sorted array for better understanding)
  printArr(arr, size);
  
  // base case
  if (size == 0 || size == 1) {
    return 1;
  }

  if (arr[0] > arr[1]) {
    return 0;
  } 
  else {
    bool remainingPart = isSorted(arr + 1, size - 1);//recursive call
    return remainingPart;
  }
}

int getSum(int arr[], int size) {
  // base cases
  if(size == 0) {
    return 0;
  }
  if(size == 1) {
    return arr[0];
  }

  int remainingPart = getSum(arr+1, size-1);
  int sum = arr[0] + remainingPart;
  return sum;
}

int main() {
  int arr[5];

  int size;
  cout << "enter the size[max=5] : ";
  cin >> size;

  cout << "enter the elements : " << endl;
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  bool ans = isSorted(arr, size);
  if (ans) {
    cout << "array is sorted" << endl;
    cout << "and the sum is : " << getSum(arr, size) << endl;
  } 
  else {
    cout << "array is not sorted !!" << endl;
    cout << "But, the sum is : " << getSum(arr, size) << endl; 
  }
}