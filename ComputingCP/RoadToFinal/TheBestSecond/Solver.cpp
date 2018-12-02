#include <iostream>
using namespace std;
typedef unsigned int ui;
int main() {
  ui n;cin >> n;
  ui nums[n], largest, second;
  for(int i = 0;i < n;i++) cin >> nums[i];
  if(nums[0] < nums[1]) {
    largest = nums[1];
    second = nums[0];
  } else {
    largest = nums[0];
    second = nums[1];
  }
  for(int i = 2;i < n;i++) {
    if(nums[i] > largest) {
      second = largest;
      largest = nums[i];
    } else if(nums[i] > second && nums[i] != largest) second = nums[i];
  }
  cout << second << endl;
  return 0;
}