// data types and variable

#include <iostream>
using namespace std;
int main() {

  int a = 12;
  cout << a ;

  char c = '@';
  cout << c << endl;

  bool b1 = false; // true;
  cout << b1 << endl;

  float f = 1.2234;
  cout << f << endl;

  double d = 1.523;
  cout << d << endl;

  cout << "\nsize of int is : " << sizeof(a);
  cout << "\nsize of bool is : " << sizeof(b1);
  cout << "\nsize of double is : " << sizeof(d);
  cout << "\nsize of float is : " << sizeof(f);
  cout << "\nsize of char is : " << sizeof(c);
  
  return 0;
}

// int takes 4 bytes = 32 bits
// char takes 1 byte = 8 bits 
// float takes 4 bytes = 32 bits
// double takes 8 bytes = 64 bits
// bool takes 1 byte but, ideally it needs one bit only

// 1 byte is smallest addresable size for CPU