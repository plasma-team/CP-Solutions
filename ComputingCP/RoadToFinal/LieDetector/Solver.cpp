#include <iostream>
using namespace std;

int main() {
  int n;cin >> n;
  string word;cin >> word;
  string status = word;
  for(int i = 1;i < n;i++) {
    cin >> word;
    if(word == "LIE" && status == "TRUTH") status = "LIE";
    else if(word == "LIE" && status == "LIE") status = "TRUTH";
  }
  cout << status << endl;
  return 0;
}