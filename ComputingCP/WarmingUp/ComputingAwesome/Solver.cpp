#include <bits/stdc++.h>
using namespace std;

int main() {
      map<string, int> mp;
        string word;
	  while(cin >> word && word != "") mp[word] += 1;
	    for(auto it = mp.begin(); it != mp.end();it++)
		      cout << (*it).first << " " << (*it).second << endl;
    return 0;
}
