// Quick sort program using recursion
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

/*  quick sort algorithm also has functions as it's use recursive approch */

int partition(int arr[], int s, int e) {
  int pivot = arr[s];

  int cnt = 0; //counting elements which are smaller than than pivot 
  for(int i = s+1; i<=e; i++) {
    if(arr[i] <= pivot) {
      cnt++;
    }
  }

  //placing pivot to the right position 
  int pivotIndex = s + cnt;
  swap(arr[pivotIndex], arr[s]);

  //managing left and right parts
  int i = s, j = e;

  while(i < pivotIndex && j > pivotIndex) {
    while(arr[i] < pivot) {
      i++;
    }
    while(arr[j] > pivot) {
      j--;
    }

    if(i < pivotIndex && j > pivotIndex) {
      swap(arr[i++], arr[j--]);
    }
  }

  return pivotIndex;
}

void quickSort(int arr[], int s, int e) {
  //base case
  if(s >= e) {
    return ;
  }

  //defining the partition index
  int p = partition(arr, s, e);

  //sorting left part //1st recursive call
  quickSort(arr, s, p-1);

  //sorting right part //2nd recursive call
  quickSort(arr, p+1, e);
}

int main() {
  int arr[100];
  int size;
  cout << "enter the size of the array : ";
  cin >> size;
  cout << "enter the elements  : " << endl;
  takeArray(arr, size);
  int s = 0, e = size - 1;
  quickSort(arr, s, e);
  cout << "sorted array is :" << endl;
  displayArray(arr, size);
}

// space complexity : O(n)
// time complexity : O(n*logn) and for worst case O(n^2)

// use case : faster than previous sorting algorithms
// in array quick sort is preffered over merge sort; in linked list merge sort is preffered over quick sort

// NO, merge sort is NOT stable
