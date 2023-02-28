// recursion and linear search
#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key) {
  //base cases
  if(size == 0){
    return false;
  }
  
  if(arr[0] == key) {
    return true;
  }
  else {
    bool remainingPart = linearSearch(arr+1, size-1, key);
    return remainingPart;
  }
}

int main() {
  int arr[5];

  int size, key;
  cout << "enter the size[max=5] : ";
  cin >> size;

  cout << "enter the elements : " << endl;
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  cout << "enter the element you want to find : ";
  cin >> key;

  bool ans = linearSearch(arr, size, key);
  if (ans) {
    cout << "element is PRESENT" << endl;
  } 
  else {
    cout << "element is ABSENT" << endl;
  }
}