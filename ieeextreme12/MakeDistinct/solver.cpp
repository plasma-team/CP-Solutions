#include <bits/stdc++.h>
using namespace std;

bool inArray(vector<int> cek, int x) {
  int i = 0;
  bool coba = false;
  if(cek.size() != 0) {
    while(cek[i] != x && i < cek.size()) i++;
    coba = cek[i] == x;
  }
  return coba;
}

int minOp(vector<int> nums, int n) {
  map<int, int> mp;
  sort(nums.begin(), nums.end());
  int smallest = nums[0], greatest = nums[nums.size()-1];
  for (int i = 0; i < n; i++)
      mp[nums[i]] += 1;
  int total = 0,x;
  for(auto it = mp.begin(); it != mp.end();it++) {
    if((*it).second > 1) {
      for(int i = 0;i < (*it).second-1;i++) {
        int sBawah = (*it).first-smallest, sAtas = greatest-(*it).first;
        if(sBawah <= sAtas) smallest -= sBawah + 1;
        if(sAtas < sBawah) greatest += sAtas + 1;
        total += ((sBawah <= sAtas) ? sBawah:sAtas) + 1;
      }
    } else {
      if((*it).first > greatest) greatest = (*it).first;
      if((*it).first < smallest) smallest = (*it).first;
    }
  }
  return total;

}

int main() {
  int n;cin >> n;
  vector<int> nums (n);
  for(int i = 0;i < n;i++) cin >> nums[i];
  cout << minOp(nums,n) << endl;
  return 0;
}
