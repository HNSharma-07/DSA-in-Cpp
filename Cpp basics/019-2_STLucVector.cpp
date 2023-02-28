// vector : Vectors are the same as dynamic arrays with the ability to resize
// itself automatically when an element is inserted or deleted, with their
// storage being handled automatically by the container.
// uc = uncurated

#include <iostream>
#include <vector> // including vector frosm STL
using namespace std;

int main() {
  vector<int> v;
  cout << "size : " << v.size() << endl;
  cout << "capacity : " << v.capacity() << endl << endl;

  v.push_back(1);
  cout << "size : " << v.size() << endl;
  cout << "capacity : " << v.capacity() << endl << endl;

  v.emplace_back(2); //it is more faster than push_back
  cout << "size : " << v.size() << endl;
  cout << "capacity : " << v.capacity() << endl << endl;

  v.push_back(3);
  cout << "size : " << v.size() << endl;
  cout << "capacity : " << v.capacity() << endl << endl;

  // working : when we insert an element beyond its capacity, it creates another
  // vector with 2x capacity, copy main vector in it, insert new element and
  // main vector will be dead.

  cout << "first element : " << v.front() << endl;
  cout << "last element : " << v.back() << endl;
  cout << "element at 2nd index : " << v.at(2) << endl << endl;

  cout << "before pop :" << endl;
  for (int i : v) {
    cout << i << " ";
  }
  cout << endl;

  v.pop_back();

  cout << "after pop :" << endl;
  for (int i : v) {
    cout << i << " ";
  }
  cout << endl << endl;

  cout << "before clear : " << endl;
  cout << " size : " << v.size() << endl;
  cout << " capacity : " << v.capacity() << endl;
  cout << " is v empty? : " << v.empty() << endl;

  v.clear();

  //v.erase(v.begin(),v.begin()+2); // to delete slice of vector // delete the part of [) this way 
  cout << "after clear : " << endl;
  cout << " size : " << v.size() << endl;
  cout << " capacity : " << v.capacity() << endl;
  cout << " is v empty? : " << v.empty() << endl << endl;

  vector<int> a(5, 1); // create vector of int type named a with the size of 5
                       // and initialize every element with 1.
  cout << "print a :" << endl;
  for (int i : a) {
    cout << i << " ";
  }
  cout << endl << endl;

  vector<int> last(a); // copying a in last
  cout << "print last :" << endl;
  for (int i : last) {
    cout << i << " ";
  }
  cout << endl;
}