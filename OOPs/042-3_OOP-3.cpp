//topic covered : static data member and static function, deep copy in copy constructer, copy by assignment operater, cunstructer and destructor call in program

#include <iostream>
#include<string.h>
using namespace std;

class Hero {
  public:

  int health;
  char level;

// static data member : belongs to class; we dont need to make object
  static int TimeToComplete;

  Hero() { 
    cout << "Default constructor called" << endl;
    name = new char[100];
  } 

//shallow copy and deep copy 

  /*
  shallow copy : we access same memory by different names. (ex: in this case same memory address stored in h1.name and h2.name )
  deep copy : different memory for different use. (ex: in this case we made another array and send that memory )
  */

  //creating copy constructer manually that do deep copy
  Hero(Hero &temp) {//giving pass by reference (because in pass by value it will stuck in infinite loop and show error )
    cout << "copy cunstructor called" << endl;

    char *ch = new char[strlen(temp.name) + 1]; //+1 for null char
    strcpy(ch, temp.name); //this 2 line for deep copy
    
    this->name = ch;
    this->health = temp.health;
    this->level = temp.level;
  }


  char *name;

  void setName(char name[]) {
    strcpy(this->name, name);
  }

  void display() {
    cout << "[ name : " << this->name << ", ";
    cout << " health : " << this->health << ", ";
    cout << " level : " << this->level << " ]" << endl;
  }


/* static function :
- can only access static members
-dont need to create object
-dont have this keyword (because this keyword is pointer to current object but, here static function dont have object thats why ...)
*/
static int random() {
  return TimeToComplete;
}


/*
-when object creates it calls constructer
-destructer is memory deallocation (when program ends it calls destructer)
-both are hiddenly present and called 
-both have no i/p parmeters
-both have same object's name (but destructers has tild(~) sign at beginnig)

-cunstructer calls one time during object creation
-destructer calls one time during program end (object destruction OR object memory free)
*/
  ~Hero() { 
    cout << "Default destructer called" << endl;
  }

};

int Hero::TimeToComplete = 5; // the syntex to initialize static data member

int main() {

  cout << Hero::TimeToComplete << endl; // we do not need to create object (we can access directly)
  cout << Hero::random() << endl << endl; 
  
  Hero h1; //created object
  
  //giving values
  h1.health = 20;
  h1.level = 'c';
  char name[7] = "Babbar";
  h1.setName(name);
  
  h1.display(); // first : display of h1

  Hero h2(h1); // coping h1 in h2
  h2.display(); // second : display h2 (same as h1)

  h1.name[0] = 'G'; // changing h1 name value
  h1.display(); // third : after change h1
  h2.display(); // forth : after change h2 (h2 remains as it is)
  cout << endl;
  
  // copy by assignment operater
  h1 = h2; //copy h2 in h1 (assigning h2 values to h1)
  h1.display();
  h2.display();
  cout << endl;

  Hero a; // statically 

  Hero *b = new Hero(); // dynamically
  delete b; //in dynamic object creation we need to call destructer and releas memory manually (in statically it automatically calls)
  
}

// H.W. : learn about "const" keyword 