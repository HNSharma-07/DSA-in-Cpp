// complie and run time polymorphism, virtual function, abstract class
#include <iostream>
#include <vector>
using namespace std;

// compile time polymorphism:
// function overloading:
class area
{
public:
    int calcArea(int r) { return 3.14 * r * r; }

    int calcArea(int l, int b) { return l * b; }
};

// operator overloading:
class complex
{
    int real, imag;

public:
    complex(){}; // default cunstructor
    complex(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }

    void display() { cout << real << " +i" << imag << endl; }

    complex operator+(complex &c)
    {
        complex ans;
        ans.real = real + c.real;
        ans.imag = imag + c.imag;
        return ans;
    }
};

// run time polymorphism:
// virtual function:
class animal
{
public:
    // every child class of animal must contains speak function otherwise it will
    // throw an error (as it is a virtual function)
    virtual void speak()
    { // to deside it at run time // without virtual it will
      // assign this at compile time
        cout << "speaking" << endl;
    }

    // virtual void speak() = 0; //pure virtual function (Abstact class) jiska
    // kabhi bhi object create naa ho
};

class dog : public animal
{
public:
    void speak() { cout << "barking" << endl; }
};

class cat : public animal
{
public:
    void speak() { cout << "meowing" << endl; }
};

class other : public animal
{
public:
    void speak() { cout << "hu hu" << endl; }
};

int main()
{

    cout << "Compile time polymorphism:" << endl;
    cout << " 1.function overloading: ";
    area circle;
    area rectangle;
    cout << circle.calcArea(3) << " ";        // with one parameter
    cout << rectangle.calcArea(3, 4) << endl; // with two parameters

    cout << " 2.operator overloading: ";
    complex c1(2, 3);
    complex c2(4, 5);
    complex c3 = c1 + c2; // c3 is a calling object, c2 is passed as an argument
                          // and + is an operator
    c3.display();

    cout << "Run time polymorphism:" << endl;
    animal *p;
    p = new dog();
    p->speak(); // huhu without virtual function

    cout << endl;

    // we create parent class pointer so that we can easily iterate all the
    // children througth it
    vector<animal *> animalPark;
    animalPark.push_back(new dog());
    animalPark.push_back(new cat());
    animalPark.push_back(new other());

    for (int i = 0; i < animalPark.size(); i++)
    {
        animalPark[i]->speak();
    }
}