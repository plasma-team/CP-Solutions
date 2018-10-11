#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main(){
	vector<string> st;
	int n, i = -1;
	
	cin >> n;
	while (i++ < n-1) {
		string in; cin >> in;
		st.push_back(in);
	}

	sort(st.begin(),st.end(), [](string x, string y) -> bool { 
    	return x.length() == y.length() ? x > y : x.length() > y.length();
	});

	while (i-- > 0) cout << st[i] << endl;

	return 0;
}