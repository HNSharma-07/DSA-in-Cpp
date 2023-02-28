// selection sort program
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

/*  selection sort algorithm  */
void selectionSort(int a[], int size) {
  for (int i = 0; i < size - 1; i++) {
    int minInd = i;
    for (int j = i + 1; j < size; j++) {
      if (a[minInd] > a[j]) {
        minInd = j;
      }
    }
    swap(a[minInd], a[i]);
  }
}

int main() {
  int a[100];
  int size;
  cout << "enter the size of the array : ";
  cin >> size;
  cout << "enter the elements  : " << endl;
  takeArray(a, size);
  selectionSort(a, size);
  cout << "sorted array is :" << endl;
  displayArray(a, size);
}

// space complexity : O(1)
// time complexity : O(n^2) //same for best and worst case

// use case : small size array

// selection sort is NOT stable

// 2  4  1  7  4  9
//    a        b

// stable sort  1  2  4  4  7  9
//                    a  b
// the order of equal element is maintained in sorted list

// unstable sort 1  2  4  4  7  9
//                     b  a
// the order of equal element is NOT maintained in sorted list