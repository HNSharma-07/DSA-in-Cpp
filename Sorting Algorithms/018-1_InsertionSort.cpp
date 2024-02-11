// insertion sort program
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

/*  insertion sort algorithm  */
void insertionSort(int a[], int size) {
  for (int i = 1; i < size; i++) {
    int current = a[i];
    int j = i - 1;
    // Move elements of arr[0..i-1],
    // that are greater than key, to one position ahead of their current
    // position
    while ( j >= 0 && a[j] > current) {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = current;
  }
}

int main() {
  int a[100];
  int size;
  cout << "enter the size of the array : ";
  cin >> size;
  cout << "enter the elements  : " << endl;
  takeArray(a, size);
  insertionSort(a, size);
  cout << "sorted array is :" << endl;
  displayArray(a, size);
}

// space complexity : O(1)
// time complexity : O(n^2) //but for best case : O(n)

// use case : adeptable

// YES, insertion sort is stable