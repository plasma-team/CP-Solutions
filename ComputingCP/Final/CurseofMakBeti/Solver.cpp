#include <bits/stdc++.h>
using namespace std;
typedef int long il;

int main() {
    il n, ans = 0, power = 0;cin >> n;
    for(il i = 0;i < (2*n-1);i++) {
        il x;cin >> x;
        if(power < n && x < 0) {
            x = abs(x);
            power++;
        }
        ans += x;
    }
    cout << ans << endl;
    return 0;
}