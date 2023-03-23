//topics covered : encapsulation and inheritance

/* there are 4 piller of OOPs
1. encapsulation
2. inheritance
3. polimorphism
4. abstraction
*/

#include <iostream>
using namespace std;

// encapsulation : wrapping up data members and functions
// used for data/information hidding

// fully encapsulated class : all data members are private marked in class
class encapsulation {
  private:
    string name;
    int age;
    int height;

  public:
    int getAge() {
      return this->age;
    }
};


// inheritance : we inherite some properties in child/sub class from parent/super class. (ex: male class has inherite properties from human class rather than code it twise)
class human {
//private data member of any class cannot be inharited
  public:
    int height;
    int weight;
    int age;

  public:
    int getAge() {
      return this->age;
    }
    void setWeight(int w) {
      this->weight = w;
    }
};

// protected access modifier : it is similer to private (we can not access out side the class), but we can also access it in child class. SHORT STORY : we can access protected properties inside that class and inside its child class.

class male: public human {
// syntax for child class = class childClassName : modeOfInheritance parentClassName
  public:
    string color;

    void sleep() {
      cout << "male sleeping" << endl;
    }
};

/*types of inheritance :
1.single : B is a child of A (simple)
2.multi-level : C is a child of B and B is a child of A and so on...
3.multiple : can be child of multiple parent class
4.hierarchical : one class can be parent of more than one class 
5.hybrid : combination of more than one type of inheritance
*/

class animal { // parent class 
  public:
    int age;
    int weight;

  public:
    void bark() {
      cout << "barking" << endl;
    }
};

class dog: public animal { // child of animal // parent of pugg

};

class pugg: public dog { // child of dog // second level child of animal 
// example of multi-level inheritance
};

//multiple inheritance
class multipleInharitance: public human, public animal{
//inherite properties from both human and animal class
};

//hierarchical inheritance
class cow: public animal{
//animal is parent of both cow and dog; it can be for miltiple like cow, dog, buffelo, horse...
};

//inheritance ambiguity : 
/* when more than one parents class has same named data member than confusion of which data member should be access is happens yhis situation is known as inheritance ambiguity.

to resolve this we use scope resolution operator (::), by spacifing perticuler class from which we want to inherite.

*/
class A {
  public:
    void func() {
      cout << "i am  A" << endl;
    }
};

class B {
  public:
    void func() {
      cout << "i am  B" << endl;
    }
};

class C: public A, public B {
//both parant class has same named functions
};

int main() {
  
  encapsulation first;
  cout << "encapsulation done\n" << endl;

  male object1;
  object1.age = 13;
  cout << object1.age << endl; // we can also access human class properties; as we made male, a child class of human class

  object1.setWeight(55);
  cout << object1.weight << endl;

  object1.color = "brown";
  cout << object1.color << endl << endl;
  
  cout << "solving inharitance ambiguity" << endl;
  C obj;
  
  // obj.func(); // give error 

  obj.A::func(); // will inharite func from A
  obj.B::func(); // will inharite func from B
}