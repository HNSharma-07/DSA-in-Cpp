#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "enter n : " << endl;
  cin >> n;

  // int row = 1;  //1st pattern
  // while (row <= n)
  // {
  //     int col = 1;
  //     while (col <= n)
  //     {
  //         char ch = 'A' + col - 1;
  //         cout << ch << " ";
  //         col++;
  //     }
  //     cout << endl;
  //     row++;
  // }


  
  // int row = 1; //2nd pattern
  // while (row <= n) {
  //   int col = 1;
  //   char ch = 'A' + row - 1;
  //   while (col <= n) {
  //     cout << ch << " ";
  //     ch++;
  //     col++;
  //   }
  //   cout << endl;
  //   row++;
  // }

  

  // int row = 1; // 3rd pattern
  // while (row <= n) {

  //   int space = n - row; // let's print space first
  //   while (space) {
  //     cout << " ";
  //     space--;
  //   }

  //   int col = 1; // then star in row
  //   while (col <= row) { // col <=n try for this also
  //     cout << '*';
  //     col++;
  //   }

  //   cout << endl;
  //   row++;
  // }

  

  int row = 1; // 4th dabangg pattern
  while (row <= n) {

    int col1 = n - row + 1; // 1st part
    int count1 = 1;
    while (col1) {
      cout << count1 << " ";
      count1++;
      col1--;
    }

    int star = 1; // 2nd part whole star pyramid
    while (star <= 2 * (row - 1)) {
      cout << "* ";
      star++;
    }

    int col2 = n - row + 1; // last part
    int count2 = col2;
    while (col2) {
      cout << count2 << " ";
      count2--;
      col2--;
    }

    cout << endl;
    row++;
  }

}