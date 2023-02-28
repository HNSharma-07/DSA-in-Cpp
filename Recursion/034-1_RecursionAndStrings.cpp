#include <iostream>
using namespace std;

void reverse(string &name, int i, int j) { //pass by reference as we want reversed string (using pass by value it will give copy to function)
  //base case
  if(i>j){
    return ;
  }

  swap(name[i++], name[j--]);

  reverse(name, i, j);
}

bool isPalindrome(string name, int i, int j) {
  // base case
  if (i > j) {
    return 1;
  }

  if (name[i] != name[j]) {
    return 0;
  } 
  else {
    return isPalindrome(name, i + 1, j - 1); // recursive call
  }
}

int main() {
  string name;
  cout << "Enter the name : ";
  cin >> name;

  int i = 0, j = name.length() - 1;

  reverse(name, i, j);
  cout << "reversed name is : " << name << endl;
  
  if (isPalindrome(name, i, j)) {
    cout << "Name is palindrome" << endl;
  } 
  else {
    cout << "Name is NOT palindrome !" << endl;
  }
}