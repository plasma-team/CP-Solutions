#include <bits/stdc++.h>
using namespace std;

bool isBeautifull(int long a) {
    int long i = 1, total = 0;
    while(total != a && i < a) {
        total += i;
        i++;
    }
    return a == total;
}

int main() {
    int T;cin >> T;
    for(int i = 0;i < T;i++) {
        int long x;cin >> x;
        cout << "Case #" << i + 1 << ": " << (isBeautifull(x) == 1 ? "YES\n":"NO\n");
    }
    return 0;
}