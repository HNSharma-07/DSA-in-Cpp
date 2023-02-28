/*  // c++ STL divided in to 4 parts
1. algorithms
2. containers  // pair vector set map queue and so on
3. functions
4. iterators     */

#include <bits/stdc++.h> //it includes all the libraries // but, it takes lots of mamory 
using namespace std;

// pair //consider as utility STL library
void explainPair() {
  cout << "pair : " << endl;
  pair<int, int> p1 = {1, 3};
  cout << p1.first << " " << p1.second << endl;

  pair<int, pair<int, int>> p2 = {1, {3, 4}};
  cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

  pair<int, int> p3;
  p3.first = 33;
  cout << p3.first << " " << p3.second << endl;

  pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
  cout << arr[1].second << endl;
}

void explainVector() {
  cout << "vector : " << endl;
  vector<int> v1; //={1,2}
  v1.push_back(1);
  v1.emplace_back(2); // emplace is faster than push
  cout << v1[0] << endl;

  vector<pair<int, int>> v2; //={1,2,3,4}
  v2.push_back({1, 2});
  v2.emplace_back(3, 4);
  cout << v2[0].first << endl;

  vector<int> v3(3, 20);            //={20,20,20}
  vector<int> v4(4);                //={0,0,0,0}
  vector<int> v5(v3);               // copy v3 in v5
  v3.insert(v3.begin(), 300);       // ={300,20,20,20}
  v3.insert(v3.begin() + 1, 2, 10); // ={300,10,10,20,20,20}
  // insert in a function is costlier (time takes...)
  cout << v3.size() << endl;

  // iterator syntax:

  vector<int>::iterator it = v3.begin();
  cout << *(it) << endl;
  it = it + 2;
  cout << *(it) << endl;

  // to print v3.end() it--; is important because to print begin to end is be
  // like [begin,end)  // hope remember it :(

  for (auto it = v3.begin(); it != v3.end(); it++) {
    cout << *(it) << " ";
  }
  cout << endl;
}

void explainList() {
  cout << "list : " << endl;
  list<int> ls;
  ls.push_back(2);    //{2}
  ls.emplace_back(3); //{2,3}

  ls.push_front(4);    //{4,2,3}
  ls.emplace_front(5); //{5,4,2,3}
  for (int i : ls) {   // for each loop
    cout << i << " ";
  }
  cout << endl;
  // all rest function of list is similer to vector
  // diifference is front insertion can be done in list
}

void explainDeque() {
  cout << "deque : " << endl;
  deque<int> d1;
  d1.push_back(2);    //{2}
  d1.emplace_back(3); //{2,3}

  d1.push_front(4);    //{4,2,3}
  d1.emplace_front(5); //{5,4,2,3}

  d1.pop_back();     //{5,4,2}
  d1.pop_front();    // {4,2}
  for (int i : d1) { // for each loop
    cout << i << " ";
  }
  cout << endl;

  cout << d1.back() << endl;
  cout << d1.front() << endl;
  // all rest function of list is similer to vector
}

void explainStack() {
  cout << "stack : (LIFO)" << endl;
  stack<int> s1;
  s1.push(2);
  s1.push(1);
  s1.emplace(3);

  cout << s1.top() << endl;

  s1.pop();
  cout << s1.top() << endl;
  cout << s1.size() << endl;
  cout << s1.empty() << endl;
}

void explainQueue() {
  cout << "Queue : (FIFO)" << endl;
  queue<int> q1;
  q1.push(2);
  q1.push(1);
  q1.emplace(3);

  cout << q1.back() << endl;
  cout << q1.front() << endl;

  q1.pop();
  cout << q1.back() << endl;
  cout << q1.front() << endl;

  cout << q1.size() << endl;
  cout << q1.empty() << endl;
}

