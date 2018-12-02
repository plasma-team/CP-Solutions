#include <bits/stdc++.h>
using namespace std;
typedef int long il;

int main() {
  il n2 = 0, n5 = 0, n;
  cin >> n;
  if (n == 1 || n == 3) {
    cout << "impossible\n";
  } else if (n == 5) {
    cout << "0 1\n";
  } else {
    if(n%5 == 0) {
        n5 = n/5;
    } else {
      do {
        n = n - 2;
        n2++;
      } while (n % 5 != 0);
      n5 = n / 5;
    }
    cout << n2 << " " << n5 << endl;
  }
  return 0;
}