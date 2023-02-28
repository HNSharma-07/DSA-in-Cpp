// recursion and binary search
#include <iostream>
using namespace std;

void printArr(int arr[], int start, int end) {
  for(int i = start; i <= end; i++) {
    cout << arr[i] << " ";
  } cout << endl;
}

bool binarySearch(int arr[], int start, int end, int key) {
  printArr(arr, start, end); // for better understanding of recursive call
  //base cases (2)
  if(start > end) { //element not found
    return 0;
  }

  int mid = start + (end - start)/2;
  cout << "value of mid is : " << arr[mid] << "\n" << endl;

  if(arr[mid] == key) { //element found
    return 1;
  }

  if(arr[mid] > key) {
    return binarySearch(arr, start, mid-1, key);
  }
  else {
    return binarySearch(arr, mid+1, end, key);
  }
}

int main() {
  int arr[5];

  int size, key;
  cout << "enter the size[max=5] : ";
  cin >> size;

  cout << "enter the elements : " << endl;
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  cout << "enter the element you want to find : ";
  cin >> key;

  int start = 0, end = size - 1;

  bool ans = binarySearch(arr, start, end, key);
  if (ans) {
    cout << "element is PRESENT" << endl;
  } 
  else {
    cout << "element is ABSENT" << endl;
  }
}