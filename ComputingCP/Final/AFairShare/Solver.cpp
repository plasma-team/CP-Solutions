#include <bits/stdc++.h>
using namespace std;
typedef int long il;

il gcd(il a,il b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a%b);
}

int main() {
  il n;cin >> n;
  il nums[n];
  for(int i = 0;i < n;i++) cin >> nums[i];
  il temp = gcd(nums[0],nums[1]);
  for(int i = 2;i < n;i++)
      temp = gcd(temp,nums[i]);
  cout << temp << endl;
  for(int i = 0;i < n;i++)
      cout << nums[i]/temp << " ";
  return 0;
}