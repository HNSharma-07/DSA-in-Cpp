#include <iostream>
using namespace std;

int main() {
  int num = 5;
  cout << "value of num :" << num << endl;
  // addres of operater (&)
  cout << "add of num : " << &num << endl;

  //declairing pointer :
  int *ptr = & num; // with intializing

  // both are same thing above and below
  // int *ptr = 0; // initializing is good that's why =0
  // ptr = &num;
  cout << "add of num : " << ptr << endl;
  cout << "value of num : " << *ptr << endl << endl;

  cout << "size of pointer is : " << sizeof(ptr) << endl << endl;
  //pointer (addres) takes 8 bytes in memory

  int a = 3;
  int i = a;
  cout << "a before : " << a << endl;
  i++;
  cout << "a after : " << a << endl;

  int *p = &a;
  cout << "a before : " << a << endl;
  (*p)++;
  cout << "a after : " << a << endl << endl;

  //copying a pointer
  int *q = p;
  cout << p << " - " << q << endl;
  cout << *p << " - " << *q << endl << endl;

  // pointer arithmatics :
  // ptr + 1 = sizeof(ptr) + (for int +4, for doubles +8)
  int n2 = 8;
  int *p2 = &n2;
  (*p2)++;
  cout << *p2 << endl;
  cout << p2 << endl;
  p2++;
  cout << *p2 << endl;
  cout << p2 << endl; 
}