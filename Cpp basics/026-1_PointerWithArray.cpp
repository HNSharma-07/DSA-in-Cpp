#include <iostream>
using namespace std;

void explainCharArray(){
  cout << "char pointer :" << endl;
  int numArr[5] = {1,2,3,4,5};
  char chArr[6] = "abcde";

  cout << numArr << endl;
  cout << chArr << endl; // because cout works differently for int and char datatype.

  char *c = &chArr[0];
  cout << c << endl;

  char t = 'z';
  char *c1 = &t;
  cout << c1 << endl;
}

int main() {
  int arr[10] = {2,5,8}; 
  //array's name is indicates array's first memory block address
  cout << "array's first memory block is: " << arr << endl;
  cout << "array's first memory block is: " << &arr[0] << endl;
  cout << "array's first element: " << arr[0] << endl << endl;

  cout << "*arr: " << *arr << endl;
  cout << "*arr + 1: " << *arr +1 << endl;
  cout << "*(arr+1): " << *(arr +1) << endl;
  cout << "value at 1st index: " << arr[1] << endl;
  //   arr[i] = *(arr + i)

  // or i[arr] = *(i + arr)     // something new 
  cout << 2[arr] << endl << endl;  // 3rd element at 2nd index(8)

  int *ptr = &arr[0];
  cout << sizeof(arr) << endl; // 10*4 = 40
  cout << sizeof(ptr) << endl;
  // arr = 5; will throw error because, symbol table cannot be changed
  cout << endl;

  explainCharArray();
}