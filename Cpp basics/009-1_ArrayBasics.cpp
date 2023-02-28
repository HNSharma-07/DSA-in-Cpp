// array
#include <iostream>
using namespace std;

void takeArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
}
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}
// array's index always starts with 0
int main() {
  int arr1[5]; // gives garbage values for every index
  cout << "value at index 0 is :" << arr1[0] << endl;
  cout << "value at index 1 is :" << arr1[1] << endl;
  cout << "value at index 4 is :" << arr1[4] << endl;
  cout << "value at index 5 is :" << arr1[5] << endl << endl;

  int arr2[] = {3, 5, 9}; // give garbage for index>2
  cout << "value at index 0 is :" << arr2[0] << endl;
  cout << "value at index 3 is :" << arr2[3] << endl << endl;

  int arr3[3] = {2}; // size is mendetory if we are not initialising
  cout << "value at index 0 is :" << arr3[2] << endl;
  cout << "value at index 1 is :" << arr2[2] << endl;
  cout << "value at index 2 is :" << arr2[2] << endl << endl;

  int arr[100];
  int size;
  cout << "enter array size : ";
  cin >> size;
  cout << "enter the elements : ";
  takeArray(arr, size);
  cout << "the elements of the array are : \n";
  printArray(arr, size);
}

// array has undefined behavier if its not defined well
// in code we should define array clearly

//when we update array in other function it can acctually change in main function (oposite of variable concept) , because here we are not giving copy array but, we are giving first array element's memory address. // so, update function update it at address that's why whole array can be updated in main function as well 