// Bitwise operaters : perform task on binary level
/*
And  &  // any one 0 => 0     (x)
Or   |  // any one 1 => 1     (+)
Not  ~  // compliment (0 => 1, 1 => 0)
Xor  ^  // all same then and then only => 0            */

#include <iostream>
using namespace std;
int main() {

  int a = 4;
  int b = 6;
  cout << "~a : " << ~a << endl;
  cout << "~b : " << ~b << endl;
  cout << "a&b : " << (a & b) << endl; //brackets are imp here
  cout << "a|b : " << (a | b) << endl;
  cout << "a^b : " << (a ^ b) << endl;

  /*
left shift     <<  :
(3<<1) => left shift 3 by 1 bit
(5<<2) => left shift 5 by 2 bits
right shift    >>  :
(8>>1) => right shift 8 by 1 bit
(16>>2) => right shift 16 by 2 bits
*/

  cout<<(3<<1)<<endl; // 6 = 3*(2)
  /* 3 = 011 = 000...00011 <<1  000...00110 = 6
*/
  cout<<(3<<2)<<endl; // 12 = 3*(2*2)
  /* 3 = 011 = 000...00011 <<2  000...01100 = 12
*/
  cout<<(8>>1)<<endl; // 4 = 8/(2)
  /* 8 = 000...001000 >>1 000...000100 = 4
*/
  cout<<(16>>2)<<endl; // 4 = 16/(2*2)
  /* 16 = 000...010000 >>2 000...000100 = 4
*/
  cout<<(5<<3)<<endl; // 40 = 5*(2*2*2)
  /* 5 = 000...0000101 <<3 000...0101000 = 40
*/
  cout<<(17>>1)<<endl; // 8 = 17/(2)  //bit by bit
  /* 17 = 000...010001 >>1 00...001000 = 8
*/
  cout<<(17>>2)<<endl; // 4 = 17/(2*2)
  /* 17 = 000...010001 >>2 0...000100 = 4
*/

// obeserving aboves pattern we can see for left shift by 1 bit can multiply the operater by 2, and right shifting by 1 bit can divide by 2 (roughtly) 

  // but but but, we can not do this for big numbers which binary is something 01...10 cause, its shifting can change number into negative .(10...100)
}