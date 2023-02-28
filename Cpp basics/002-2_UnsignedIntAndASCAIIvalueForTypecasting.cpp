#include <iostream>
using namespace std;

int main() {
  
// --> ASCII values for typecasting 
  int a = 'a';
  cout << a << endl;// 97 is ascii value of a 
  
  char ch = 98;
  cout << ch << endl;//b is character of ascii value 98

  char ch1 = 123456; // !!!this is not @ 's ascaii value // run in vs code for learn more ...
  cout << ch1 << endl; // if we put bigger value than that datatype's allocated mamory block than it will consider last some digit as a value and give output according to that value.



  // --> understanding the possitive and negative int 
  int x = 122;
  cout << x << endl;

  int y = -122;
  cout << y << endl; 

  unsigned int z = -122;
  cout << z << endl; // here the concept of representation of negative number is comes into place
  //in binary covertion, during 2's complement most significant bits are 111... and as it is unsigned, it will consider it as possitve number. that's why it is giving the huge value
  
  return 0;
}