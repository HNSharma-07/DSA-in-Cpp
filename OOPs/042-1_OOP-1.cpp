// topic covered : OOPs definition, objects and classes, access modifiers, getter and setter

/*
oop : Object Oriented Programing
it is a type of programing style where things revolve around object

obect : is an entity which has two things
1.state/properties  2.behaviour 

class : is an user defined datatype
and an object is instance of class 

*/

#include <iostream>
using namespace std;

//making class called Hero
class sample {

  //  properties/data members of Hero class
  int health;

};


//empty class : class without properties
class empty {
//nothing
};


//access modifiers : where can you access the properties of class's data members (scope of the data members) 
/*
  Three(3) types of access modifiers
  1. private (Default) // can access in that class only
  2. public // can access from outside the class as well
  3. protected // will learn further in child class concept

  we cannot access private data members outside that class directly, but we can use getters and setters here.
  getters and setters are functions that we make inside that class and use it
  
*/


class Hero {
  int health; //private by default


  public: //we can access outside the class from onwards
  char level;

  void print() { // will not give error because scope of private properties lies in that class  
    cout << health << endl;
  }

  //getters and setter
  int getHealth() {
    return health;
  }

  char getLevel() {
    return level;
  }

  void setHealth(int h) {
    health = h;
  }

  void setLevel(char l) {
    level = l;
  }

// learn about padding and greedy alignment 

};


int main() {
  
  //creating object named h1 of sample type
  sample h1;

  //creating empty object named h2
  empty h2;
  
  cout << "size: " << sizeof(h1) << endl; // 4 byte as per int
  cout << "size: " << sizeof(h2) << endl; // allocate 1 byte for existance

  
  //creating object named Ramesh of Hero type
  Hero ramesh;
  cout << "ramesh :" << endl;
  //access through dot operater (.)
  ramesh.level = 'A';
  cout << " level is : " << ramesh.level << endl;
  
  // cout << "helth is : " << ramesh.health << endl; // throw error becuse helth is private property
  cout << " health is : " << ramesh.getHealth() << endl; //use of getter

  //use of setter
  ramesh.setHealth(07);
  cout << " health is : " << ramesh.getHealth() << endl; // return 7 instad of that garbage value

  /*
  we created object statically above, likewise we can create dynamically also 

  we can create through dynamic memory allocation using new keyword
  ex : int *i = new int; // to create int variable
  */

  //dynamically
  Hero *Suresh = new Hero;
  cout << "suresh :" << endl;

  //here we can access in two ways 1:by dereferancing and than using dot operater(.) OR 2:by directly using arrow operator (->)
  (*Suresh).setHealth(6);
  Suresh->setLevel('B');

  cout << " health is : " << Suresh->getHealth() << endl; 
  cout << " level is : " << (*Suresh).level << endl;
  
}