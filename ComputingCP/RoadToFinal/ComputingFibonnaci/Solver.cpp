#include <iostream>
using namespace std;

int fib(int f1, int f2, int x) {
  if(x == 0) return f1;
  if(x == 1) return f2;
  else return fib(f1,f2,x-1) + fib(f1,f2,x-2);
}

int main() {
  int a,b,c;cin >> a >> b >> c;
  cout << fib(a,b,c) << endl;
  return 0;
}