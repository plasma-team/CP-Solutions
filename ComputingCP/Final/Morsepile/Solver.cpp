#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, word = "";
  getline(cin, s);
  for (int i = 0; i < s.length(); i++) {
    if (s[i] != '/' && s[i] != '#') {
      word += s[i];
    } else if (s[i] == '#') {
      cout << " ";
    } else if(s[i] == '/' && word.length() != 0){
      int x = 0;
      for (int i = 0; i < word.length(); i++) {
        if (word[i] == '-')
          x += pow(2, (word.length() - 1) - i);
      }
      cout << (char)(64 + x);
      word = "";
    }
  }
  return 0;
}