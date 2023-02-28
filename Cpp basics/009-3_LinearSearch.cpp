#include <iostream>
using namespace std;

void takeArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
}

bool linearSearch(int arr[], int size, int key) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == key) {
      return 1;
    }
  }
  return 0;
}

int main() {
  int a[100];
  int size, key;
  cout << "enter the size of an array (Max=100):";
  cin >> size;
  cout << "enter the element of the array :";
  takeArray(a, size);
  cout << "enter the key element that you want to find :";
  cin >> key;
  if (linearSearch(a, size, key)) {
    cout << "YES, the key element is here";
  } else {
    cout << "NO, the key element is not here !!!";
  }
}