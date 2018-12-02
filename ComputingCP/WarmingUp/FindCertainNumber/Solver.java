#include <bits/stdc++.h>
using namespace std;

int main() {
      int n,x;cin >> n >> x;
        string str = "NOT FOUND!";
	for(int i = 0;i < n;i++) {
	        int a;cin >> a;
		    if(a == x) {
			str = "FOUND IT!";
			break;
		}	      
	}
        cout << str << endl;
	    return 0;

}
