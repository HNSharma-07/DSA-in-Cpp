// operaters in c++
#include <iostream>
using namespace std;
int main() {
  // arithmatic operater ->  +  -  *  /  %
  int a1 = 5.0/2;
  cout << a1 << endl;
  cout << 5/2 << endl<<"\n";

  // typecasting : converting one datatype to another datatype.
  float b = (float)5/2; // syntax of typecasting 
  cout << b << endl<<"\n";
  
  cout << 5.0/2 << endl;
  float a2 = 5.0/2;
  cout << a2 << endl;

  // int/int = int 
  // float/int = float
  // datatype of variable should be float if we expect floating output


  // relational operater (to compare) are 
  // ==  <  >  <=  >=  !=
  // = is assignment operater
  
  int x = 2;
  int y = 3;
  
  bool check1 = (x==y);
  cout << "is x==y? : "<< check1 << endl;

  bool check2 = (x>y);
  cout << "is x>y? : "<< check2 << endl;

  bool check3 = (x<=y);
  cout << "is x<=y? : "<< check3 << endl;

  bool check4 = (x!=y);
  cout << "is x!=y? : "<< check4 << endl << endl;

  //logical operaters
  // && and      || or       ! not

  int ve = 23;
  cout << !ve << " and "<< !!ve << endl;

  //bitwise operater will learn further...

}