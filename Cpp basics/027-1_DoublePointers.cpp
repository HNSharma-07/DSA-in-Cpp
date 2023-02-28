#include <iostream>
using namespace std;

void update(int **p){
  //p = p + 1; // case 1 

  //*p = *p + 1; // case 2 
  
  **p = **p + 1; // case 3 
}

int main() {
  int i = 5;
  int *ptr1 = &i; // normal pointer
  int **ptr2 = &ptr1; // double pointer
  // int ***ptr3 = &ptr2; // triple pointer (not IMP)

  cout << i << endl;
  cout << *ptr1 << endl;
  cout << **ptr2 << endl << endl;

  cout << &i << endl;
  cout << ptr1 << endl;
  cout << *ptr2 << endl << endl;

  cout << ptr2 << endl;
  cout << &ptr1 << endl;
  //cout << &&ptr2 << endl; // && cannot do  

  cout << endl << "before update :" << endl;
  cout << i << " " << ptr1 << " " << ptr2 << endl;

  update(ptr2);
  cout << "after update :" << endl;
  cout << i << " " << ptr1 << " " << ptr2 << endl;
  
}