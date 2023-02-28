#include <iostream>
using namespace std;

void bubbleSortByRecursion(int arr[], int size) {
  //base case (already sort)
  if(size==0 || size==1) {
    return ;
  }

  //ek case solve karlo, baki recursion solve kar lega
  for(int i=0; i<size-1; i++) { //i^th largest element sorted in i^th round 
    if(arr[i] > arr[i+1]) {
      swap(arr[i], arr[i+1]);
    }
  }

  bubbleSortByRecursion(arr, size-1); //recursive all
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

  bubbleSortByRecursion(arr, size);
  cout << "Sorted array is : ";
  for(int i=0; i<size; i++) {
    cout << arr[i] << " ";
  } cout << endl;
}