// char array : is a character datatyped array, which is terminated by null char('\0'). 
// null char : the char which is asscii value is 0.
#include <iostream>
using namespace std;

int getLength(char name[]) {
  int cnt = 0;
  for (int i = 0; name[i] != '\0'; i++) {
    cnt++;
  }
  return cnt;
}

void reverseString(char name[], int length) {
  int s = 0;
  int e = length - 1;
  while (s < e) {
    swap(name[s++], name[e--]);
  }
}

bool checkPalindrome1(char name[], int length) {
  int s = 0;
  int e = length - 1;
  while (s <= e) {
    if (name[s] != name[e]) {
      return false; // 0
    } else {
      s++;
      e--;
    }
  }
    return true; // 1
}

char toLowercase(char ch){
  if (ch>='a' && ch<='z') {
    return ch;
  }
  else {
    char temp = ch - 'A' + 'a';
    return temp;
  }
}

bool checkPalindrome2(char name[], int length) {
  int s = 0;
  int e = length - 1;
  while (s <= e) {
    if (toLowercase(name[s]) != toLowercase(name[e])) {
      return false; // 0
    } else {
      s++;
      e--;
    }
  }
    return true; // 1
}


int main() {
  char name[20];

  cout << "enter your name :" << endl;
  cin >> name;
  // cin ignore the input after space, tab and enter

  cout << "Your name is " << name << endl;

  cout << "length : " << getLength(name) << endl;

  cout << "after revrse the string :" << endl;
  reverseString(name, getLength(name));
  cout << name << endl;

  cout << "is name palindrome? (case sensetive) : " << checkPalindrome1(name, getLength(name)) << endl;
  cout << "is name palindrome? : " << checkPalindrome2(name, getLength(name)) << endl;
}