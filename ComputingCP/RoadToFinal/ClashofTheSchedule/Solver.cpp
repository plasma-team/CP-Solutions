#include <iostream>
using namespace std;

int main() {
  unsigned int a,b,gcd,temp;cin >> a >> b;
  gcd = a;
  temp = b;
  while(gcd != temp)
    if(gcd > temp) gcd -= temp;
    else temp -= gcd;
  cout << a*b/gcd << endl;
  return 0;
}