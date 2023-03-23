//topic covered : cunstructers, type of cunstructers, "this" keyword, shallow copy in copy cunstructer

#include <iostream>
#include<string.h>
using namespace std;

class Hero {
  public:

  int health;
  char level;


  Hero() { //1.default constructer(hidden) which has no parameters
    cout << "Default constructor called" << endl;
    name = new char[100];
  } //if we create our constructor then the default constructer will automatically get deleted.


  //2.parameterised constructor
  Hero(int health) {//with one parameter
    cout << "value of this : " << this << endl;
    this -> health = health;
/*  of object        of parameter  */ 
    //we have copied input(parameter) health into objects health
  }
// keyword "this" is a pointer to the current object 

  Hero(int health, char level) {//with two parameter
    this -> health = health;
    this -> level = level;
  }


/*constructor means we are talking about object creation and copy constructor means we want to copy object */
  //3.copy constructor (hidden, likewise default constructor if we create copy constructor manually than that already made copy constructor (let's say default copy constructer) will get deleted)

//default copy constructer do shellow copy, we can manually create our own copy constructer that do deep copy (in this file we have not created copy constructer that do deep copy, we will see it next file )

  //creating copy constructer manually
  Hero(Hero &temp) {//giving pass by reference (because in pass by value it will stuck in infinite loop and show error )
    cout << "copy cunstructor called" << endl;

    this->name = temp.name;
    this->health = temp.health;
    this->level = temp.level;
  }

  void print() {
    cout << " health : " << this->health << endl;
    cout << " level : " << this->level << endl;
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

};


int main() {

  Hero Ramesh; //when we create an object, the constructor (that default [  Ramesh.Hero()  ], if we not created manually) will be called.

  cout << endl;
  
  Hero Suresh(5);
  cout << "addres of suresh : " << &Suresh << endl;
  Suresh.health = 2;
  cout << "suresh helth : " << Suresh.health << endl;

  cout << endl;

  Hero M(15, 'A');
  cout << "for M :" << endl;
  M.print();

  //copy constructor
  Hero C(M); //coping M into C object
  cout << "for C :" << endl;
  C.print();
  cout << endl;

  
  //shallow copy and deep copy 
/*
  shallow copy : we access same memory by different names. (ex: in this case same memory address stored in h1.name and h2.name )
  deep copy : different memory for different use. (ex: in this case we made another array and send that memory )
  */
  
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
  h2.display(); // forth : after change h2 (h2 will also change)
}