void explainPQ() {
  cout << "priority queue :" << endl;
  cout << "max heap (default)" << endl;
  priority_queue<int> max;
  max.push(5);     //{5}
  max.push(2);     //{5,2}
  max.push(8);     //{8,5,2}
  max.emplace(10); //{10,8,5,2}

  cout << max.top() << endl; // 10

  max.pop();                 // {8,5,2}
  cout << max.top() << endl; // 8

  cout << "min heap " << endl;
  priority_queue<int, vector<int>, greater<int>> min;
  min.push(5);     //{5}
  min.push(2);     //{2,5}
  min.push(8);     //{2,5,8}
  min.emplace(10); //{2,5,8,10}

  cout << min.top() << endl; // 2
}

void explainSet() { // everything is in sorted order and unique
  cout << "set :" << endl;
  set<int> st;
  st.insert(2);
  st.insert(3);
  st.insert(2);
  st.insert(1);
  st.insert(4);
  for (auto i : st) {
    cout << i << " ";
  }
  cout << endl;

  st.erase(st.begin());
  for (auto i : st) {
    cout << i << " ";
  }
  cout << endl;

  cout << "is 1 present ? : " << st.count(1) << endl;
  cout << "is 2 present ? : " << st.count(2) << endl;

  st.insert(1);
  st.erase(4);
  for (auto i : st) {
    cout << i << " ";
  }
  cout << endl;

  auto it0 = st.find(0);
  auto it1 = st.find(1);
  auto it2 = st.find(2);
  auto it3 = st.find(3);
  auto it4 = st.find(4);

  cout << "0 is at : " << *(it0) << endl;
  cout << "1 is at : " << *(it1) << endl;
  cout << "2 is at : " << *(it2) << endl;
  cout << "3 is at : " << *(it3) << endl;
  cout << "4 is at : " << *(it4) << endl;
}

void explainMultiSet() {
  multiset<int> ms; // only sorted not unique
  ms.insert(1);     //{1}
  ms.insert(1);     //{1,1}
  ms.insert(1);     //{1,1,1}

  ms.erase(1); // erase all 1

  ms.erase(ms.find(1)); // erase only one 1
}

void unorderedSet() {
  unordered_set<int> us; // unique
  // every thing like set but it is in randomized ordered
}

void explainMap() { // key must be unique , values can be different
  // keys are in sorted order
  cout << "map :" << endl;
  map<int, string> mp1;
  mp1[1] = "jatin";
  mp1[3] = "aditya";
  mp1.insert({7, "harsh"});
  mp1.insert({6, "vinit"});
  cout << mp1[7] << endl;

  for (auto i : mp1) {
    cout << i.first << " " << i.second << endl;
  }

  mp1.erase(6);
  cout << "after erase :" << endl;
  for (auto i : mp1) {
    cout << i.first << " " << i.second << endl;
  }

  // other are same as set
  unordered_map<int, int> ump; // unordered set concept (randemized key)
  multimap<int, int> mmp;      // similer to multiset (duplicate keys are there)
}

int main() { // driver code
  explainPair();
  cout << endl;
  explainVector();
  cout << endl;
  explainList();
  cout << endl;
  explainDeque();
  cout << endl;
  explainStack();
  cout << endl;
  explainQueue();
  cout << endl;
  explainPQ();
  cout << endl;
  explainSet();
  cout << endl;
  explainMap();
  cout << endl;

  cout << "extra : " << endl;
  int cnt = __builtin_popcount(7); // give number of set bits in binary
  cout << cnt << endl;

  long long num = 653765576;
  int count = __builtin_popcountll(num);
  cout << count << endl;

  string str = "123";
  do {
    cout << str << " ";
  } while (next_permutation(str.begin(), str.end()));

  cout << endl;
}

/*   // some algorithms :

binary_search(v.begin(),v.end(),key);
max(a,b);
min(a,b);
swap(a,b);
reverse(str.begin(),str.end());
rotate(v.begin(),v.begin()+1,v.end());
sort(v.begin(),v.end());
sort(v.begin(),v.end(),greater<int>); // sort in decreasing order

int maxi = *max_element(a,a+n);


*/