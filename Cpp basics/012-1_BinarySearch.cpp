// Binary Search is applicable if and only if the elements of the array is in
// MONOTONIC function (increasing or decreasing order)

/*simplest example to understand binary search*/
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
  int start = 0;
  int end = size - 1;

  int mid = start + ((end - start) / 2); // nothing just (start+end)/2  to avoid overflow of int range in compiler
  while (start <= end) {
    if (arr[mid] == key) {
      return mid;
    } else if (arr[mid] < key) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }

    mid = start + ((end - start) / 2);
  }
  return -1;
}

int main() {
  int odd[] = {3, 5, 7, 9, 11};
  int even[] = {12, 15, 17, 20};

  cout << "the key value in odd is, at index :" << binarySearch(odd, 5, 66)
       << endl;
  cout << "the key value in even is, at index :" << binarySearch(even, 4, 12)
       << endl;
}

// Binary search is always benificial then Linear search because of less time complexity
//binary search O(logn)
//linear search O(n)

/*  
     **IMP questions on binary search**

    --> #13 

https://bit.ly/3Ioexjh  (upgrad->total number of Occ.)

https://leetcode.com/problems/peak-index-in-a-mountain-array/

  https://leetcode.com/problems/find-pivot-index/

   --> #14

- Find Pivot in an Sorted & Rotated Array using Binary Search

- Search an Element in a Sorted & Rotated array using Binary Search

- Find Square Root of an Integer[both int & floating part] using Binary Search
 
   --> #15 (level up)

- Book Allocation Problem: https://bit.ly/3GiCqY0 
- Aggressive Cows: https://bit.ly/3dkuQ2B 
- Painter’s Partition Problem: https://bit.ly/31v3Jiy 
- EKO SPOJ: https://www.spoj.com/problems/EKO/ 
- PRATA SPOJ: https://bit.ly/3ExHXt5 

*/