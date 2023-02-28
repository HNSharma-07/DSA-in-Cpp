/*

Key Differences Between Character Array and String :
A character array is a collection of variables which are of character datatype. // String is a class that is instantiated to declare strings. //
Using index value you can access a character from a character array. On the other hand, if you want to access a particular character in a string, you can access it by function string’s_name.charAt(index).
As an array is not a datatype similarly a character also is not a datatype. On the other hand, String being a class act as a reference type hence, it can be said String is a data type.
You can not apply any operator on a character array whereas, you can apply operators on String.
Being an array character array has a fixed length and its boundaries can be easily overrun. Where String does not have any boundaries.
Array elements are stored in a contiguous memory location hence that can be accessed faster than string variable.

*/

#include <iostream>
using namespace std;

int main() {
  string str;
  cout << "enter the string : ";
  cin >> str;
  
  for(int i = 0; str[i] != '\0'; ++i){
    cout << str[i];
    } // same as //  cout << str;

  cout << endl << str.capacity(); // depends upon string you entered
  cout << endl << str.max_size(); // constant 
  cout << endl << str.length() << endl; // str.size() //both are same 
  str.push_back('_');
  str.push_back('S');
  cout << str.length() << endl;
  cout << str << endl;
  str.pop_back();
  cout << str << endl;
  /*  some inbuilt func :
strcmp(s1,s2);  give !=0 when not equal, else give =0
strcpy(s1,s2);  copy s2 in s1
explore other like : str.find(__);  str.erase(__); ...
*/

/*
to know more string functions : 
https://cplusplus.com/reference/string/string/
*/

// cin.getline(str,len); // explore this 
// H.W. : getline() and custom delimeter 
  
}