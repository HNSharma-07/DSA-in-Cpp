// bubble sort program
#include <iostream>
using namespace std;

void takeArray(int a[], int size) {
  for (int i = 0; i < size; i++) {
    cin >> a[i];
  }
}

void displayArray(int a[], int size) {
  for (int i = 0; i < size; i++) {
    cout << a[i] << " ";
  }
}

/*  bubble sort algorithm  */
// void bubbleSort(int a[], int size) {
//   for (int i = 0; i < size - 1; i++) {
//     for (int j = 0; j < size - i - 1; j++) {
//       if (a[j] > a[j + 1]) {
//         swap(a[j], a[j + 1]);
//       }
//     }
//   }
// }

// An optimized version of Bubble Sort
void bubbleSort(int a[], int n) {

  bool swapped;
  for (int i = 0; i < n - 1; i++) {
    swapped = false;
    for (int j = 0; j < n - i - 1; j++) {
      if (a[j] > a[j + 1]) {
        swap(a[j], a[j + 1]);
        swapped = true;
      }
    }

    // IF no two elements were swapped by inner loop, then break
    if (swapped == false)
      break;
  }
}

int main() { // driver code
  int a[100];
  int size;
  cout << "enter the size of the array : ";
  cin >> size;
  cout << "enter the elements  : " << endl;
  takeArray(a, size);
  bubbleSort(a, size);
  cout << "sorted array is :" << endl;
  displayArray(a, size);
}

// use case : in every i^th round, i^th largest element will be at it's right
// place.

// space complexity : O(1)
// time complexity : O(n^2) //as we have optimized it (by using bool variable)
// so for best case the time complexity will be : O(n)

// YES, bubble sort is stable
// in-place sort