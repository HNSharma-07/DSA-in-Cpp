/* when program compiles it has two memories
1) stack memory : compile time allocated (static memory allocation)
2) heap memory : run time allocated (Dynamic memory allocation) : if we want to
create new variable at run time (dynamically) then we need to use "new" key word
--> syntax : new char; (it create char type variable in heap memory, it returns
address and we cannot give it a name) as it returns address we can declair as
below: char *ch = new char;
*/
#include <iostream>
using namespace std;

int sum(int arr[], int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return sum;
}

int main() {
  /* syntax :
  int *ptr = new int; // to create int var in heap memory
  int *arr = new int[5]; // to create int array of size 5 in heap memory */

  /*
int n;
cin >> n;
int arr[n]; // this (give size of array while runtime in stack memory) is NOT
recommended
--> Do below instad :
*/

  int size;
  cin >> size;
  int *arr = new int[size];
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  int ans = sum(arr, size);

  cout << "the sum is: " << ans << endl;
}
/*  stack memory delet automatically after need is done.
but, dynamic (heap) memory we need to manually delete by using delete keyword in
c++.

static example :
while(true) {
  int i = 5;
} // new variable create and delete each time

dynamic example : (system crash :( )

while(true) {
  int *ptr = new int;
}
//ptr will free automaically as it is stack memory But, int will not delete
automatically and heap memory will be full once ( 4 + 4 + 4 ...)

-> delete syntax:

  int * i = new int;
  delete i;


  int *arr = new int[50];
  delete []arr[50];

*/