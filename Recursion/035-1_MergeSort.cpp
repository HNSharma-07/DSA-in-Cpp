// Merge sort program using recursion
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

/*  merge sort algorithm has 2 functions as it's use recursive approch */

void merge(int arr[], int s, int e) {
  
  int mid = s + (e - s)/2;

  int len1 = mid - s + 1;
  int len2 = e - mid;

  //creating temp arrays dynamically
  int *first = new int[len1];
  int *second = new int[len2];

  //copy data(elements) in temp arrays
  int mainArrayIndex = s;
  for(int i=0; i<len1; i++) {
    first[i] = arr[mainArrayIndex++];
  }

  mainArrayIndex = mid + 1;
  for(int i=0; i<len2; i++) {
    second[i] = arr[mainArrayIndex++];
  }

  //merge 2 sorted arrays
  int index1 = 0;
  int index2 = 0;
  mainArrayIndex = s;

  while(index1 < len1 && index2 < len2) {
    if(first[index1] < second[index2]) {
      arr[mainArrayIndex++] = first[index1++];
    }
    else {
      arr[mainArrayIndex++] = second[index2++];
    }
  }

  while(index1 < len1) {
    arr[mainArrayIndex++] = first[index1++];
  }
  while(index2 < len2) {
    arr[mainArrayIndex++] = second[index2++];
  }
}

void mergeSort(int arr[], int s, int e) {
  //base case
  if(s >= e) {
    return ;
  }

  int mid = s + (e - s)/2;

  //sort the left part // 1st recursive call
  mergeSort(arr, s, mid);

  //sort the right part // 2nd recursive call
  mergeSort(arr, mid+1, e);

  //merging the array
  merge(arr, s, e);
}

int main() {
  int arr[100];
  int size;
  cout << "enter the size of the array : ";
  cin >> size;
  cout << "enter the elements  : " << endl;
  takeArray(arr, size);
  int s = 0, e = size - 1;
  mergeSort(arr, s, e);
  cout << "sorted array is :" << endl;
  displayArray(arr, size);
}

// space complexity : O(n)
// time complexity : O(n*logn)

// use case : faster than previous sorting algorithms

// YES, merge sort is stable