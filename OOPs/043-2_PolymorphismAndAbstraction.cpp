//topic covered : polymorphism and abstraction

//for detailed and easy explaination read below documentation
//https://www.codingninjas.com/codestudio/guided-paths/basics-of-c/content/118817/offering/1382248

/*poli means many and morph means forms
polimorphism : existing in multiple forms (ex: my father, mother's husband, uncle's brother)

2 types :
1.Compile (static) time polimorphism : is archieved using
  a)function overloading with 
    1. different number of arguments 
    ex: int func(){}
        int func(char ch){}
        int func(char ch, int a){}
    2. different types of arguments
    ex: int func(int a){}
        int func(char ch){}
      or  int func(int a, int b){}
          int func(char ch, int a){}
  b)operater overloading //for explaination read documentation
  
2.Run (dynamic) time polimorphism : is archieved using
  virtual functions
  method overriding 
*/

/*
abstraction : implimentation hidding (required (essential) thing only)
*/

#include <iostream>
using namespace std;

int main() {
  cout << "open this link: https://www.codingninjas.com/codestudio/guided-paths/basics-of-c/content/118817/offering/1382248" << endl;;
}