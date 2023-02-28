// que : reverse the words in string : 
#include <bits/stdc++.h>
using namespace std;

string reverse(string x) {
  int i = 0;
  int j = x.length() - 1;
  while (i <= j) {
    swap(x[i], x[j]);
    i++;
    j--;
  }
  x.push_back(' ');
  return x;
}

int main() {
  string s, x;
  vector<string> v;
  getline(cin, s); //to take whole line input
  
  int i = 0;
  int j = s.length() - 1;
  while (s[i] != '\0') {
    if (s[i] != ' ') {
      x.push_back(s[i]);
    } else if (s[i] == ' ') {
      v.push_back(reverse(x));
      x.clear();
    }
    i++;
  }
  v.push_back(reverse(x));
  for (int i = 0; i < v.size(); i++) {
    cout << v[i];
  }
  return 0;
}
/*
que on string :

https://leetcode.com/problems/reverse-string/
https://www.codingninjas.com/codestudio/problems/check-if-the-string-is-a-palindrome_1062633?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5
https://leetcode.com/problems/valid-palindrome/
https://leetcode.com/problems/reverse-words-in-a-string-ii/
https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1
https://www.codingninjas.com/codestudio/problems/replace-spaces_1172172?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5
https://leetcode.com/problems/remove-all-occurrences-of-a-substring/
https://leetcode.com/problems/string-compression/
https://leetcode.com/problems/permutation-in-string/
https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

*/