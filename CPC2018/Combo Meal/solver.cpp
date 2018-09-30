#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {

	int n; cin >> n;
	vector<int> result(n);

	auto f = [](int x, int y, int z) {
		return (x+y)-z;
	};

	int m = n;
	while (n-- > 0) {
		int x, y, z; cin >> x >> y >> z;
		result[n] = f(x, y, z);
	} reverse(result.begin(), result.end());

	while (n++ < m-1) {
		cout << result[n] << endl;
	}

	return 0;
}