//deque (duoble ended queue)
//uc = uncurated

#include <deque> // including deque from STL
#include <iostream>
using namespace std;

int main() {
  deque<int> d;

  d.push_back(1);
  d.push_front(2);
  d.push_back(3);
  for (int i : d) {
    cout << i << " ";
  }
  cout << endl << endl;

  /*
  d.pop_back();
  for(int i:d){
    cout<<i<<" ";
  }cout<<endl;

  d.pop_front();
  for(int i:d){
    cout<<i<<" ";
  }cout<<endl<<endl;
  */

  cout<<"1st element : "<<d.front()<<endl;
  cout<<"last element : "<<d.back()<<endl;
  cout<<"2nd element (at 1st index) : "<<d.at(1)<<endl<<endl;

  cout<<"before clear :"<<endl;
  cout<<" is d empty? : "<<d.empty()<<endl;
  cout<<" size : "<<d.size()<<endl;
  
  // d.erase(d.begin(),d.end()-1); // to remove slice of deque.

  cout<<"after clear :"<<endl;
  d.clear();
  cout<<" is d empty? : "<<d.empty()<<endl;
  cout<<" size : "<<d.size()<<endl;
  
}